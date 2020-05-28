//**********************************************************************
//		evobjeff.c
//		ﾌｨｰﾙﾄﾞOBJ ｴﾌｪｸﾄ
//**********************************************************************
#define		EVOBJEFF_H_PROTO

#include	<agb.h>
#include 	"common.h"
#include	"actor.h"
#include	"actanm.h"
#include	"calctool.h"
#include	"map.h"
#include	"mapbg.h"
#include	"evobj.h"
#include	"jiki.h"
#include	"fieldmap.h"
#include	"map_attr.h"
#include	"task.h"
#include	"seed.h"
#include	"mus_tool.h"
#include	"weather.h"

//----------------------------------------------------------------------
//		外部参照
//----------------------------------------------------------------------

//----------------------------------------------------------------------
//		define
//----------------------------------------------------------------------

//----------------------------------------------------------------------
//		ﾌﾟﾛﾄ
//----------------------------------------------------------------------
static void EvObjChkActPriSet( actWork *, u8, u8 );

//======================================================================
//		映り込みｱｸﾀｰ
//======================================================================
static s16 ReflectOffset( EventOBJ * );
static void ReflectPalette( EventOBJ *, actWork * );
static void ReflectPaletteSet( EventOBJ *, u8 );
static void ReflectPaletteBridgeSet( EventOBJ *, u8 );
static void EvActReflectMove( actWork * );

//------------------------------------------
//	映り込みｱｸﾀｰ追加
//	In:		ev,act			; ｾｯﾄｲﾍﾞﾝﾄOBJ,ｱｸﾀｰ
//			kind			; 0 = 拡縮,1 = 非拡縮
//------------------------------------------
void EvActReflectSet( EventOBJ *ev, actWork *act, u8 kind )
{
	u8 i;
	actWork *refact;

	i = CopyActPri1( act, act->x, act->y, EVOBJ_BELONG_ACTPRI );

	refact = &ActWork[i];

	refact->move = EvActReflectMove;
	refact->oamData.Priority = BGPRI3;
	refact->oamData.Pltt = EvObjRefPalNoTbl[refact->oamData.Pltt];
	refact->t_mode = 1;									// 非転送型へ

	refact->anm_tbl = DummyActAnmTbl;					// ｱﾆﾒﾀﾞﾐ-化
	ActAnmChg( refact, 0 );
	refact->aff_tbl = DummyActAffTbl;
	refact->affine_sw = 1;

	refact->oampat_sw = OAMPAT_OFF;						// ﾊﾟｯﾄOFF

	refact->work[0] = act->work[0];						// 親元
	refact->work[1] = ev->objID;
	refact->work[7] = kind;								// 種類

	ReflectPalette( ev, refact );						// 映り込みﾊﾟﾚｯﾄ

	if( kind == EOE_REF_NORMAL )
	{
		refact->oamData.AffineMode = 1;
	}
}

//------------------------------------------
//	映りこみ Y ｵﾌｾｯﾄ
//------------------------------------------
static s16 ReflectOffset( EventOBJ *ev )
{
	SXYObjHead *objst;

	objst = SxyObjHeadGet( ev->obj_code );
	return( (s16)objst->y_size - 2 );					// -2 = ｽｷﾏ
}

//------------------------------------------
//	映りこみﾊﾟﾚｯﾄ
//------------------------------------------
static void ReflectPalette( EventOBJ *ev, actWork *act )
{
	s16 bridge[3] = { 12, 28, 44 };
	SXYObjHead *objst;
	u8 attr;

	act->work[2] = 0;

	objst = SxyObjHeadGet( ev->obj_code );

	if( objst->reflect_change_sw == 0 )					// 映り込み操作ﾌﾗｸﾞOFF
	{
		attr = ATR_GetBridgeCode( ev->old_attr );

		if( attr )										// ｱﾄﾘﾋﾞｭｰﾄ橋
		{
			act->work[2] = bridge[attr-1];
			ReflectPaletteBridgeSet( ev, act->oamData.Pltt );
			return;
		}

		attr = ATR_GetBridgeCode( ev->now_attr );

		if( attr )										// ｱﾄﾘﾋﾞｭｰﾄ橋
		{
			act->work[2] = bridge[attr-1];
			ReflectPaletteBridgeSet( ev, act->oamData.Pltt );
			return;
		}
	}

	ReflectPaletteSet( ev, act->oamData.Pltt );
}

//------------------------------------------
//	映りこみ 通常ﾊﾟﾚｯﾄｾｯﾄ
//------------------------------------------
static void ReflectPaletteSet( EventOBJ *ev, u8 palno )
{
	SXYObjHead *objst;

	objst = SxyObjHeadGet( ev->obj_code );

	if( objst->sp_reflect_palNo != NOT_SP_REF_PALID )	// 特殊ﾊﾟﾚｯﾄ使用
	{
		if( objst->oampalNo == MINE_OBJ_PALNO )			// 自機
		{
			EvObjHeroPalSet( objst->palNo, palno );		// 主人公ﾊﾟﾚｯﾄｾｯﾄ
		}
		else if( objst->oampalNo == SP_OBJ_PALNO )		// 特殊OBJ
		{
			EvObjSpPalSet( objst->palNo, palno );		// 特殊ﾊﾟﾚｯﾄｾｯﾄ
		}
		else											// 通常ﾊﾟﾚｯﾄ
		{
			EvObjStayPalSet( EvObjPalIdGet(palno), palno );
		}

		FieldWeather_AdjustObjPal( palno );
	}
}

//------------------------------------------
//	映りこみ 橋ﾊﾟﾚｯﾄｾｯﾄ
//------------------------------------------
static void ReflectPaletteBridgeSet( EventOBJ *ev, u8 palno )
{
	SXYObjHead *objst;

	objst = SxyObjHeadGet( ev->obj_code );

	if( objst->sp_reflect_palNo != NOT_SP_REF_PALID )	// 特殊映り込みﾊﾟﾚｯﾄｱﾘ
	{
		EvObjStayPalSet( objst->sp_reflect_palNo, palno );
		FieldWeather_AdjustObjPal( palno );
	}
}

//------------------------------------------
//	映り込みｱｸﾀｰ動作
//------------------------------------------
static void EvActReflectMove( actWork *act )
{
	EventOBJ *m_ev;
	actWork *m_act;

	m_ev = &EvObj[act->work[0]];
	m_act = &ActWork[m_ev->actno];

	if( m_ev->sw == 0 || m_ev->attr_reflect_sw == 0 ||
		m_ev->objID != act->work[1] )
	{
		act->act_sw = 0;
		return;
	}

	act->oamData.Pltt = EvObjRefPalNo( m_act->oamData.Pltt );
	act->oamData.Shape = m_act->oamData.Shape;
	act->oamData.Size = m_act->oamData.Size;
	act->oamData.AffineParamNo = m_act->oamData.AffineParamNo | 0x10;
	act->oamData.CharNo = m_act->oamData.CharNo;
	act->oamPat = m_act->oamPat;
	act->oampat_no = m_act->oampat_no;
	act->banish = m_act->banish;
	act->x = m_act->x;
	act->y = m_act->y + ReflectOffset( m_ev ) + act->work[2];
	act->cx = m_act->cx;
	act->cy = m_act->cy;
	act->dx = m_act->dx;
	act->dy = -m_act->dy;
	act->scr = m_act->scr;

	if( act->work[7] == EOE_REF_NORMAL )					// 映り込み種類
	{
		act->oamData.AffineParamNo = 0;
		
		if( m_act->oamData.AffineParamNo & 8 )
		{
			act->oamData.AffineParamNo = 1;
		}
	}
}

//======================================================================
//		出口ｶｰｿﾙ
//======================================================================
//------------------------------------------
//	出口ｶｰｿﾙ 追加
//	Out:	u8				; ｱｸﾀｰﾜｰｸﾅﾝﾊﾞ
//------------------------------------------
u8 EvActExitCursorSet( void )
{
	u8 i;
	actWork *act;

	i = AddActorBottom( EvActHeadGet(EVACT_EXIT_CURSOR), 0, 0, EVOBJ_HI_ACTPRI );

	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		act->oamData.Priority = BGPRI1;
		act->scr = 1;
		act->banish = 1;
	}

	return( i );
}

//------------------------------------------
//	出口ｶｰｿﾙ 非表示
//	In:		actno			; ｶｰｿﾙｱｸﾀｰﾜｰｸﾅﾝﾊﾞ
//------------------------------------------
void EvActExitCursorOFF( u8 actno )
{
	ActWork[actno].banish = 1;
}

//------------------------------------------
//	出口ｶｰｿﾙ 出現
//	In:		actno			; ｶｰｿﾙｱｸﾀｰﾜｰｸﾅﾝﾊﾞ
//			site			; 方向
//			mx,my			; 表示ﾏｯﾌﾟ座標
//------------------------------------------
void EvActExitCursorON( u8 actno, u8 site, s16 mx, s16 my )
{
	s16 x,y;
	actWork *act;

	act = &ActWork[actno];

	if( act->banish ||									// OFF
		act->work[0] != mx || act->work[1] != my )		// 更新
	{
		MapCellSizePosDiff( mx, my, &x, &y );
		act = &ActWork[actno];
		act->x = x + 8;
		act->y = y + 8;
		act->banish = 0;
		act->work[0] = mx;
		act->work[1] = my;
		ActAnmChg( act, site - 1 );						// site - 1 = ｱﾆﾒ No
	}
}

//======================================================================
//		影
//======================================================================
//------------------------------------------
//	影種類
//------------------------------------------
static const u8 ShadeKind[4] =
{ EVACT_SHADE8x8, EVACT_SHADE16x8, EVACT_SHADE32x8, EVACT_SHADE64x32 };

static const s16 ShadeOffset[4] =
{ 4, 4, 4, 16 };

//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 影ｱｸﾀｰｾｯﾄ
//	In:		work0,1,2			; OBJ,MAP,DIV ID
//	Out:	無し				; ｱｸﾀｰﾜｰｸﾅﾝﾊﾞ
//------------------------------------------
u32 FeShadeSet( void )
{
	u8 i;
	SXYObjHead *objst;

	i = EvObjIdSeek( FeSetWork[0], FeSetWork[1], FeSetWork[2] );
	objst = SxyObjHeadGet( EvObj[i].obj_code );
	i = AddActorBottom( EvActHeadGet(ShadeKind[objst->shade]), 0, 0, EVOBJ_LOW_ACTPRI0 );

	if( i != ACT_MAX )
	{
		ActWork[i].scr = 1;
		ActWork[i].work[0] = FeSetWork[0];
		ActWork[i].work[1] = FeSetWork[1];
		ActWork[i].work[2] = FeSetWork[2];
		ActWork[i].work[3] = (objst->y_size >> 1) - ShadeOffset[objst->shade];
	}

	return( 0 );
}

//------------------------------------------
//	影ｱｸﾀｰ動作
//------------------------------------------
void EvActShadeMove( actWork *act )
{
	u8 i;
	EventOBJ *ev;
	actWork *ev_act;

	if( EvObjIdPosGet(act->work[0],act->work[1],act->work[2],&i) )
	{
		FeDelActCode( act, FECODE_Shade );
		return;
	}

	ev = &EvObj[i];
	ev_act = &ActWork[ev->actno];

	act->oamData.Priority = ev_act->oamData.Priority;
	act->x = ev_act->x;
	act->y = ev_act->y + act->work[3];

	if( ev->sw == 0 ||
		ev->shade_act_sw == 0 ||
		ATR_IsGrassCheck(ev->now_attr) ||
		ATR_IsWaterCheck(ev->now_attr) ||
		ATR_IsWaterCheck(ev->old_attr) ||
		ATR_IsReflectCheck(ev->now_attr) ||
		ATR_IsReflectCheck(ev->old_attr) )
	{
		FeDelActCode( act, FECODE_Shade );
	}
}

//======================================================================
//		短い草
//======================================================================
//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 短い草ゆれ
//	In:		work0,1			; ﾏｯﾌﾟX,Y
//			work2,3			; 高さ,BGﾌﾟﾗｲｵﾘﾃｨ
//			work4			; OBJID<<8|OBJ_MAP_ID
//			work5			; OBJ_DIV_ID
//			work6			; MAP_ID<<8|MAP_DIV_ID
//			work7			; ON = ｱﾆﾒ無し
//	Out:	nothing	
//------------------------------------------
u32 FeShortGrassShakeSet( void )
{
	u8	i;
	s16 x,y;
	actWork *act;

	x = FeSetWork[0];
	y = FeSetWork[1];
	MapCellSizePosDiffOffs( &x, &y, 8, 8 );

	i = AddActorBottom( EvActHeadGet(EVACT_SHORTGRASS_SHAKE), x, y, 0 );

	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		act->scr = 1;
		act->oamData.Priority = FeSetWork[3];
		act->work[0] = FeSetWork[2];					// 高さ
		act->work[1] = FeSetWork[0];					// X
		act->work[2] = FeSetWork[1];					// Y
		act->work[3] = FeSetWork[4];					// ID
		act->work[4] = FeSetWork[5];
		act->work[5] = FeSetWork[6];

		if( FeSetWork[7] )
		{
			ActAnmOffsChg( act, GRASS_ANMOFFS_ENDNO );
		}
	}

	return( 0 );
}

//------------------------------------------
//	短い草揺れ 動作
//------------------------------------------
void FeShortGrassShakeMove( actWork *act )
{
	u8 no,work,obj_id,map_id,div_id;
	EventOBJ *ev;

	map_id = act->work[5] >> 8;							// map ID
	div_id = act->work[5] & 0xff;

	if( MapChange.chg_flag && (Fld.MapID.map_id != map_id || Fld.MapID.div_id != div_id) )
	{
		act->work[1] -= MapChange.diffx;
		act->work[2] -= MapChange.diffy;
		act->work[5] = ((u8)Fld.MapID.map_id << 8) | (u8)Fld.MapID.div_id;
	}

	obj_id = act->work[3] >> 8;							// obj ID
	map_id = act->work[3] & 0xff;
	div_id = act->work[4];
	work = GetCellAttribute( act->work[1], act->work[2] );

	if( EvObjIdPosGet(obj_id,map_id,div_id,&no) ||		// 親,足場,ｱﾆﾒ
		ATR_ShortGrassCheck(work) == 0 || (act->work[7] && act->anmend_sw) )
	{
		FeDelActCode( act, FECODE_ShortGrassShake );
		return;
	}

	ev = &EvObj[no];

	if( (ev->gx != act->work[1] || ev->gy != act->work[2]) &&
		(ev->old_gx != act->work[1] || ev->old_gy != act->work[2]) )
	{
		act->work[7] = 1;								// 親去る
	}

	work = 0;
	if( act->anm_offs == 0 ) work = 4;					// 更にあげても

	EvActScrollVanish( act, 0 );
	EvObjChkActPriSet( act, act->work[0], work );
}

//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 短い草ﾁﾘ
//	In:		work0,1			; ﾏｯﾌﾟX,Y
//			work2,3			; 高さ,BGﾌﾟﾗｲｵﾘﾃｨ
//	Out:	nothing
//------------------------------------------
u32 FeShortGrassFallSet( void )
{
	u8	i;
	actWork *act;

	MapCellSizePosDiffOffs( (s16*)&FeSetWork[0], (s16*)&FeSetWork[1], 8, 12 );
	i = AddActorBottom( EvActHeadGet(EVACT_SHORTGRASS_FALL), FeSetWork[0], FeSetWork[1], 0 );

	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		act->scr = 1;
		act->oamData.Priority = FeSetWork[3];
		act->work[0] = FeSetWork[2];
		act->work[1] = FECODE_ShortGrassFall;
	}

	return( 0 );
}

//------------------------------------------
//	草ｱｸﾀｰﾁｪｯｸ
//	In: 	obj_id,map_id,div_id	; OBJ設定各ID
//			gx,gy					; ﾁｪｯｸﾏｯﾌﾟ座標
//	Out:	u8						; ACT_MAX = 存在しない
//------------------------------------------
u8 CheckFeShortGrass( u8 obj_id, u8 map_id, u8 div_id, s16 gx, s16 gy )
{
	u8 i;
	actWork *act;

	for( i = 0; i < ACT_MAX; i++ )
	{
		if( ActWork[i].act_sw )
		{
			act = &ActWork[i];

			if( act->move == FeShortGrassShakeMove &&
				gx == act->work[1] &&
				gy == act->work[2] &&
				obj_id == (act->work[3] >> 8) &&
				map_id == (act->work[3] & 0xff) &&
				div_id == act->work[4] )
			{
				return( i );
			}
		}
	}

	return( ACT_MAX );
}

//======================================================================
//		長い草
//======================================================================
//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 長い草揺れ
//	In:		work0,1			; ﾏｯﾌﾟx,y
//			work2,3			; 高さ,BGﾌﾟﾗｲｵﾘﾃｨ
//			work4			; OBJ_ID<<8|OBJ_MAP_ID
//			work5			; OBJ_DIV_ID
//			work6			; MAP_ID<<8|DIV_ID
//	Out:	nothing
//------------------------------------------
u32 FeLongGrassShakeSet( void )
{
	u8	i;
	s16 x,y;
	actWork *act;

	x = FeSetWork[0];
	y = FeSetWork[1];
	MapCellSizePosDiffOffs( &x, &y, 8, 8 );
	i = AddActorBottom( EvActHeadGet(EVACT_LONGGRASS_SHAKE), x, y, 0 );

	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		act->scr = 1;
		act->oamData.Priority = EvObjHeightBgPri( FeSetWork[2] );
		act->work[0] = FeSetWork[2];
		act->work[1] = FeSetWork[0];
		act->work[2] = FeSetWork[1];
		act->work[3] = FeSetWork[4];
		act->work[4] = FeSetWork[5];
		act->work[5] = FeSetWork[6];

		if( FeSetWork[7] )
		{
			ActAnmOffsChg( act, LONG_GRASS_ANMOFFS_ENDNO );
		}
	}

	return( 0 );
}

//------------------------------------------
//	長い草揺れ 動作
//------------------------------------------
void FeLongGrassShakeMove( actWork *act )
{
	u8 no,work,obj_id,map_id,div_id;
	EventOBJ *ev;

	map_id = act->work[5] >> 8;							// map ID
	div_id = act->work[5] & 0xff;

	if( MapChange.chg_flag && (Fld.MapID.map_id != map_id || Fld.MapID.div_id != div_id) )
	{
		act->work[1] -= MapChange.diffx;
		act->work[2] -= MapChange.diffy;
		act->work[5] = ((u8)Fld.MapID.map_id << 8) | (u8)Fld.MapID.div_id;
	}

	obj_id = act->work[3] >> 8;							// obj ID
	map_id = act->work[3] & 0xff;
	div_id = act->work[4];
	work = GetCellAttribute( act->work[1], act->work[2] );

	if( EvObjIdPosGet(obj_id,map_id,div_id,&no) ||		// 親,足場,ｱﾆﾒ
		ATR_LongGrassCheck(work) == 0 || (act->work[7] && act->anmend_sw) )
	{
		FeDelActCode( act, FECODE_LongGrassShake );
		return;
	}

	ev = &EvObj[no];

	if( (ev->gx != act->work[1] || ev->gy != act->work[2]) &&
		(ev->old_gx != act->work[1] || ev->old_gy != act->work[2]) )
	{
		act->work[7] = 1;								// 親去る
	}

	EvActScrollVanish( act, 0 );
	EvObjChkActPriSet( act, act->work[0], 0 );
//	EvActPriControl( act->work[0], act, 0 );
}

//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 長い草ﾁﾘ
//	In:		work0,1			; ﾏｯﾌﾟX,Y
//			work2,3			; 高さ,BGﾌﾟﾗｲｵﾘﾃｨ
//	Out:	nothing
//------------------------------------------
u32 FeLongGrassFallSet( void )
{
	u8	i;
	actWork *act;

	MapCellSizePosDiffOffs( (s16*)&FeSetWork[0], (s16*)&FeSetWork[1], 8, 8 );
	i = AddActorBottom( EvActHeadGet(EVACT_LONGGRASS_FALL), FeSetWork[0], FeSetWork[1], 0 );

	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		act->scr = 1;
		act->oamData.Priority = FeSetWork[3];
		act->work[0] = FeSetWork[2];
		act->work[1] = FECODE_LongGrassFall;
	}

	return( 0 );
}

//======================================================================
//		小さい草
//======================================================================
//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 小さい草
//	In:		work0,1,2		; OBJ,MAP,DIV ID
//	Out:	nothing
//------------------------------------------
u32 FeSmallGrassSet( void )
{
	u8	i;
	EventOBJ *ev;
	actWork *act;

	ev = &EvObj[EvObjIdSeek(FeSetWork[0],FeSetWork[1],FeSetWork[2])];
	i = AddActorBottom( EvActHeadGet(EVACT_SMALLGRASS), 0, 0, 0 );

	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		act->scr = 1;
		act->oamData.Priority = ActWork[ev->actno].oamData.Priority;
		act->work[0] = FeSetWork[0];
		act->work[1] = FeSetWork[1];
		act->work[2] = FeSetWork[2];
		act->work[3] = ActWork[ev->actno].x;
		act->work[4] = ActWork[ev->actno].y;
	}

	return( 0 );
}

//------------------------------------------
//	小さい草動作
//------------------------------------------
void EvActSmallGrassMove( actWork *act )
{
	u8 i;
	s16 x,y;
	SXYObjHead *objst;
	actWork *ev_act;

	if( EvObjIdPosGet(act->work[0],act->work[1],act->work[2],&i) ||
		EvObj[i].attr_grass_sw == 0 )
	{
		FeDelActCode( act, FECODE_SmallGrass );
		return;
	}

	objst = SxyObjHeadGet( EvObj[i].obj_code );
	ev_act = &ActWork[EvObj[i].actno];

	x = ev_act->x;
	y = ev_act->y;

	if( x != act->work[3] || y != act->work[4] )
	{
		act->work[3] = x;
		act->work[4] = y;

		if( act->anmend_sw )
		{
			ActAnmChg( act, 0 );
		}
	}

	act->x = x;
	act->y = y;
	act->dy = (objst->y_size >> 1) - 8;
	act->pri = ev_act->pri - 1;
	act->oamData.Priority = ev_act->oamData.Priority;
	EvActScrollVanish( act, ev_act->banish );
}

//======================================================================
//		足跡
//======================================================================
static void EvActFootPrint0( actWork * );
static void EvActFootPrint1( actWork * );

//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 足跡
//	In:		work0,1			; ﾏｯﾌﾟx,y
//			work2,3			; ｱｸﾀ,BGﾌﾟﾗｲｵﾘﾃｨ
//			work4			; 向き
//	Out:	nothing
//------------------------------------------
u32 FeFootPrintSet( void )
{
	u8	i;
	actWork *act;

	MapCellSizePosDiffOffs( (s16*)&FeSetWork[0], (s16*)&FeSetWork[1], 8, 8 );
	i = AddActorBottom( EvActHeadGet(EVACT_FOOTPRINT),
					FeSetWork[0], FeSetWork[1], FeSetWork[2] );

	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		act->scr = 1;
		act->oamData.Priority = FeSetWork[3];
		act->work[7] = FECODE_FootPrint;
		ActAnmChg( act, FeSetWork[4] );
	}

	return( 0 );
}

//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 深い足跡
//	In:		work0,1			; ﾏｯﾌﾟx,y
//			work2,3			; ｱｸﾀ,BGﾌﾟﾗｲｵﾘﾃｨ
//			work4			; 向き
//	Out:	nothing
//------------------------------------------
u32 FeFootPrintDeepSet( void )
{
	u8 i;
	actWork *act;

	MapCellSizePosDiffOffs( (s16*)&FeSetWork[0], (s16*)&FeSetWork[1], 8, 8 );
	i = AddActorBottom( EvActHeadGet(EVACT_FOOTPRINT_DEEP),
					FeSetWork[0], FeSetWork[1], FeSetWork[2] );

	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		act->scr = 1;
		act->oamData.Priority = FeSetWork[3];
		act->work[7] = FECODE_FootPrintDeep;
		ActAnmChg( &ActWork[i], FeSetWork[4] );
	}

	return( (u32)i );
}

//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 自転車足跡
//	In:		work0,1			; ﾏｯﾌﾟx,y
//			work2,3			; ｱｸﾀ,BGﾌﾟﾗｲｵﾘﾃｨ
//			work4			; 向き
//	Out:	u32				; ｱｸﾀﾜｰｸﾅﾝﾊﾞ
//------------------------------------------
u32 FeFootPrintCycleSet( void )
{
	u8 i;
	actWork *act;

	MapCellSizePosDiffOffs( (s16*)&FeSetWork[0], (s16*)&FeSetWork[1], 8, 8 );
	i = AddActorBottom( EvActHeadGet(EVACT_FOOTPRINT_CYCLE),
					FeSetWork[0], FeSetWork[1], FeSetWork[2] );

	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		act->scr = 1;
		act->oamData.Priority = FeSetWork[3];
		act->work[7] = FECODE_FootPrintCycle;
		ActAnmChg( act, FeSetWork[4] );
	}

	return( (u32)i );
}

//------------------------------------------
//	動作ﾃｰﾌﾞﾙ
//------------------------------------------
static void (* const FootPrintMoveTbl[])(actWork*) =
{ EvActFootPrint0, EvActFootPrint1 };
	
//------------------------------------------
//	足跡共通動作
//------------------------------------------
void EvActFootPrintMove( actWork *act )
{
	FootPrintMoveTbl[act->work[0]]( act );
}

//------------------------------------------
//	足跡 動作0
//------------------------------------------
static void EvActFootPrint0( actWork *act )
{
	act->work[1]++;
	
	if( act->work[1] > 40 )
	{
		act->work[0] = 1;
	}

	EvActScrollVanish( act, 0 );
}

//------------------------------------------
//	足跡1 動作1
//------------------------------------------
static void EvActFootPrint1( actWork *act )
{
	act->banish ^= 1;
	act->work[1]++;

	EvActScrollVanish( act, act->banish );

	if( act->work[1] > 56 )
	{
		FeDelActCode( act, act->work[7] );
	}
}

//======================================================================
//		水飛沫,浅瀬,波紋
//======================================================================
static void EvActShoalMove( actWork * );

//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 水飛沫
//	In:		work0,1,2		; OBJ,MAP,DIV ID
//------------------------------------------
u32 FeSplashSet( void )
{
	u8	i;
	EventOBJ *ev;
	actWork *act;
	SXYObjHead *objst;

	ev = &EvObj[EvObjIdSeek(FeSetWork[0],FeSetWork[1],FeSetWork[2])];
	i = AddActorBottom( EvActHeadGet(EVACT_SPLASH), 0, 0, 0 );

	if( i != ACT_MAX )
	{
		objst = SxyObjHeadGet( ev->obj_code );

		act = &ActWork[i];
		act->scr = 1;
		act->oamData.Priority = ActWork[ev->actno].oamData.Priority;
		act->work[0] = FeSetWork[0];
		act->work[1] = FeSetWork[1];
		act->work[2] = FeSetWork[2];
		act->dy = (objst->y_size >> 1) - 4;
		SePlay( SE_MIZU );
	}

	return( 0 );
}

//------------------------------------------
//	水飛沫 動作
//------------------------------------------
void EvActSplashMove( actWork *act )
{
	u8 i;
	
	if( act->anmend_sw ||
		EvObjIdPosGet(act->work[0],act->work[1],act->work[2],&i) )
	{
		FeDelActCode( act, FECODE_Splash );
		return;
	}

	act->x = ActWork[EvObj[i].actno].x;
	act->y = ActWork[EvObj[i].actno].y;

	EvActScrollVanish( act, 0 );
}

//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 水飛沫 2
//	In:		work0,1			; ﾏｯﾌﾟx,y
//			work2,3			; 高さ,BGﾌﾟﾗｲｵﾘﾃｨ
//	Out:	nothing
//------------------------------------------
u32 FeSplashWaterSet( void )
{
	u8	i;
	actWork *act;

	MapCellSizePosDiffOffs( (s16*)&FeSetWork[0], (s16*)&FeSetWork[1], 8, 12 );
	i = AddActorBottom( EvActHeadGet(EVACT_SPLASH_WATER), FeSetWork[0], FeSetWork[1], 0 );

	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		act->scr = 1;
		act->oamData.Priority = FeSetWork[3];
		act->work[0] = FeSetWork[2];
		act->work[1] = FECODE_SplashWater;
	}

	return( 0 );
}

//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 海水飛沫
//	In:		work0,1			; ﾏｯﾌﾟx,y
//			work2,3			; 高さ,BGﾌﾟﾗｲｵﾘﾃｨ
//	Out:	nothing
//------------------------------------------
u32 FeSplashSeaSet( void )
{
	u8	i;
	actWork *act;

	MapCellSizePosDiffOffs( (s16*)&FeSetWork[0], (s16*)&FeSetWork[1], 8, 8 );
	i = AddActorBottom( EvActHeadGet(EVACT_SPLASH_SEA), FeSetWork[0], FeSetWork[1], 0 );

	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		act->scr = 1;
		act->oamData.Priority = FeSetWork[3];
		act->work[0] = FeSetWork[2];
		act->work[1] = FECODE_SplashSea;
	}

	return( 0 );
}

//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 浅瀬ｾｯﾄ
//	In:		work0,1,2		; OBJ,MAP,DIV ID
//------------------------------------------
u32 FeShoalSet( void )
{
	u8	i;
	EventOBJ *ev;
	actWork *act;
	SXYObjHead *objst;

	ev = &EvObj[EvObjIdSeek(FeSetWork[0],FeSetWork[1],FeSetWork[2])];
	i = AddActorBottom( EvActHeadGet(EVACT_SPLASH), 0, 0, 0 );

	if( i != ACT_MAX )
	{
		objst = SxyObjHeadGet( ev->obj_code );

		act = &ActWork[i];
		act->move = EvActShoalMove;
		act->scr = 1;
		act->oamData.Priority = ActWork[ev->actno].oamData.Priority;
		act->work[0] = FeSetWork[0];
		act->work[1] = FeSetWork[1];
		act->work[2] = FeSetWork[2];
		act->work[3] = 0xffff;
		act->work[4] = 0xffff;
		act->dy = (objst->y_size >> 1) - 4;
		ActAnmChg( act, 1 );
	}

	return( 0 );
}

//------------------------------------------
//	浅瀬動作
//------------------------------------------
static void EvActShoalMove( actWork *act )
{
	u8 i;
	actWork *ev_act;
	EventOBJ *ev;

	if( EvObjIdPosGet(act->work[0],act->work[1],act->work[2],&i) ||
		EvObj[i].attr_shoal_sw == 0 )
	{
		FeDelActCode( act, FECODE_Shoal );
		return;
	}

	ev = &EvObj[i];
	ev_act = &ActWork[EvObj[i].actno];
	act->x = ev_act->x;
	act->y = ev_act->y;
	act->pri = ev_act->pri;

	EvActScrollVanish( act, 0 );
	
	if( ev->gx != act->work[3] || ev->gy != act->work[4] )
	{
		act->work[3] = ev->gx;
		act->work[4] = ev->gy;

		if( act->banish == 0 )
		{
			SePlay( SE_MIZU );
		}
	}
}

//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ	水波紋ｱｸﾀｰｾｯﾄ
//	In:		work0,1			; x,y
//			work2,3			; ｱｸﾀ,BGﾌﾟﾗｲｵﾘﾃｨ
//	Out:	nothing
//------------------------------------------
u32	FeRippleSet( void )
{
	u8 i;
	actWork *act;

	i = AddActorBottom( EvActHeadGet(EVACT_RIPPLE), FeSetWork[0], FeSetWork[1], FeSetWork[2] );

	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		act->scr = 1;
		act->oamData.Priority = FeSetWork[3];
		act->work[0] = FECODE_Ripple;
	}

	return( 0 );
}

//======================================================================
//		温泉
//======================================================================
//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 温泉
//	In:		work0,1,2		; OBJ,MAP,DIV ID
//	Out:	nothing
//------------------------------------------
u32 FeOnsenSet( void )
{
	u8	i;
	EventOBJ *ev;
	actWork *act;

	ev = &EvObj[EvObjIdSeek(FeSetWork[0],FeSetWork[1],FeSetWork[2])];
	i = AddActorBottom( EvActHeadGet(EVACT_ONSEN), 0, 0, 0 );

	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		act->scr = 1;
		act->oamData.Priority = ActWork[ev->actno].oamData.Priority;
		act->work[0] = FeSetWork[0];
		act->work[1] = FeSetWork[1];
		act->work[2] = FeSetWork[2];
		act->work[3] = ActWork[ev->actno].x;
		act->work[4] = ActWork[ev->actno].y;
	}

	return( 0 );
}

//------------------------------------------
//	温泉動作
//------------------------------------------
void EvActOnsenMove( actWork *act )
{
	u8 i;
	SXYObjHead *objst;
	actWork *ev_act;

	if( EvObjIdPosGet(act->work[0],act->work[1],act->work[2],&i) ||
		EvObj[i].attr_onsen_sw == 0 )
	{
		FeDelActCode( act, FECODE_Onsen );
		return;
	}

	objst = SxyObjHeadGet( EvObj[i].obj_code );
	ev_act = &ActWork[EvObj[i].actno];

	act->x = ev_act->x;
	act->y = ev_act->y + (objst->y_size >> 1) - 8;
	act->pri = ev_act->pri - 1;
	EvActScrollVanish( act, 0 );
}

//======================================================================
//		ｴﾝｶｳﾝﾄｱｸﾀｰ
//======================================================================
//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 短い草ｴﾝｶｳﾝﾄ
//	In:		work0,1			; ﾏｯﾌﾟX,Y
//			work2,3			; ｱｸﾀ,BGﾌﾟﾗｲｵﾘﾃｨ
//	Out:	nothing
//------------------------------------------
u32 FeShortGrassEncountSet( void )
{
	u8	i;
	actWork *act;

	MapCellSizePosDiffOffs( (s16*)&FeSetWork[0], (s16*)&FeSetWork[1], 8, 8 );
	i = AddActorBottom( EvActHeadGet(EVACT_SHORTGRASS_ENCOUNT),
					FeSetWork[0], FeSetWork[1], FeSetWork[2] );

	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		act->scr = 1;
		act->oamData.Priority = FeSetWork[3];
		act->work[0] = FECODE_ShortGrassEncount;
	}

	return( 0 );
}

//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 長い草ｴﾝｶｳﾝﾄ
//	In:		work0,1			; ﾏｯﾌﾟX,Y
//			work2,3			; ｱｸﾀ,BGﾌﾟﾗｲｵﾘﾃｨ
//	Out:	nothing
//------------------------------------------
u32 FeLongGrassEncountSet( void )
{
	u8	i;
	actWork *act;

	MapCellSizePosDiffOffs( (s16*)&FeSetWork[0], (s16*)&FeSetWork[1], 8, 8 );
	i = AddActorBottom( EvActHeadGet(EVACT_LONGGRASS_ENCOUNT),
					FeSetWork[0], FeSetWork[1], FeSetWork[2] );

	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		act->scr = 1;
		act->oamData.Priority = FeSetWork[3];
		act->work[0] = FECODE_LongGrassEncount;
	}

	return( 0 );
}

//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 砂ｴﾝｶｳﾝﾄ
//	In:		work0,1			; ﾏｯﾌﾟX,Y
//			work2,3			; ｱｸﾀ,BGﾌﾟﾗｲｵﾘﾃｨ
//	Out:	nothing
//------------------------------------------
u32 FeSandEncountSet( void )
{
	u8 i;
	actWork *act;

	MapCellSizePosDiffOffs( (s16*)&FeSetWork[0], (s16*)&FeSetWork[1], 8, 8 );
	i = AddActorBottom( EvActHeadGet(EVACT_SAND_ENCOUNT),
						FeSetWork[0], FeSetWork[1], FeSetWork[2] );

	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		ActWork[i].scr = 1;
		ActWork[i].oamData.Priority = FeSetWork[3];
		ActWork[i].work[0] = FECODE_SandEncount;
	}

	return( 0 );
}

//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 水ｴﾝｶｳﾝﾄ
//	In:		work0,1			; ﾏｯﾌﾟ X,Y
//			work2,3			; ｱｸﾀ,BGﾌﾟﾗｲｵﾘﾃｨ
//	Out:	nothing
//------------------------------------------
u32 FeWaterEncountSet( void )
{
	u8 i;
	actWork *act;

	MapCellSizePosDiffOffs( (s16*)&FeSetWork[0], (s16*)&FeSetWork[1], 8, 8 );
	i = AddActorBottom( EvActHeadGet(EVACT_WATER_ENCOUNT),
					FeSetWork[0], FeSetWork[1], FeSetWork[2] );

	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		act->scr = 1;
		act->oamData.Priority = FeSetWork[3];
		act->work[0] = FECODE_WaterEncount;
	}

	return( 0 );
}

//======================================================================
//		灰
//======================================================================
static void AshMove0( actWork * );
static void AshMove1( actWork * );
static void AshMove2( actWork * );

//------------------------------------------
//	灰ｾｯﾄ
//	In:		mx,my			; ｾｯﾄﾏｯﾌﾟ座標
//			cell			; ﾁｪﾝｼﾞｾﾙ
//			wait			; 煙発生するまでのｳｪｲﾄ
//------------------------------------------
void FeAshMake( s16 mx, s16 my, u16 cell, s16 wait )
{
	FeSetWork[0] = mx;
	FeSetWork[1] = my;
	FeSetWork[2] = EVOBJ_HI_ACTPRI;
	FeSetWork[3] = BGPRI1;
	FeSetWork[4] = cell;
	FeSetWork[5] = wait;

	FldEffSet( FECODE_Ash );
}

//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 灰ｾｯﾄ
//	In:		work0,1			; X,Y(ﾏｯﾌﾟ)
//			work2,3			; ｱｸﾀ,BGﾌﾟﾗｲｵﾘﾃｨ
//			work4			; ﾁｪﾝｼﾞｾﾙﾅﾝﾊﾞ
//			work5			; 開始ｳｴｲﾄ
//	Out:	nothing
//------------------------------------------
u32 FeAshSet( void )
{
	u8	i;
	s16 x,y;
	actWork *act;
	
	x = FeSetWork[0];
	y = FeSetWork[1];
	MapCellSizePosDiffOffs( &x, &y, 8, 8 );
	i = AddActorBottom( EvActHeadGet(EVACT_ASH), x, y, FeSetWork[2] );

	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		act->scr = 1;
		act->oamData.Priority = FeSetWork[3];
		act->work[1] = FeSetWork[0];
		act->work[2] = FeSetWork[1];
		act->work[3] = FeSetWork[4];
		act->work[4] = FeSetWork[5];
	}

	return( 0 );
}

//------------------------------------------
//	灰 動作ﾃｰﾌﾞﾙ
//------------------------------------------
static void (* const AshMoveTbl[])(actWork*) =
{
	AshMove0,
	AshMove1,
	AshMove2,
};

//------------------------------------------
//	灰 動作
//------------------------------------------
void EvActAshMove( actWork *act )
{
	AshMoveTbl[act->work[0]]( act );
}

//------------------------------------------
//	灰 動作0
//------------------------------------------
static void AshMove0( actWork *act )
{
	act->banish = 1;
	act->anm_pause = 1;

	act->work[4]--;

	if( act->work[4] == 0 )
	{
		act->work[0] = 1;
	}
}

//------------------------------------------
//	灰 動作1
//------------------------------------------
static void AshMove1( actWork *act )
{
	act->banish = 0;
	act->anm_pause = 0;

	SetCell( act->work[1], act->work[2], act->work[3] );
	RewriteSingleBG( act->work[1], act->work[2] );
	EvObj[MyMoveState.evobjno].move_start_sw = 1;

	act->work[0] = 2;
}

//------------------------------------------
//	灰 動作2
//------------------------------------------
static void AshMove2( actWork *act )
{
	EvActScrollVanish( act, 0 );

	if( act->anmend_sw )
	{
		FeDelActCode( act, FECODE_Ash );
	}
}

//======================================================================
//		波乗りﾎﾟｹﾓﾝ
//======================================================================
static void set_namipoke_site( EventOBJ *, actWork * );
static void check_namipoke_pos( EventOBJ *, actWork * );
static void set_namipoke_yure( EventOBJ *, actWork *, actWork * );

//------------------------------------------
//	波乗りﾎﾟｹﾓﾝ
//	In:		work0,1			; ﾏｯﾌﾟ座標
//			work2			; 親EvObjﾜｰｸﾅﾝﾊﾞ
//	Out:	u32				; ｱｸﾀｰﾜｰｸﾅﾝﾊﾞ
//	Info:	ｱｸﾀｰﾜｰｸ0
//			0 = 同期無し, 1 = 同期
//			2 = 同期無し & ゆらゆら
//			ｱｸﾀｰﾜｰｸ1
//			0 = 方向変換, 1 = 変換無し
//------------------------------------------
u32 FePokeSwimSet( void )
{
	u8	i;
	actWork *act;

	MapCellSizePosDiffOffs( (s16*)&FeSetWork[0], (s16*)&FeSetWork[1], 8, 8 );
	i = AddActorBottom( EvActHeadGet(EVACT_POKE_SWIM),
				FeSetWork[0], FeSetWork[1], EVOBJ_LOW_ACTPRI2 );

	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		act->scr = 1;
		act->oamData.Pltt = MINE_OBJ_PALNO;				// 主人公ﾊﾟﾚｯﾄに依存
		act->work[2] = FeSetWork[2];
		act->work[3] = -1;
		act->work[6] = 0xffff;
		act->work[7] = 0xffff;
	}

	FeCodeDel( FECODE_PokeSwim );
	return( (u32)i );
}

//------------------------------------------
//	波乗りﾎﾟｹﾓﾝ動作ﾌﾗｸﾞｾｯﾄ
//	In:		no			; 波乗りﾎﾟｹﾓﾝｱｸﾀﾅﾝﾊﾞ
//			flag		; 動作ﾌﾗｸﾞ
//------------------------------------------
void SetPokeSwimMoveFlag( u8 no , u8 flag )
{
	ActWork[no].work[0] = (ActWork[no].work[0] & 0xfff0) | (flag & 0x0f);
}

//------------------------------------------
//	波乗りﾎﾟｹﾓﾝ方向ﾌﾗｸﾞｾｯﾄ
//	In:		no			; 波乗りﾎﾟｹﾓﾝｱｸﾀﾅﾝﾊﾞ
//			flag		; ON = 方向固定
//------------------------------------------
void SetPokeSwimSiteFlag( u8 no , u8 flag )
{
	ActWork[no].work[0] = (ActWork[no].work[0] & 0xff0f) | ((flag & 0x0f) << 4);
}

//------------------------------------------
//	波乗りﾎﾟｹﾓﾝｵﾌｾｯﾄﾌﾗｸﾞｾｯﾄ
//	In:		no			; 波乗りﾎﾟｹﾓﾝｱｸﾀﾅﾝﾊﾞ
//			flag		; ON = ｵﾌｾｯﾄ指定
//			offset		; ｵﾌｾｯﾄ
//------------------------------------------
void SetPokeSwimOffsetFlag( u8 no , u8 flag, s16 offset )
{
	ActWork[no].work[0] = (ActWork[no].work[0] & 0xf0ff) | ((flag & 0x0f) << 8);
	ActWork[no].work[1] = offset;
}

//------------------------------------------
//	動作ﾌﾗｸﾞ取得
//------------------------------------------
static u8 GetPokeSwimMoveFlag( actWork *act )
{
	return( act->work[0] & 0x000f );
}

//------------------------------------------
//	方向ﾌﾗｸﾞ取得
//------------------------------------------
static u8 GetPokeSwimSiteFlag( actWork *act )
{
	return( (act->work[0] & 0x00f0) >> 4 );
}

//------------------------------------------
//	ｵﾌｾｯﾄﾌﾗｸﾞ取得
//------------------------------------------
static u8 GetPokeSwimOffsetFlag( actWork *act )
{
	return( (act->work[0] & 0x0f00) >> 8 );
}

//------------------------------------------
//	波乗りﾎﾟｹﾓﾝ動作
//------------------------------------------
void EvActPokeSwimMove( actWork *act )
{
	EventOBJ *ev;
	actWork *evact;

	ev = &EvObj[act->work[2]];
	evact = &ActWork[ev->actno];

	set_namipoke_site( ev, act );
	check_namipoke_pos( ev, act );
	set_namipoke_yure( ev, evact, act );

	act->oamData.Priority = evact->oamData.Priority;
}

//------------------------------------------
//	方向ｾｯﾄ
//------------------------------------------
static void set_namipoke_site( EventOBJ *ev, actWork *act )
{
	u8 site;
	u8	anm_code[] = {0,0,1,2,3};

	if( GetPokeSwimSiteFlag(act) == NAMIPOKE_SITE_NOCHG )
	{
		site = ev->mv_site;
		ActAnmChkChg( act, anm_code[site] );
	}
}

//------------------------------------------
//	座標
//------------------------------------------
static void check_namipoke_pos( EventOBJ *ev, actWork *act )
{
	u8 site;
	s16 x,y;

	x = ev->gx;
	y = ev->gy;

	if( act->dy == 0 && (x != act->work[6] || y != act->work[7]) )
	{
		act->work[5] = 0;
		act->work[6] = x;
		act->work[7] = y;

		for( site = SITE_D; site <= SITE_R; site++, x = act->work[6], y = act->work[7] )
		{
			SitePosMove( site, &x, &y );

			if( GetCellHeight(x,y) == 3 )
			{
				act->work[5]++;
				break;
			}
		}
	}
}

//------------------------------------------
//	ゆれ
//------------------------------------------
static void set_namipoke_yure( EventOBJ *ev, actWork *evact, actWork *act )
{
	u8 flag;
	s16 yure[2] = { 0x03, 0x07 };
	
	flag = GetPokeSwimMoveFlag( act );

	if( flag == NAMIPOKE_NOWITH )
	{
		return;
	}

	act->work[4]++;

	if( (act->work[4] & yure[act->work[5]]) == 0 )
	{
		act->dy += act->work[3];
	}

	if( (act->work[4] & 0x0f) == 0 )
	{
		act->work[3] = -(act->work[3]);
	}

	if( flag == NAMIPOKE_NOWITH_SWAY )
	{
		return;
	}
	
	if( GetPokeSwimOffsetFlag(act) == NAMIPOKE_VOFFSET_OFF )
	{
		evact->dy = act->dy;
	}
	else												// 指定ｵﾌｾｯﾄｱﾘ
	{
		evact->dy = act->work[1] + act->dy;
	}

	act->x = evact->x;
	act->y = evact->y + 8;
}

//======================================================================
//		ﾀﾞｲﾋﾞﾝｸﾞ
//======================================================================
static void EvActDivingSwayMove( actWork * );

//------------------------------------------
//	ﾀﾞｲﾋﾞﾝｸﾞ揺れｱｸﾀｰｾｯﾄ
//	In:		actno			; 親ｱｸﾀｰﾜｰｸﾅﾝﾊﾞ
//	Out:	u8				; ｱｸﾀｰﾜｰｸﾅﾝﾊﾞ
//------------------------------------------
u8 EvActDivingSwaySet( u8 actno )
{
	u8 i;
	actWork *act;
	
	i = AddActorBottom( &DummyActHeader, 0, 0, 0xff );

	act = &ActWork[i];
	act->move = EvActDivingSwayMove;
	act->banish = 1;
	act->work[0] = actno;
	act->work[1] = 1;

	return( i );
}

//------------------------------------------
//	ﾀﾞｲﾋﾞﾝｸﾞｱｸﾀｰ動作
//------------------------------------------
static void EvActDivingSwayMove( actWork *act )
{
	actWork *evact;

	evact = &ActWork[act->work[0]];

	if( (act->work[2]++ & 0x03) == 0 )
	{
		evact->dy += act->work[1];
	}

	if( (act->work[2] & 0x0f) == 0 )
	{
		act->work[1] = -act->work[1];
	}
}

//======================================================================
//		砂
//======================================================================
//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 砂埃ｾｯﾄ
//	In:		work0,1			; ﾏｯﾌﾟx,y
//			work2,work3		; 高さ,BGﾌﾟﾗｲｵﾘﾃｨ
//	Out:	nothing
//------------------------------------------
u32 FeHokoriSet( void )
{
	u8 i;
	actWork *act;

	MapCellSizePosDiffOffs( (s16*)&FeSetWork[0], (s16*)&FeSetWork[1], 8, 12 );
	i = AddActorBottom( EvActHeadGet(EVACT_HOKORI), FeSetWork[0], FeSetWork[1], 0 );

	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		act->scr = 1;
		act->oamData.Priority = FeSetWork[3];
		act->work[0] = FeSetWork[2];
		act->work[1] = FECODE_Hokori;
	}

	return( 0 );
}

//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 深い砂
//	In:		work0,1,2		; OBJ,MAP,DIV ID
//	Out:	nothing
//------------------------------------------
u32 FeDeepSandSet( void )
{
	u8 i;
	EventOBJ *ev;
	actWork *act;
	SXYObjHead *objst;

	ev = &EvObj[EvObjIdSeek(FeSetWork[0],FeSetWork[1],FeSetWork[2])];
	i = AddActorBottom( EvActHeadGet(EVACT_DEEPSAND), 0, 0, 0 );

	if( i != ACT_MAX )
	{
		objst = SxyObjHeadGet( ev->obj_code );

		act = &ActWork[i];
		act->scr = 1;
		act->oamData.Priority = ActWork[ev->actno].oamData.Priority;
		act->work[0] = FeSetWork[0];
		act->work[1] = FeSetWork[1];
		act->work[2] = FeSetWork[2];
		act->work[3] = ActWork[ev->actno].x;
		act->work[4] = ActWork[ev->actno].y;
		act->dy = (objst->y_size >> 1) - 2;
		ActAnmOffsChg( act, SAND_ANMOFFS_ENDNO );
	}

	return( 0 );
}

//------------------------------------------
//	砂4動作
//------------------------------------------
void EvActDeepSandMove( actWork *act )
{
	u8 i;
	s16 x,y;

	if( EvObjIdPosGet(act->work[0],act->work[1],act->work[2],&i) ||
		EvObj[i].attr_sand_sw == 0 )
	{
		FeDelActCode( act, FECODE_DeepSand );
		return;
	}

	x = ActWork[EvObj[i].actno].x;
	y = ActWork[EvObj[i].actno].y;

	if( x != act->work[3] || y != act->work[4] )
	{
		act->work[3] = x;
		act->work[4] = y;

		if( act->anmend_sw )
		{
			ActAnmChg( act, 0 );
		}
	}

	act->x = x;
	act->y = y;
	act->pri = ActWork[EvObj[i].actno].pri;
	EvActScrollVanish( act, 0 );
}

//======================================================================
//		泡
//======================================================================
//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 泡ｾｯﾄ
//	In:		work0,1			; ﾏｯﾌﾟx,y
//	Out:	nothing
//------------------------------------------
u32 FeAwaSet( void )
{
	u8 i;
	actWork *act;
	
	MapCellSizePosDiffOffs( (s16*)&FeSetWork[0], (s16*)&FeSetWork[1], 8, 0 );
	i = AddActorBottom( EvActHeadGet(EVACT_AWA), FeSetWork[0], FeSetWork[1], EVOBJ_HI_ACTPRI );
	
	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		act->scr = 1;
		act->oamData.Priority = BGPRI1;
	}

	return( 0 );
}

//------------------------------------------
//	泡動作
//------------------------------------------
void EvActAwaMove( actWork *act )
{
	act->work[0] += 0x0080;
	act->work[0] &= 0x0100;
	act->y -= act->work[0] >> 8;

	EvActScrollVanish( act, 0 );

	if( act->banish || act->anmend_sw )
	{
		FeDelActCode( act, FECODE_Awa );
	}
}

//======================================================================
//		種ｴﾌｪｸﾄ
//======================================================================
//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 種ｴﾌｪｸﾄ
//	In:		work0,1			; ﾏｯﾌﾟX,Y
//			work2,3			; ｱｸﾀ,BGﾌﾟﾗｲｵﾘﾃｨ
//	Out:	u32				; ｱｸﾀｰﾅﾝﾊﾞ
//------------------------------------------
u32 FeSeedEffectSet( void )
{
	u8	i;
	actWork *act;

	MapCellSizePosDiffOffs( (s16*)&FeSetWork[0], (s16*)&FeSetWork[1], 8, 4 );
	i = AddActorBottom( EvActHeadGet(EVACT_SEEDEFFECT),
						FeSetWork[0], FeSetWork[1], FeSetWork[2] );

	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		act->scr = 1;
		act->oamData.Priority = FeSetWork[3];
		act->oamData.Pltt = OTHERS_OBJ_PALNO_3;
		act->work[0] = FECODE_SeedEffect;
	}

	return( 0 );
}

//======================================================================
//		ﾄﾚｰﾅｰ隠れ蓑
//======================================================================
static u32 SetTrainerHideActor( u8, u8, u8 );

//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ ﾄﾚｰﾅｰ木ｾｯﾄ
//	In:		work0,1,2		; OBJ_ID, MAP_ID, DIV_ID
//	Out:	u32				; ｱｸﾀｰﾜｰｸﾅﾝﾊﾞ
//------------------------------------------
u32 FeTrainerHideWoodSet( void )
{
	return( SetTrainerHideActor(FECODE_TrainerHideWood,EVACT_HIDEWOOD,OTHERS_OBJ_PALNO_2) );
}

//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ ﾄﾚｰﾅｰ岩ｾｯﾄ
//	In:		work0,1,2		; OBJ_ID, MAP_ID, DIV_ID
//	Out:	u32				; ｱｸﾀｰﾜｰｸﾅﾝﾊﾞ
//------------------------------------------
u32 FeTrainerHideRockSet( void )
{
	return( SetTrainerHideActor(FECODE_TrainerHideRock,EVACT_HIDEROCK,OTHERS_OBJ_PALNO_1) );
}

//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ ﾄﾚｰﾅｰ砂ｾｯﾄ
//	In:		work0,1,2		; OBJ_ID, MAP_ID, DIV_ID
//	Out:	u32				; ｱｸﾀｰﾜｰｸﾅﾝﾊﾞ
//------------------------------------------
u32 FeTrainerHideSandSet( void )
{
	return( SetTrainerHideActor(FECODE_TrainerHideSand,EVACT_HIDESAND,OTHERS_OBJ_PALNO_0) );
}

//------------------------------------------
//	ﾄﾚｰﾅｰ隠れ蓑ｾｯﾄ
//------------------------------------------
static u32 SetTrainerHideActor( u8 fcode, u8 acode, u8 palno )
{
	u8 i;
	actWork *act;

	if( EvObjIdPosGet(FeSetWork[0],FeSetWork[1],FeSetWork[2],&i) )
	{
		FeCodeDel( fcode );
		return( ACT_MAX );
	}

	i = AddActorBottom( EvActHeadGet(acode), 0, 0, 0 );

	if( i != ACT_MAX )
	{
		act = &ActWork[i];
		act->scr++;
		act->oamData.Pltt = palno;
		act->work[1] = fcode;
		act->work[2] = FeSetWork[0];
		act->work[3] = FeSetWork[1];
		act->work[4] = FeSetWork[2];
	}

	return( i );
}

//------------------------------------------
//	ﾄﾚｰﾅｰ隠れ蓑動作
//------------------------------------------
void EvActTrainerHideMove( actWork *act )
{
	u8 i;
	actWork *m_act;
	SXYObjHead *objst;

	if( EvObjIdPosGet(act->work[2],act->work[3],act->work[4],&i) )
	{
		FeDelActCode( act, act->work[1] );
	}

	objst = SxyObjHeadGet( EvObj[i].obj_code );
	m_act = &ActWork[EvObj[i].actno];

	act->banish = m_act->banish;
	act->x = m_act->x;
	act->y = m_act->y + (objst->y_size >> 1) - 16;
	act->pri = m_act->pri - 1;

	if( act->work[0] == 1 )
	{
		act->work[0]++;
		ActAnmChg( act, 1 );
	}
	
	if( act->work[0] == 2 )
	{
		if( act->anmend_sw )
		{
			act->work[7] = 1;
		}
	}
	
	if( act->work[0] == 3 )
	{
		FeDelActCode( act, act->work[1] );
	}
}

//------------------------------------------
//	隠れ蓑消し動作ｾｯﾄ
//	In:		ev			; 隠れ蓑使用OBJ
//------------------------------------------
void EvActHideClsSet( EventOBJ *ev )
{
	if( ev->work0 == HIDE_ON )
	{
		ActWork[ev->joint_actno[0]].work[0]++;
	}
}

//------------------------------------------
//	隠れ蓑消しﾁｪｯｸ
//	In:		ev			; 隠れ蓑使用OBJ
//	Out:	u8			; On = 終了
//------------------------------------------
u8 EvActHideClsChk( EventOBJ *ev )
{
	actWork *act;

	if( ev->work0 == HIDE_OFF ||
		ev->work0 == HIDE_NOTHING )
	{
		return( 1 );
	}

	act = &ActWork[ev->joint_actno[0]];

	if( act->work[7] )
	{
		ev->work0 = HIDE_OFF;
		act->work[0]++;
		return( 1 );
	}

	return( 0 );
}

//======================================================================
//		星ｷﾗﾘ
//======================================================================
//------------------------------------------
//	ﾌｨｰﾙﾄﾞｴﾌｪｸﾄ 星ｷﾗﾘｾｯﾄ
//	In:		work0,1,2		// ﾏｯﾌﾟx,y,BGﾌﾟﾗｲｵﾘﾃｨ
//	Out:	nothing
//------------------------------------------
u32 FeKirariSet( void )
{
	u8 i;

	FeSetWork[0] += MAP_LEFT_MARGIN;
	FeSetWork[1] += MAP_UP_MARGIN;
	MapCellSizePosDiffOffs( (s16*)&FeSetWork[0], (s16*)&FeSetWork[1], 8, 8 );

	i = AddActorBottom( EvActHeadGet(EVACT_KIRARI),
			FeSetWork[0], FeSetWork[1], EVOBJ_HI_ACTPRI );
	
	if( i != ACT_MAX )
	{
		ActWork[i].oamData.Priority = (u8)FeSetWork[2];
		ActWork[i].scr = 1;
	}

	return( 0 );
}

//------------------------------------------
//	星ｷﾗﾘ動作
//------------------------------------------
void EvActKirariMove( actWork *act )
{
	if( act->work[0] == 0 && act->anmend_sw )
	{
		act->banish = 1;
		act->work[0]++;
	}
	
	if( act->work[0] && ++act->work[1] >= 35 )
	{
		FeDelActCode( act, FECODE_Kirari );
	}
}

//======================================================================
//		ｱｸﾀｰ共通動作
//======================================================================
//------------------------------------------
//	ｱﾆﾒｰｼｮﾝ終了&ﾊﾞﾆｯｼｭ&ﾌﾟﾗｲｵﾘﾃｨ修正
//	work[0] = 高さ, work[1] = ｺｰﾄﾞ
//------------------------------------------
void EvActCommonMove0( actWork *act )
{
	if( act->anmend_sw )
	{
		FeDelActCode( act, act->work[1] );
		return;
	}
	
	EvActScrollVanish( act, 0 );
	EvActPriControl( act->work[0], act, 0 );
}

//------------------------------------------
//	ｱﾆﾒｰｼｮﾝ終了&ﾊﾞﾆｯｼｭ
//	work[0] = ｺｰﾄﾞ
//------------------------------------------
void EvActCommonMove1( actWork *act )
{
	if( act->anmend_sw )
	{
		FeDelActCode( act, act->work[0] );
		return;
	}
	
	EvActScrollVanish( act, 0 );
}

//======================================================================
//		ｻﾌﾞ
//======================================================================
//------------------------------------------
//	ｲﾍﾞﾝﾄOBJﾁｪｯｸ,ｱｸﾀｰﾌﾟﾗｲｵﾘﾃｨｾｯﾄ
//------------------------------------------
static void EvObjChkActPriSet( actWork *act, u8 height, u8 offs_pri )
{
	u8 i;
	s16 p0,p1,p2,p3;
	EventOBJ *ev;
	actWork *evact;
	SXYObjHead *objst;

	EvActPriControl( height, act, offs_pri );

	for( i = 0; i < EV_OBJ_MAX; i++ )						// 当たり判定
	{
		ev = &EvObj[i];

		if( ev->sw )
		{
			objst = SxyObjHeadGet( ev->obj_code );
			evact = &ActWork[ev->actno];

			p0 = act->x + act->cx;
			p1 = act->x - act->cx;
			
			if( p0 < evact->x && p1 > evact->x )			// 交差
			{
				p0 = evact->y + evact->cy;					// OBJ 上半身
				p1 = evact->y;
				p3 = act->y - act->cy;
				p2 = p3 + evact->cy;

				if( ((p0 < p2 && p1 > p2) || (p0 < p3 && p1 > p2)) &&
					act->pri <= evact->pri )
				{
					act->pri = evact->pri + 2;
					break;
				}
			}
		}
	}
}


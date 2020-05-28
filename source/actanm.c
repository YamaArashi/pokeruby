//**********************************************************************
//		act_anm.c
//		ｱｸﾀｰｱﾆﾒ, ｾﾙﾏﾈｰｼﾞｬ, ｱﾌｨﾝﾏﾈｰｼﾞｬ, ﾊﾟﾚｯﾄﾏﾈｰｼﾞｬ,　OAM ﾊﾟｯﾄ
//**********************************************************************
#include	<agb.h>
#include 	"common.h"
#include	"actor.h"
#include	"palanm.h"

#include  "cell_bitchk.h"

//======================================================================
//		ｸﾞﾛｰﾊﾞﾙ変数
//======================================================================
u8 ObjPalManStart;									// ﾊﾟﾚｯﾄﾏﾈｰｼﾞｬ
u8 AffAnmStopFlag = 0;								// ｱﾌｨﾝｱﾆﾒ有効無効ﾌﾗｸﾞ
u32 AffineWorkUse;							// ｱﾌｨﾝﾏﾈｰｼﾞｬ

//======================================================================
//		変数
//======================================================================
static u16 cell_act_num[ACT_MAX];					// ｾﾙﾏﾈｰｼﾞｬ
static u16 cell_char_num[ACT_MAX][2];				// ｾﾙﾏﾈｰｼﾞｬ
static ObjAffinePatWork OBJAffinePatWork[32];		// 拡縮ﾊﾟｯﾄﾜｰｸ
static u16 ObjPalManWork[16];						// ｵﾌﾞｼﾞｪﾊﾟﾚｯﾄﾏﾈｰｼﾞｬ

//----------------------------------------------------------------------
//		外部参照関数, 変数
//----------------------------------------------------------------------
extern ObjAffineDestData OBJ_AffineWork[32];		// common.c
extern s16 TransAreaFlagChk( u16 );					// oam_act.c
extern u8 TransBitChkSet( u16, u8 );				// oam_act.c
extern void	dmaTransSet( u16, u16, const actAnmData * ); // oam_act.c
extern void	affineWorkinit( void );
extern void affineWorkSet( u8,u16,u16,u16,u16);

//======================================================================
//		ｱｸﾀｰｱﾆﾒ
//======================================================================
static	void	anm_sw_off( actWork * );
static	void	anm_sw_on( actWork * );
static	void	affine_anm_set( actWork *act );
static	void	affine_anm( actWork *act );
static	void 	affineWorkDestSet( u8, ObjAffineDestData * );
static	u8		act_affine_no_get( actWork *act );
static 	void 	OBJAffinePatWorkInit( u8 );
static 	void 	OBJAffinePatWorkInitAnm( u8 );
static	void	OBJAffinePatWorkInitSet( u8, u8 );
static	void	OBJAffinePatWorkCalc( u8, actAffAnm * );
static	void	act_hv_flip_set( actWork *, u8, u8 );
static	void	anm_wait_check_del( actWork * );
static	u8		aff_wait_check_del( actWork *, u8 );
static	void	affanm_get( u8, actWork *, actAffAnm * );
static	void	affanm_calc( u8, actAffAnm * );

//------------------------------------------
//	ﾃｰﾌﾞﾙ
//------------------------------------------
static void (* const anm_sw_tbl[])(actWork *) =
{
	anm_sw_off,
	anm_sw_on
};
			
static void (* const affanm_sw_tbl[])(actWork *) =
{
	affine_anm,
	affine_anm_set
};

//------------------------------------------
//	ｱﾆﾒ ﾒｲﾝ
//------------------------------------------
#if 1													// changed by matsuda 2002.09.01(日)
void ActAnm( actWork *act )								// ﾒｲﾝ
{
	anm_sw_tbl[act->anm_sw]( act );						// ｾﾙｱﾆﾒ

	if( AffAnmStopFlag == 0 )
		affanm_sw_tbl[act->affine_sw]( act );			// 拡縮ｱﾆﾒ
}
#else
void ActAnm( actWork *act )								// ﾒｲﾝ
{
	anm_sw_tbl[act->anm_sw]( act );						// ｾﾙｱﾆﾒ
	affanm_sw_tbl[act->affine_sw]( act );				// 拡縮ｱﾆﾒ
}
#endif

//------------------------------------------
//	ｱﾆﾒｾｯﾄ 開始
//------------------------------------------
static void anm_sw_on( actWork *act )
{
	s16 Pat;
	u8  Wait, Hrev, Vrev;
	
	act->anm_offs = 0;									// 参照ｵﾌｾｯﾄ
	act->anmend_sw = 0;									// ｱﾆﾒ終了ﾌﾗｸﾞ
	act->anm_count = 0;									// ﾙｰﾌﾟｶｳﾝﾄ
	
	Pat = act->anm_tbl[act->anm_no][act->anm_offs].pat;	// ﾊﾟﾗﾒﾀ取得
	
	if( Pat == ACT_ANMEND )								// ﾀﾞﾐｰ
	{
		return;
	}
	
	act->anm_sw = 0;									// ｱﾆﾒ開始ﾌﾗｸﾞｸﾘｱ

	Wait = act->anm_tbl[act->anm_no][act->anm_offs].wait;
	Hrev = act->anm_tbl[act->anm_no][act->anm_offs].hrev;
	Vrev = act->anm_tbl[act->anm_no][act->anm_offs].vrev;

	if( Wait )											// ｳｪｲﾄ補正
	{
		Wait--;
	}
	
	act->anm_wait = Wait;								// ｳｪｲﾄ反映

	if( (act->oamData.AffineMode & 0x01) == 0 )
	{
		act_hv_flip_set( act, Hrev, Vrev );				// ﾌﾘｯﾌﾟ反映
	}
	
	if( act->t_mode )									// 非転送ｱﾆﾒ
	{
		act->oamData.CharNo = (u16)Pat + act->char_num;
	}
	else												// 転送型ｱﾆﾒ
	{
		dmaTransSet( Pat, act->oamData.CharNo, act->anm_trans );
	}
}

//------------------------------------------
//	ｱﾆﾒ 2回目以降
//------------------------------------------
static void	pat_com_anmend( actWork * );
static void	pat_com_anmloop( actWork * );
static void	pat_com_anmcloop( actWork * );
static void	pat_com_nothing( actWork * );

static void (* const anmpat_command_tbl[])(actWork *) =
{
	pat_com_anmcloop,									// 0 ANMcLOOP(-3)
	pat_com_anmloop,									// 1 ANMLOOP(-2)
	pat_com_anmend,										// 2 ANMEND(-1)
	pat_com_nothing										// 3 通常
};

static void	anm_sw_off( actWork *act )
{
	s16 Pat, tbl_no;
	u8  Hrev, Vrev;

	if( act->anm_wait )									// ｳｪｲﾄ有り
	{
		anm_wait_check_del( act );						// ｳｪｲﾄ減少

		Hrev = (act->anm_tbl)[act->anm_no][act->anm_offs].hrev;
		Vrev = (act->anm_tbl)[act->anm_no][act->anm_offs].vrev;
		
		if( (act->oamData.AffineMode & 0x01) == 0 )		// 拡縮ｵﾌ
		{
			act_hv_flip_set( act, Hrev, Vrev );			// ﾌﾘｯﾌﾟ反映
		}
	}
	else												// ｳｪｲﾄ 0
	{
		if( act->anm_pause )							// ﾎﾟｰｽﾞ
		{
			return;
		}

		(act->anm_offs)++;

		Pat = (act->anm_tbl)[act->anm_no][act->anm_offs].pat;
		
		tbl_no = 3;

		if( Pat	< 0 )									// ﾊﾟｯﾄﾏｲﾅｽ時 ｺﾏﾝﾄﾞ
		{
			tbl_no = Pat + 3;							// END = -1, LOOP = -2, cLOOP = -3;
		}
		
		anmpat_command_tbl[tbl_no]( act );				// ｺﾏﾝﾄﾞ別ｾｯﾄ
	}
}

//------------------------------------------
//	ｱﾆﾒ ｺﾏﾝﾄﾞ無し
//------------------------------------------
static void	pat_com_nothing( actWork *act )
{
	s16 Pat;
	u8  Wait, Hrev, Vrev;

	Pat = (act->anm_tbl)[act->anm_no][act->anm_offs].pat;
	Wait = (act->anm_tbl)[act->anm_no][act->anm_offs].wait;
	Hrev = (act->anm_tbl)[act->anm_no][act->anm_offs].hrev;
	Vrev = (act->anm_tbl)[act->anm_no][act->anm_offs].vrev;
	
	if( Wait )
	{
		Wait--;											// ｳｪｲﾄ補正
	}
	
	act->anm_wait = Wait;

	if( (act->oamData.AffineMode & 0x01) == 0 )
	{
		act_hv_flip_set( act, Hrev, Vrev );				// ﾌﾘｯﾌﾟ反映
	}

	if( act->t_mode )
	{
		act->oamData.CharNo = (u16)Pat + act->char_num;
	}
	else
	{
		dmaTransSet( Pat, act->oamData.CharNo, act->anm_trans );
	}
}

//------------------------------------------
//	ACT_ANMEND
//------------------------------------------
static void	pat_com_anmend( actWork *act )
{
	(act->anm_offs)--;									// 参照位置
	act->anmend_sw = 1;									// ｱﾆﾒ終了ﾌﾗｸﾞ(1:終了)
}

//------------------------------------------
//	ACT_ANMLOOP
//------------------------------------------
static void	pat_com_anmloop( actWork *act )
{
	s16 Pat;
	u8  Wait, Hrev, Vrev;
	
	act->anm_offs =										// LOOP 時 wait に戻り個所
		(act->anm_tbl)[act->anm_no][act->anm_offs].wait;

	Pat = (act->anm_tbl)[act->anm_no][act->anm_offs].pat;
	Wait = (act->anm_tbl)[act->anm_no][act->anm_offs].wait;
	Hrev = (act->anm_tbl)[act->anm_no][act->anm_offs].hrev;
	Vrev = (act->anm_tbl)[act->anm_no][act->anm_offs].vrev;
				
	if( Wait )
	{
		Wait--;											// ｳｪｲﾄ補正
	}
	
	act->anm_wait = Wait;

	if( (act->oamData.AffineMode & 0x01) == 0 )
	{
		act_hv_flip_set( act, Hrev, Vrev );				// ﾌﾘｯﾌﾟ反映
	}

	if( act->t_mode )
	{
		act->oamData.CharNo = (u16)Pat + act->char_num;
	}
	else
	{
		dmaTransSet( Pat, act->oamData.CharNo, act->anm_trans );
	}
}

//------------------------------------------
//	ACT_ANMcLOOP
//------------------------------------------
static void	anm_count_set( actWork * );
static void	anm_count_dec( actWork * );
static void	anm_count_back( actWork * );

static void	pat_com_anmcloop( actWork *act )
{
	if( act->anm_count )
	{
		anm_count_dec( act );							// ﾙｰﾌﾟ
	}
	else
	{
		anm_count_set( act );							// ﾙｰﾌﾟ開始
	}
}

//------------------------------------------
//	ACT_ANMcLOOP	開始
//------------------------------------------
static void	anm_count_set( actWork *act )
{
	act->anm_count =									// wait 位置に ﾙｰﾌﾟ回数
		(act->anm_tbl)[act->anm_no][act->anm_offs].wait;

	anm_count_back( act );								// 修正
	anm_sw_off( act );									// 再帰
}

//------------------------------------------
//	ACT_ANMcLOOP	ﾙｰﾌﾟ
//------------------------------------------
static void	anm_count_dec( actWork *act )
{
	act->anm_count--;									// ﾙｰﾌﾟ回数--
	anm_count_back( act );								// 修正
	anm_sw_off( act );									// 再帰
}

//------------------------------------------
//	ACT_ANMcLOOP	位置修正
//------------------------------------------
static void anm_count_back( actWork *act )
{
	if( act->anm_count )								// 0 = 通過 or ﾗﾍﾞﾙ指定
	{
		for( act->anm_offs--;
			 (act->anm_tbl)[act->anm_no][act->anm_offs - 1].pat != ACT_ANMcLOOP &&
			 act->anm_offs > 0; act->anm_offs-- );
		act->anm_offs--;
	}
}

//------------------------------------------
//	拡縮ｱﾆﾒ開始
//------------------------------------------
static void	affine_anm_set( actWork *act )
{
	u8	aff_no;
	actAffAnm aff;

	if( (act->oamData.AffineMode & 0x01) == 0 ||
		act->aff_tbl[0][0].rx == ACT_AFEND )			// ﾀﾞﾐｰ
	{
		return;
	}
	
	aff_no = act_affine_no_get( act );					// ﾜｰｸﾅﾝﾊﾞ取得
	OBJAffinePatWorkInitAnm( aff_no );					// ﾜｰｸ初期化
	affanm_get( aff_no, act, &aff );					// ｱﾆﾒﾃﾞｰﾀ取得

	act->affine_sw = 0;									// ｽｲｯﾁｸﾘｱ
	act->affend_sw = 0;									// ｱﾆﾒ終了ﾌﾗｸﾞｸﾘｱ
	affanm_calc( aff_no, &aff );
	OBJAffinePatWork[aff_no].wait = aff.wait;
}

//------------------------------------------
//	拡縮ｱﾆﾒ 2回目以降
//------------------------------------------
static void	aff_com_cloop( u8, actWork * );
static void	aff_com_loop( u8, actWork * );
static void	aff_com_end( u8, actWork * );
static void	aff_com_nothing( u8, actWork * );
static void	affine_wait_on( u8, actWork * );

static void (* const affine_com_tbl[])(u8, actWork *) =
{
	aff_com_cloop,
	aff_com_loop,
	aff_com_end,
	aff_com_nothing
};

static void	affine_anm( actWork *act )
{
	u8 aff_no;
	s16 pat, tbl_no;

	if( (act->oamData.AffineMode & 0x01) == 0 )			// 非拡縮
	{
		return;
	}
	
	aff_no = act_affine_no_get( act );

	if( OBJAffinePatWork[aff_no].wait )					// ｳｪｲﾄ有り
	{
		affine_wait_on( aff_no, act );
	}
	else
	{
		if( act->aff_pause )							// ﾎﾟｰｽﾞ
		{
			return;
		}

		OBJAffinePatWork[aff_no].offs++;				// ｵﾌｾｯﾄ増加
		
		pat =
		(act->aff_tbl)[OBJAffinePatWork[aff_no].no][OBJAffinePatWork[aff_no].offs].rx;
	
		tbl_no = 3;
	
		if( pat >= ACT_AFcLOOP )						// ｺﾏﾝﾄﾞﾁｪｯｸ
		{
			tbl_no = pat - ACT_AFcLOOP;
		}
		
		affine_com_tbl[tbl_no]( aff_no, act );
	}
}	

//------------------------------------------
//	ｳｪｲﾄ有り
//------------------------------------------
static void	affine_wait_on( u8 aff_no, actWork *act )
{
	actAffAnm aff;
	
	if( aff_wait_check_del( act, aff_no ) == 0 )		// ｳｪｲﾄ & ﾎﾟｰｽﾞ
	{
		affanm_get( aff_no, act, &aff );
		OBJAffinePatWorkCalc( aff_no, &aff );
	}
}


//------------------------------------------
//	ACT_AFcLOOP
//------------------------------------------
static void	aff_count_set( u8, actWork * );
static void	aff_count_dec( u8, actWork * );
static void	aff_count_back( u8, actWork * );

static void aff_com_cloop( u8 aff_no, actWork *act )
{
	if( OBJAffinePatWork[aff_no].count )
	{
		aff_count_dec( aff_no, act );					// ﾙｰﾌﾟ
	}
	else
	{
		aff_count_set( aff_no, act );					// 開始
	}	
}

//------------------------------------------
//	ACT_AFcLOOP		開始
//------------------------------------------
static void	aff_count_set( u8 aff_no, actWork *act )
{
	OBJAffinePatWork[aff_no].count = 					// Y 拡縮率に回数
		(act->aff_tbl)[OBJAffinePatWork[aff_no].no][OBJAffinePatWork[aff_no].offs].ry;
	
	aff_count_back( aff_no, act );
	affine_anm( act );
}

//------------------------------------------
//	ACT_AFcLOOP		ﾙｰﾌﾟ
//------------------------------------------
static void aff_count_dec( u8 aff_no, actWork *act )
{
	OBJAffinePatWork[aff_no].count--;
	aff_count_back( aff_no, act );						// 修正
	affine_anm( act );									// 再帰
}

//------------------------------------------
//	ACT_AFcLOOP		位置修正
//------------------------------------------
static void aff_count_back( u8 no, actWork *act )
{
	if( OBJAffinePatWork[no].count )
	{
		for( OBJAffinePatWork[no].offs--;
			 (act->aff_tbl)[OBJAffinePatWork[no].no]
						   [OBJAffinePatWork[no].offs - 1].rx != ACT_AFcLOOP &&
			 OBJAffinePatWork[no].offs > 0; OBJAffinePatWork[no].offs-- );
		OBJAffinePatWork[no].offs--;					// 修正
	}
}

//------------------------------------------
//	ACT_AFLOOP
//------------------------------------------
static void aff_com_loop( u8 aff_no, actWork *act )
{
	actAffAnm aff;
	
	OBJAffinePatWork[aff_no].offs =
		(act->aff_tbl)[OBJAffinePatWork[aff_no].no][OBJAffinePatWork[aff_no].offs].ry;
	
	affanm_get( aff_no, act, &aff );			
	affanm_calc( aff_no, &aff );
	OBJAffinePatWork[aff_no].wait = aff.wait;
}

//------------------------------------------
//	ACT_AFEND
//------------------------------------------
static void aff_com_end( u8 aff_no, actWork *act )
{
	actAffAnm aff = { 0, 0, 0, 0 };

	act->affend_sw = 1;										// 終了ﾌﾗｸﾞ ON
	OBJAffinePatWork[aff_no].offs--;						// 戻す
	OBJAffinePatWorkCalc( aff_no, &aff );
}

//------------------------------------------
//	ｺﾏﾝﾄﾞ無し
//------------------------------------------
static void aff_com_nothing( u8 aff_no, actWork *act )
{
	actAffAnm aff;

	affanm_get( aff_no, act, &aff );
	affanm_calc( aff_no, &aff );
	OBJAffinePatWork[aff_no].wait = aff.wait;
}

//------------------------------------------
//	ｱﾌｨﾝﾜｰｸｾｯﾄ
//------------------------------------------
static void affineWorkDestSet( u8 num, ObjAffineDestData *dest )
{
	OBJ_AffineWork[num].H_DiffX = dest->H_DiffX;
	OBJ_AffineWork[num].V_DiffX = dest->V_DiffX;
	OBJ_AffineWork[num].H_DiffY = dest->H_DiffY;
	OBJ_AffineWork[num].V_DiffY = dest->V_DiffY;
}

//------------------------------------------
//	ｱﾌｨﾝ参照値取得
//------------------------------------------
static u8 act_affine_no_get( actWork *act )
{
	u8	no;
	
	no = 0;

	if( (act->oamData.AffineMode & 0x01) )
	{
		no = (u8)act->oamData.AffineParamNo;				// ﾜｰｸﾅﾝﾊﾞ
	}

	return( no );
}

//------------------------------------------
//	HV ﾌﾘｯﾌﾟｾｯﾄ
//------------------------------------------
static void act_hv_flip_set( actWork *act, u8 Hflip, u8 Vflip )
{
	act->oamData.AffineParamNo &= 0x007;					// 上位2ﾋﾞｯﾄ削除
	act->oamData.AffineParamNo |=
			((Hflip ^ act->Hflip) & 0x01) << 3;				// Hﾌﾘｯﾌﾟ反映
	act->oamData.AffineParamNo |=
			((Vflip ^ act->Vflip) & 0x01) << 4;				// Vﾌﾘｯﾌﾟ反映
}

//------------------------------------------
//	拡縮ﾜｰｸ初期化
//------------------------------------------
static void OBJAffinePatWorkInitAnm( u8 num )				// no 抜き
{
	OBJAffinePatWork[num].offs = 0;
	OBJAffinePatWork[num].wait = 0;
	OBJAffinePatWork[num].count = 0;
}

static void OBJAffinePatWorkInitSet( u8 num, u8 anm_no )	// no set & init
{
	OBJAffinePatWork[num].no = anm_no;
	OBJAffinePatWork[num].offs = 0;
	OBJAffinePatWork[num].wait = 0;
	OBJAffinePatWork[num].count = 0;
	OBJAffinePatWork[num].src.RatioX = 0x0100;
	OBJAffinePatWork[num].src.RatioY = 0x0100;
	OBJAffinePatWork[num].src.Theta = 0;
}

static void OBJAffinePatWorkInit( u8 num )					// all
{
	OBJAffinePatWork[num].no = 0;
	OBJAffinePatWork[num].offs = 0;
	OBJAffinePatWork[num].wait = 0;
	OBJAffinePatWork[num].count = 0;
	OBJAffinePatWork[num].src.RatioX = 0x0100;
	OBJAffinePatWork[num].src.RatioY = 0x0100;
	OBJAffinePatWork[num].src.Theta = 0;
}

static void OBJAffinePatWorkSet( u8 num, actAffAnm *aff )	// set init
{
	OBJAffinePatWork[num].src.RatioX = aff->rx;
	OBJAffinePatWork[num].src.RatioY = aff->ry;
	OBJAffinePatWork[num].src.Theta = aff->theta << 8;
}

//------------------------------------------
//	ｱﾆﾒｰｼｮﾝｳｪｲﾄ減少 ﾁｪｯｸ有り
//------------------------------------------
static void anm_wait_check_del( actWork *act )
{
	if( !(act->anm_pause) )									// ﾎﾟｰｽﾞﾁｪｯｸ
	{
		(act->anm_wait)--;
	}
}

//------------------------------------------
//	拡縮ｱﾆﾒｰｼｮﾝｳｪｲﾄ減少 ﾁｪｯｸ有り
//------------------------------------------
static u8 aff_wait_check_del( actWork *act, u8 num )
{
	if( !(act->aff_pause) )
	{
		OBJAffinePatWork[num].wait--;
	}
	
	return( act->aff_pause );
}

//------------------------------------------
//	拡縮 -> ｱﾌｨﾝﾜｰｸ
//------------------------------------------
static s16 inverse( s16 );

static void OBJAffinePatWorkCalc( u8 num, actAffAnm *aff )
{
	ObjAffineSrcData src;
	ObjAffineDestData dest;

	OBJAffinePatWork[num].src.RatioX += aff->rx;
	OBJAffinePatWork[num].src.RatioY += aff->ry;
	OBJAffinePatWork[num].src.Theta =
		(OBJAffinePatWork[num].src.Theta + (aff->theta << 8)) & 0xff00;
	
	src.RatioX = inverse( OBJAffinePatWork[num].src.RatioX );
	src.RatioY = inverse( OBJAffinePatWork[num].src.RatioY );
	src.Theta = OBJAffinePatWork[num].src.Theta;

	ObjAffineSet( &src, &dest, 1, 2 );
	affineWorkDestSet( num, &dest );
}

static s16 inverse( s16 s )									//  逆数(1/s)
{
    s32 tmp;
#if 1
    tmp = 0x10000;
    tmp /= s;
#else
	tmp = Div( 0x00010000, s );
#endif
	return (s16)tmp;
}

//------------------------------------------
//	拡縮ｱﾆﾒﾃﾞｰﾀ取得
//------------------------------------------
static void affanm_get( u8 no, actWork *act, actAffAnm *aff )
{
	aff->rx =
	(act->aff_tbl)[OBJAffinePatWork[no].no][OBJAffinePatWork[no].offs].rx;
	aff->ry =
	(act->aff_tbl)[OBJAffinePatWork[no].no][OBJAffinePatWork[no].offs].ry;
	aff->theta =
	(act->aff_tbl)[OBJAffinePatWork[no].no][OBJAffinePatWork[no].offs].theta;
	aff->wait = 
	(act->aff_tbl)[OBJAffinePatWork[no].no][OBJAffinePatWork[no].offs].wait;
}

//------------------------------------------
//	ｱﾆﾒﾃﾞｰﾀ反映
//------------------------------------------
static void affanm_calc( u8 no, actAffAnm *aff )
{
	actAffAnm dmy = { 0, 0, 0, 0 };							// ﾀﾞﾐｰ
	
	if( aff->wait )
	{
		aff->wait--;										// ｳｪｲﾄ補正
		OBJAffinePatWorkCalc( no, aff );
	}
	else													// 0 = 初期化指定
	{
		OBJAffinePatWorkSet( no, aff );
		OBJAffinePatWorkCalc( no, &dmy );
	}
}

//======================================================================
//		ｱｸﾀｰｱﾆﾒ変更
//======================================================================
//------------------------------------------
//	ｱﾆﾒｰｼｮﾝﾅﾝﾊﾞ変更
//  In:	act			; ｾｯﾄするｱｸﾀｰ
// 		anm_num		; ｾｯﾄﾅﾝﾊﾞ
//------------------------------------------
void ActAnmChg( actWork *act, u8 anm_num )
{
	act->anm_no = anm_num;
	act->anm_sw = 1;
	act->anmend_sw = 0;
}

//------------------------------------------
//	ｱﾆﾒｰｼｮﾝﾅﾝﾊﾞ変更 ﾁｪｯｸ有り
//  In:	act			; ｾｯﾄするｱｸﾀｰ
// 		anm_num		; ｾｯﾄﾅﾝﾊﾞ
//------------------------------------------
void ActAnmChkChg( actWork *act, u8 anm_num )
{
    if( act->anm_no != anm_num )
	{
		ActAnmChg( act, anm_num );
	}
}

//------------------------------------------
//	ｱﾆﾒｰｼｮﾝｵﾌｾｯﾄﾅﾝﾊﾞ変更 & 反映
//	In:	act			; ｾｯﾄｱｸﾀ
//		anm_offs	; ｱﾆﾒｵﾌｾｯﾄﾅﾝﾊﾞ
//------------------------------------------
void ActAnmOffsChg( actWork *act, u8 anm_offs )
{
	u8	dmy;
	
	dmy = act->anm_pause;
	act->anm_offs = anm_offs - 1;
	act->anm_wait = 0;
	act->anm_sw = 0;
	act->anmend_sw = 0;
	act->anm_pause = 0;
	anm_sw_off( act );

	if( act->anm_wait )
	{
		act->anm_wait++;
	}
	
	act->anm_pause = dmy;
}

//------------------------------------------
//	拡縮ｱﾆﾒｰｼｮﾝﾅﾝﾊﾞ変更
//  In:	act			; ｾｯﾄするｱｸﾀｰ
// 		anm_num		; ｾｯﾄﾅﾝﾊﾞ
//------------------------------------------
void ActAffAnmChg( actWork *act, u8 anm_num )
{
	u8	no;
	
	no = act_affine_no_get( act );
	OBJAffinePatWorkInitSet( no, anm_num );
	act->affine_sw = 1;
	act->affend_sw = 0;
}

//------------------------------------------
//	拡縮ｱﾆﾒｰｼｮﾝﾅﾝﾊﾞ変更 ﾁｪｯｸ有り
//  In:	act			; ｾｯﾄするｱｸﾀｰ
// 		anm_num		; ｾｯﾄﾅﾝﾊﾞ
//------------------------------------------
void ActAffAnmChkChg( actWork *act, u8 anm_num )
{
	u8	no;

	no = act_affine_no_get( act );
	
	if( OBJAffinePatWork[no].no != anm_num )
	{
		ActAffAnmChg( act, anm_num );
	}
}

//------------------------------------------
//	拡縮ｱﾆﾒｰｼｮﾝﾅﾝﾊﾞ変更,拡縮率保持
//  In:	act			; ｾｯﾄするｱｸﾀｰ
// 		anm_num		; ｾｯﾄﾅﾝﾊﾞ
//------------------------------------------
void ActAffAnmHoldChg( actWork *act, u8 anm_num )
{
	u8	no;
	
	no = act_affine_no_get( act );
	OBJAffinePatWork[no].no = anm_num;
	act->affine_sw = 1;
	act->affend_sw = 0;
}

//------------------------------------------
//	拡縮ｱﾆﾒｰｼｮﾝﾅﾝﾊﾞ変更 拡縮率保持 ﾁｪｯｸ有り
//  In:	act			; ｾｯﾄするｱｸﾀｰ
// 		anm_num		; ｾｯﾄﾅﾝﾊﾞ
//------------------------------------------
void ActAffAnmHoldChkChg( actWork *act, u8 anm_num )
{
	u8	no;

	no = act_affine_no_get( act );
	
	if( OBJAffinePatWork[no].no != anm_num )
	{
		ActAffAnmHoldChg( act, anm_num );
	}
}

//------------------------------------------
//	ｷｬﾗﾅﾝﾊﾞｾｯﾄ(非転送)
//------------------------------------------
void ActCharNumSet( actWork *act )
{
	s16 pat;
	
	if( act->t_mode )
	{
		pat = act->anm_tbl[act->anm_no][act->anm_offs].pat;
	
		if( pat < 0 )										// ﾊﾟｯﾄﾏｲﾅｽ時 ｺﾏﾝﾄﾞ
		{
			pat = 0;										// ﾀﾞﾐｰ化
		}
	
		act->oamData.CharNo = (u16)pat + act->char_num;
	}
}

//======================================================================
//		ｱﾌｨﾝﾜｰｸﾏﾈｰｼﾞｬ
//======================================================================
//------------------------------------------
//	初期化
//------------------------------------------
void AffineWorkManInit( void )
{
	u8	i;

	AffAnmStopFlag = 0;										// ｱﾌｨﾝｱﾆﾒ有効	matsuda 02.09.01
	AffineWorkUse = 0;										// 使用数 0
	affineWorkinit();										// OAM拡縮ﾜｰｸ初期化
	for( i = 0; i < 32; OBJAffinePatWorkInit(i), i++ );
}

//------------------------------------------
//	ｱﾌｨﾝﾜｰｸ使用可能個所取得,登録
//	Out		u8		; 使用可能ﾅﾝﾊﾞ (0~31)
//					; 0xff = Error
//------------------------------------------
u8 AffineWorkNumGet( void )
{
	u8	i;
	u32	calc, dmy;

	for( i = 0, calc = 1, dmy = AffineWorkUse; i < 32; i++, calc <<= 1 )
	{
		if( (dmy & calc) == 0 )
		{
			AffineWorkUse |= calc;
			return( i );
		}
	}

	return( 0xff );
}

//------------------------------------------
//	ｱﾌｨﾝﾜｰｸ使用個所削除
//	In		num		; 削除No
//------------------------------------------
void AffineWorkNumDel( u8 num )
{
	u8	i;
	u32	calc;

	for( i = 0, calc = 1; i < num; i++, calc <<= 1 );

	calc = ~calc;											// calc = not calc
	
	AffineWorkUse &= calc;

	affineWorkSet( num, 0x0100, 0x0000, 0x0000, 0x0100 );
}
	
//------------------------------------------
//	ｱﾌｨﾝﾊﾟﾗﾒﾀｾｯﾄ
//	In		act		; ｾｯﾄｱｸﾀｰ
//------------------------------------------
void AffineNumSet( actWork *act )
{
	u8	aff_no;
	
	aff_no = AffineWorkNumGet();							// ﾜｰｸﾅﾝﾊﾞ
	
	if( aff_no == 0xff )									// 登録不可
	{
		return;
	}
	
	actCenterCalc( act, act->oamData.Shape,					// 中心補正
			act->oamData.Size, act->oamData.AffineMode );

	act->oamData.AffineParamNo = aff_no;
	act->affine_sw = 1;
	OBJAffinePatWorkInit( aff_no );							// ﾊﾟﾗﾒﾀ初期化
}

//------------------------------------------
//	OBJ_AffineWorkへの拡縮率ｾｯﾄ
//	In:		no			; ｱﾌｨﾝﾜｰｸﾅﾝﾊﾞ
//			rx,ry		; x,y拡縮率(0x0100=1)
//			theta		; 角度(0x0100=0)
//------------------------------------------
void OBJ_AffineWorkCalc( u8 no, s16 rx, s16 ry, s16 theta )
{
	ObjAffineSrcData src;
	ObjAffineDestData dest;

	src.RatioX = inverse( rx );
	src.RatioY = inverse( ry );
	src.Theta = theta;

	ObjAffineSet( &src, &dest, 1, 2 );
	affineWorkDestSet( no, &dest );
}

//========================================================================
//			ｾﾙﾏﾈｰｼﾞｬ
//========================================================================
static void	cellman_pos_set( u16 act_no, u16 adrs, u16 size );
static u8	cellman_pos_get( u16 );

//------------------------------------------
//	ｾﾙ登録単発
//	In		cell	; ｾﾙﾃﾞｰﾀ
//	Out		u16		; ｾｯﾄｷｬﾗﾅﾝﾊﾞ
//------------------------------------------
u16	CellSet( const CellData *cell )								// ｾﾙ単発登録
{
	s16	adrs;

	adrs = TransAreaFlagChk( (cell->size) >> 5 );			// size / 32 = chara no size

	if( adrs < 0 )											// ﾏｲﾅｽ時 登録不可 
	{
		return( 0 );
	}

	cellman_pos_set( cell->act_num,	adrs, (cell->size) >> 5 );	// ｾﾙﾏﾈｰｼﾞｬ登録
	
#if DMA_CPU_SELECT
	DmaCopy( 3, cell->ch_data,
				OBJ_MODE0_VRAM + (adrs << 5), cell->size, 16 );	// ｷｬﾗﾃﾞｰﾀ転送
#else
	CpuCopy(cell->ch_data, OBJ_MODE0_VRAM + (adrs << 5), cell->size, 16);
#endif
	return( adrs );
}

//------------------------------------------
//	ｾﾙ登録複数
//	In		cell	; ｾﾙﾃﾞｰﾀ
//	Info
//		cell[] =
//		{
//			//{ ｷｬﾗﾃﾞｰﾀ, 転送ｻｲｽﾞ, 登録番号 }
//			{	&chara_data[0], 0x0040, 0 },
//			{	&chara_data[64], 0x0080, 1 },
//			{   CELL_END, 0, 0 }							// 登録終了
//		};
//------------------------------------------
void CellSets( const CellData *cell )
{
	u8	i;

	for( i = 0; cell[i].ch_data != CELL_END; CellSet( &cell[i] ), i++ );
}

//------------------------------------------
//	ｾﾙ登録個所削除
//	In		act_no	; 登録番号
//------------------------------------------
void CellDel( u16 act_no )									// 登録番号
{
	u8	pos;
	u16	i, adrs, size;
	
	pos  = cellman_pos_get( act_no );						// 登録番号個所
	
	if( pos != 0xff )
	{
		adrs = cell_char_num[pos][0];
		size = cell_char_num[pos][1];
	
		for( i = adrs; i < adrs + size; i++ )
		{
//			TransBitChkSet(i,0);								// 登録ｴﾘｱｸﾘｱ
			TRANS_BIT_CLEAR(i);
		}
	
		cell_act_num[pos] = 0xffff;
	}
}
	
//------------------------------------------
//	ｾﾙﾏﾈｰｼﾞｬ全初期化
//------------------------------------------
void CellManAllInit( void )
{
	u8	i;

	for( i = 0; i < ACT_MAX; i++ )
	{
		cell_act_num[i] = 0xffff;
		cell_char_num[i][0] = 0x0000;
		cell_char_num[i][1] = 0x0000;
	}
}
//------------------------------------------
//	登録番号 -> 登録ｷｬﾗﾅﾝﾊﾞ
//	In:		act_no		; 登録番号
//	Out:	u16			; ｷｬﾗﾅﾝﾊﾞ
//						; 0xffff = Error
//------------------------------------------
u16	CellCharNumGet( u16 act_no )
{
	u8	i;
	
	i = cellman_pos_get( act_no );
	
	if( i == 0xff )
	{
		return( 0xffff );
	}

	return( cell_char_num[i][0] );
}

//------------------------------------------
//	登録番号 -> 登録位置
//------------------------------------------
static u8 cellman_pos_get( u16 act_no )
{
	u8	i;

	for( i = 0; i < ACT_MAX; i++ )
	{
		if( cell_act_num[i] == act_no )
		{
			return( i );
		}
	}

	return( 0xff );
}

//------------------------------------------
//	ｷｬﾗﾅﾝﾊﾞ -> 登録番号
//	In:		chnum			; ｷｬﾗﾅﾝﾊﾞ
//	Out:	u16				; ID
//							; 0xffff = Error
//------------------------------------------
u16	CellCharNumIdGet( u16 chnum )
{
	u8 i;
	
	for( i = 0; i < ACT_MAX; i++ )
	{
		if( cell_act_num[i] != 0xffff && cell_char_num[i][0] == chnum )
		{
			return( cell_act_num[i] );
		}
	}
	
	return( 0xffff );
}

//------------------------------------------
//	ｾﾙﾏﾈｰｼﾞｬﾊﾟﾗﾒﾀｾｯﾄ
//------------------------------------------
static void	cellman_pos_set( u16 act_no, u16 adrs, u16 size )
{
	u8	i;
	
	i = cellman_pos_get( 0xffff );							// 未登録個所
	cell_act_num[i] = act_no;
	cell_char_num[i][0] = adrs;
	cell_char_num[i][1] = size;
}


//========================================================================
//			ｵﾌﾞｼﾞｪﾊﾟﾚｯﾄﾏﾈｰｼﾞｬ
//========================================================================
static void	obj_palset_work( const u16 *, u16 );
u8 ObjPalNumGet( u16 );

//------------------------------------------
//	初期化
//------------------------------------------
void ObjPalManInit( void )
{
	u8	i;
	
	ObjPalManStart = 0;
	for( i = 0; i < 16; ObjPalManWork[i] = 0xffff, i++ );
}

//------------------------------------------
//	ﾊﾟﾚｯﾄ登録単発
//	In		pal		; ﾊﾟﾚｯﾄ登録ﾃﾞｰﾀ
//	Out		u8		; 登録ﾊﾟﾚｯﾄNo
//					; 0xff = Error
//------------------------------------------
u8 ObjPalSet( const PalData *pal )
{
	u8	pal_no;

	pal_no = ObjPalNumGet( pal->reg_num );

	if( pal_no != 0xff )
	{
		return( pal_no );
	}

	pal_no = ObjPalNumGet( 0xffff );							// 未登録個所
	
	if( pal_no == 0xff )
	{
		return( pal_no );										// 空き無し
	}

	ObjPalManWork[pal_no] = pal->reg_num;
	obj_palset_work( pal->pal_data, (u16)((u16)pal_no << 4) );	// pal_no * 16
	return( pal_no );
}

//------------------------------------------
//	ﾊﾟﾚｯﾄ登録複数
//	In		pal		; ﾊﾟﾚｯﾄ登録ﾃﾞｰﾀ
//	Info
//		pal[] = 
//		{ //{ ﾊﾟﾚｯﾄﾃﾞｰﾀ, 登録番号 }
//			{ Palette0, 0 },
//			{ Palette1, 1 },
//			{ OBJPAL_END, 0 }		// 登録終了
//		};
//------------------------------------------
void ObjPalSets( const PalData *pal )
{
	u8	i;

	for( i = 0; pal[i].pal_data != OBJPAL_END && (ObjPalSet(&pal[i])) != 0xff; i++ );
}

//------------------------------------------
//	ﾊﾟﾚｯﾄ転送
//------------------------------------------
static void	obj_palset_work( const u16 *pal_data, u16 set_pos )
{
//	DmaCopy( 3, pal_data, OBJ_PLTT + set_pos, 0x0020, 32 );
	PaletteWorkSet( pal_data, PA_OBJ0 + set_pos, 32 );
}

//------------------------------------------
//	ﾊﾟﾚｯﾄ登録番号ｾｯﾄ
//	In:		reg_num		; 登録番号
//	Out:	u8			; 登録ﾊﾟﾚｯﾄNo
//------------------------------------------
u8 ObjPalNumSet( u16 reg_num )
{
	u8 no;

	no = ObjPalNumGet( 0xffff );
		
	if( no == 0xff )
	{
		return( no );
	}
	
	ObjPalManWork[no] = reg_num;

	return( no );
}

//------------------------------------------
//	登録番号 -> ﾊﾟﾚｯﾄNo
//	In		reg_no		; 登録番号
//	Out		u8			; ﾊﾟﾚｯﾄNo(0~15)
//						; 0xff = Error
//------------------------------------------
u8 ObjPalNumGet( u16 reg_no )
{
	u8	i;

	for( i = ObjPalManStart; i < 16; i++ )
	{
		if( ObjPalManWork[i] == reg_no )
		{
			return( i );
		}
	}

	return( 0xff );
}

//------------------------------------------
//	ﾊﾟﾚｯﾄﾅﾝﾊﾞ -> ID
//	In:		no			; ﾊﾟﾚｯﾄ No
//	Out:	u16			; ﾊﾟﾚｯﾄ ID
//						; 0xffff = Error
//------------------------------------------
u16 ObjPalNumIdGet( u8 no )
{
	return( ObjPalManWork[no] );
}

//------------------------------------------
//	登録番号削除
//	In		reg_no		; 登録番号
//------------------------------------------
void ObjPalRegNumDel( u16 reg_no )
{
	u8	pal_no;

	pal_no = ObjPalNumGet( reg_no );
	
	if( pal_no == 0xff )
	{
		return;
	}
	
	ObjPalManWork[pal_no] = 0xffff;
}

//========================================================================
//	OAM ﾊﾟｯﾄ
//========================================================================
u8 OamPatDevelop( actWork *, ActOamData *, u8 * );

//------------------------------------------
//	座標
//------------------------------------------
typedef struct
{
	s8	x;
	s8	y;
}POINTs8;

//------------------------------------------
//	描画ｻｲｽﾞ
//------------------------------------------
static const POINTs8 OamBltSize[3][4] =
{
	{
		{8,8},
		{16,16},
		{32,32},
		{64,64},
	},
	{
		{16,8},
		{32,8},
		{32,16},
		{64,32},
	},
	{
		{8,16},
		{8,32},
		{16,32},
		{32,64},
	}
};

//------------------------------------------
//	OAM ﾊﾟｯﾄｾｯﾄ
//	In:		act			; ｾｯﾄｱｸﾀ
//			pat			; ﾊﾟｯﾄﾃｰﾌﾞﾙ
//------------------------------------------
void SetActOamPat( actWork *act, const OAMPatSt *pat )
{
	act->oamPat = pat;
	act->oampat_no = 0;
	act->oampat_sw = OAMPAT_ON;
}

//------------------------------------------
//	OAM への設定
//	In:		act			; ｱｸﾀｰ
//			use			; OAM 使用数
//	Out:	u8			; ON = 使用最大
//------------------------------------------
u8 ActOamSet( actWork *act, u8 *use )
{
	if( *use >= OamWriteEd )
	{
		return( 1 );
	}
	
	if( act->oamPat == NOT_OAMPAT || act->oampat_sw == OAMPAT_OFF )
	{
		sys.OAMbuf[*use] = act->oamData;
		(*use)++;
		return( 0 );
	}
	else
	{
		return( OamPatDevelop(act,&(sys.OAMbuf[*use]),use) );
	}
}

//------------------------------------------
//	OAM ﾊﾟｯﾄ展開
//	In:		act			; 展開ｱｸﾀｰ
//			oam_b		; 展開先OAM
//			oam_use		; OAM 使用数
//	Out:	u8			; ON = OAM 使用最大
//------------------------------------------
u8 OamPatDevelop( actWork *act, ActOamData *oam_b, u8 *oam_use )
{
	u16	chnum;
	s16	x, y, cx, cy;
	u8	i, max, hflip, vflip;
	OAMPatSt *patst;
	ActOamData *oam_a;

	if( *oam_use >= OamWriteEd )
	{
		return( 1 );
	}
	
	patst = (OAMPatSt*)&(act->oamPat[act->oampat_no]);
	oam_a = (ActOamData*)&(act->oamData);

	if( patst == NOT_OAMPAT || patst->pat == NOT_OAMPAT )		// 未使用
	{
		*oam_b = *oam_a;
		(*oam_use)++;
		return( 0 );
	}
	
	chnum = oam_a->CharNo;
	max = patst->use;
	hflip = (oam_a->AffineParamNo >> 3) & 0x01;
	vflip = (oam_a->AffineParamNo >> 4) & 0x01;
	cx = (s16)oam_a->HPos - (s16)act->cx;						// X 中心位置
	cy = (s16)oam_a->VPos - (s16)act->cy;						// Y 中心位置
	
	for( i = 0; i < max; i++, (*oam_use)++ )
	{
		if( *oam_use >= OamWriteEd )
		{
			return( 1 );
		}

		x = (s16)(patst->pat[i].x);
		y = (s16)(patst->pat[i].y);
		
		if( hflip )
		{
			x += (s16)OamBltSize[patst->pat[i].shape][patst->pat[i].size].x;
			x = (~x) + 1;
		}
		
		if( vflip )
		{
			y += (s16)OamBltSize[patst->pat[i].shape][patst->pat[i].size].y;
			y = (~y) + 1;
		}

		oam_b[i] = *oam_a;
		oam_b[i].Shape = patst->pat[i].shape;					// 形状
		oam_b[i].Size = patst->pat[i].size;						// ｻｲｽﾞ
		oam_b[i].HPos = cx + x;									// 座標
		oam_b[i].VPos = cy + y;
		oam_b[i].CharNo = chnum + patst->pat[i].ch_offs;		// ｷｬﾗﾅﾝﾊﾞ
		
		if( act->oampat_sw != OAMPAT_PRIUNIT )
		{
			oam_b[i].Priority = patst->pat[i].bg_pri;			// BG ﾌﾟﾗｲｵﾘﾃｨ
		}
	}

	return( 0 );
}


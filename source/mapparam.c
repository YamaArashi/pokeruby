//==================================================================================
//
//	マップパラメータ関連
//
//==================================================================================

#include "common.h"

#define	MAPPARAM_H_GLOBAL
#include "mapparam.h"

#include "fld_tool.h"
#include "weather.h"


//==================================================================================
//
//	マップタイプ関連
//
//==================================================================================
//-----------------------------------------------------------------------------
//	マップＩＤからマップタイプを取得
//-----------------------------------------------------------------------------
u8 GetMapTypeByID( s8 div_id, s8 map_id )
{
	const MapTotalData * p;
	p = GetTotalMapData( div_id, map_id );
	return p->type;
}

//-----------------------------------------------------------------------------
//	マップタイプの取得
//-----------------------------------------------------------------------------
static u8 get_map_type( MapID * m )
{
	return GetMapTypeByID( m->div_id, m->map_id );
}

//-----------------------------------------------------------------------------
//	現在のマップのタイプを取得
//-----------------------------------------------------------------------------
u8 GetNowMapType( void )
{
	return get_map_type( &Fld.MapID );
}

//-----------------------------------------------------------------------------
//	直前のマップのタイプを取得
//-----------------------------------------------------------------------------
u8 GetBeforeMapType( void )
{
	return get_map_type( &BeforeMapID );
}

//-----------------------------------------------------------------------------
//	フィールドマップかどうかのチェック
//-----------------------------------------------------------------------------
u8 MTYPE_IsFieldCheck( u8 type )
{
	if( type == MAPTYPE_ROAD || type == MAPTYPE_TOWN || type == MAPTYPE_WATER
			|| type == MAPTYPE_CITY || type == MAPTYPE_SEA )
		return TRUE;
	else
		return FALSE;
}

//-----------------------------------------------------------------------------
//	「そらをとぶ」ができるかどうかのチェック
//-----------------------------------------------------------------------------
u8 MTYPE_IsEnableFlyCheck( u8 type )
{
	if( type == MAPTYPE_ROAD || type == MAPTYPE_TOWN || type == MAPTYPE_SEA
			|| type == MAPTYPE_CITY )
		return TRUE;
	else
		return FALSE;
}

//-----------------------------------------------------------------------------
//	屋内かどうかのチェック
//-----------------------------------------------------------------------------
u8 MTYPE_IsIndoorCheck( u8 type )
{
	if( type == MAPTYPE_ROOM || type == MAPTYPE_BASE )
		return TRUE;
	else
		return FALSE;
}

//==================================================================================
//
//	ワールドマップ位置関連
//
//==================================================================================
//-----------------------------------------------------------------------------
//	特殊接続で保持しているワールドマップ位置を返す
//-----------------------------------------------------------------------------
u8 GetSpecialWorldPos( void )
{
	const MapTotalData * p;
	p = GetTotalMapData( Fld.SpMapID.div_id, Fld.SpMapID.map_id );
	return p->WorldPos;
}

//-----------------------------------------------------------------------------
//	現在のマップでのワールドマップ位置を返す
//-----------------------------------------------------------------------------
u8 GetNowWorldPos( void )
{
	const MapTotalData * p;
	p = GetTotalMapData( Fld.MapID.div_id, Fld.MapID.map_id );
	return p->WorldPos;
}

//==================================================================================
//
//	戦闘背景指定関連
//
//==================================================================================
//-----------------------------------------------------------------------------
//	現在のマップの戦闘背景指定を返す
//-----------------------------------------------------------------------------
u8 GetBattleBGType(void)
{
	const MapTotalData * p;
	p = GetTotalMapData( Fld.MapID.div_id, Fld.MapID.map_id );
	return p->battle_bg;
}


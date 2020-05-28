#ifndef _ITEM_H_
#define	_ITEM_H_

//=========================================================================
//							アイテム関連
//									2001/09/06 by nakahiro
//=========================================================================
#include "common.h"
#include "../data/itemsym.h"

#define SEED_START_NO	(ITEM_SEED_START-1)	//タネのアイテム番号開始位置−1
#define WAZA_START_NO	(ITEM_SKILL_START-1)	//わざマシンのアイテム番号開始位置−1
#define HIDEN_START_NO	(ITEM_HIDENMASIN01-1)	//ひでんマシンのアイテム番号開始位置−1

#define	ITEMNAME_LEN	ITEM_NAME_SIZE + EOM_SIZE

//アイテムパラメータ用構造体定義
typedef struct {

	const u8	name[ ITEMNAME_LEN ];	//名前
	const u16	symbol;					//シンボル名
	const u16	price;					//買値
	const u8	eqp;					//装備効果
	const u8	atc;					//威力
	const u8	*msg;					//説明
	const u8	imp;					//重要
	const u8	cnv_btn;				//便利ボタン
	const u8	pocket;					//保存先（ポケット番号）
	const u8	fld;					//Fld機能
	void (*fld_func)(u8);				//Fldプログラムアドレス
	const u8	btl;					//Btl機能
	void (*btl_func)(u8);				//Btlプログラムアドレス
	const u8	work;					//ワーク

}ITEMDATA;

typedef void(*void_func_u8)(u8);

//-------------------------------------------------------------------------
//							アイテム名取得
//	引数 : u16  item = アイテムNo
//		 : u8 * str  = アイテム名格納場所
//-------------------------------------------------------------------------
extern void GetItemName( u16 item, u8 * str );

//-------------------------------------------------------------------------
//						ポケットの空きを調べる
//　引数　：p    = ポケットの番号
//　戻り値：あり = 空き位置
//          なし = -1
//-------------------------------------------------------------------------
extern s8	PocketSpace( u8 p );

//-------------------------------------------------------------------------
//						ポケットに何かあるかを調べる
//　引数　：p    = ポケットの番号
//　戻り値：あり = TRUE
//          なし = FALSE
//-------------------------------------------------------------------------
extern u8	PocketCheck( u8 p );

//-------------------------------------------------------------------------
//							アイテムチェック
//　引数　：item = アイテム番号
//          no   = チェックする個数
//　戻り値：あり = TRUE
//          なし = FALSE
//-------------------------------------------------------------------------
extern u8	ItemCheck( u16 item, u16 no );

//-------------------------------------------------------------------------
//					アイテムを加えられるかチェック
//　引数　：item  = アイテム番号
//          add   = 加える個数
//　戻り値：TRUE  = 成功
//          FALSE = 失敗
//-------------------------------------------------------------------------
extern u8	AddItemCheck( u16 item, u16 add );

//-------------------------------------------------------------------------
//							アイテムを加える
//　引数　：item  = アイテム番号
//          add   = 加える個数
//　戻り値：TRUE  = 成功
//          FALSE = 失敗
//-------------------------------------------------------------------------
extern u8	AddItem( u16 item, u16 add );

//-------------------------------------------------------------------------
//							アイテムを減らす
//　引数  ：item  = アイテム番号
//          sub   = 減らす個数
//　戻り値：TRUE  = 成功
//          FALSE = 失敗
//-------------------------------------------------------------------------
extern u8	SubItem( u16 item, u16 sub );

//-------------------------------------------------------------------------
//					アイテム番号からポケット番号を取得
//　引数  ：item  = アイテム番号
//　戻り値：ポケット番号
//-------------------------------------------------------------------------
extern u8	GetPocketNo( u16 item );

//-------------------------------------------------------------------------
//						アイテムデータを初期化
//	引数　：* data = アイテムデータポインタ
//			max    = 初期化数
//-------------------------------------------------------------------------
extern void ItemDataInit( MINEITEM * data, u8 max );

//-------------------------------------------------------------------------
//						パソコンの空きを調べる
//　戻り値：あり = 空き位置
//          なし = -1
//-------------------------------------------------------------------------
extern s8 CheckPCBoxItemSpace(void);

//-------------------------------------------------------------------------
//						パソコンに何かあるか調べる
//　戻り値：種類数
//-------------------------------------------------------------------------
extern u8 CheckPCBoxItem(void);

//-------------------------------------------------------------------------
//						パソコンのアイテムチェック
//　引数　：item = アイテム番号
//          no   = チェックする個数
//　戻り値：あり = TRUE
//          なし = FALSE
//-------------------------------------------------------------------------
extern u8 PCBoxItemCheck( u16 item, u16 no );

//-------------------------------------------------------------------------
//						パソコンにアイテムを加える
//　引数　：item  = アイテム番号
//          add   = 加える個数
//　戻り値：TRUE  = 成功
//          FALSE = 失敗
//-------------------------------------------------------------------------
extern u8 AddPCBoxItem( u16 item, u16 add );

//-------------------------------------------------------------------------
//						パソコンのアイテムを減らす
//　引数  ：pos   = 位置
//          sub   = 減らす個数
//-------------------------------------------------------------------------
extern void SubPCBoxItem( u8 pos, u16 sub );

//-------------------------------------------------------------------------
//						パソコンのスペースを詰める
//	引数 : p = ポケットデータ
//-------------------------------------------------------------------------
extern void PCBoxItemSortZERO(void);


//=======================================================================================
//								アイテムデータ取得関数
//=======================================================================================

//------------------------------------------------------------------------------
//	アイテム名取得						ItemData[ item ].name[ ITEMNAME_LEN ];
//
//	引数   : u16 item = アイテム番号
//	戻り値 : アイテム名のポインタ
//------------------------------------------------------------------------------
extern u8 * ItemNameGet( u16 item );

//------------------------------------------------------------------------------
//	アイテムシンボル取得					ItemData[ item ].symbol;
//	引数   : u16 item = アイテム番号
//	戻り値 : アイテムシンボル
//------------------------------------------------------------------------------
extern u16 ItemSymbolGet( u16 item );

//------------------------------------------------------------------------------
//	アイテムの値段取得						ItemData[ item ].price;
//
//	引数   : u16 item = アイテム番号
//	戻り値 : 値段
//------------------------------------------------------------------------------
extern u16 ItemPriceGet( u16 item );

//------------------------------------------------------------------------------
//	アイテム装備効果取得					ItemData[ item ].eqp;
//
//	引数   : u16 item = アイテム番号
//	戻り値 : 装備効果番号
//------------------------------------------------------------------------------
extern u8 ItemEquipGet( u16 item );

//------------------------------------------------------------------------------
//	アイテム威力取得						ItemData[ item ].atc;
//
//	引数   : u16 item = アイテム番号
//	戻り値 : 威力
//------------------------------------------------------------------------------
extern u8 ItemAttackGet( u16 item );

//------------------------------------------------------------------------------
//	アイテム説明メッセージ取得				ItemData[ item ].msg;
//
//	引数   : u16 item = アイテム番号
//	戻り値 : 説明のポインタ
//------------------------------------------------------------------------------
extern u8 * ItemMessageGet( u16 item );

//------------------------------------------------------------------------------
//	アイテム重要フラグ取得					ItemData[ item ].imp;
//
//	引数   : u16 item = アイテム番号
//	戻り値 : 重要フラグ
//------------------------------------------------------------------------------
extern u8 ItemEventGet( u16 item );

//------------------------------------------------------------------------------
//	アイテム便利ボタン登録フラグ取得		ItemData[ item ].cnv_btn;
//
//	引数   : u16 item = アイテム番号
//	戻り値 : 便利ボタン登録フラグ
//------------------------------------------------------------------------------
extern u8 ItemCnvButtonGet( u16 item );

//------------------------------------------------------------------------------
//	アイテム保存ポケット番号取得			ItemData[ item ].pocket;
//
//	引数   : u16 item = アイテム番号
//	戻り値 : 保存ポケット番号
//------------------------------------------------------------------------------
extern u8 ItemPocketGet( u16 item );

//------------------------------------------------------------------------------
//	アイテムフィールド使用場面取得			ItemData[ item ].fld;
//
//	引数   : u16 item = アイテム番号
//	戻り値 : フィールド使用場面番号
//------------------------------------------------------------------------------
extern u8 ItemFldSysGet( u16 item );

//------------------------------------------------------------------------------
//	アイテム使用フィールドプログラム取得	ItemData[ item ].fld_func
//
//	引数   : u16 item = アイテム番号
//	戻り値 : フィールドプログラムアドレス
//------------------------------------------------------------------------------
extern void_func_u8 ItemFldFuncGet( u16 item );

//------------------------------------------------------------------------------
//	アイテムバトル使用場面取得				ItemData[ item ].btl;
//
//	引数   : u16 item = アイテム番号
//	戻り値 : バトル使用場面番号
//------------------------------------------------------------------------------
extern u8 ItemBtlSysGet( u16 item );

//------------------------------------------------------------------------------
//	アイテム使用バトルプログラム取得		ItemData[ item ].btl_func
//
//	引数   : u16 item = アイテム番号
//	戻り値 : バトルプログラムアドレス
//------------------------------------------------------------------------------
extern void_func_u8 ItemBtlFuncGet( u16 item );

//------------------------------------------------------------------------------
//	アイテムワーク取得						ItemData[ item ].work;
//
//	引数   : u16 item = アイテム番号
//	戻り値 : ワーク内の番号
//------------------------------------------------------------------------------
extern u8 ItemWorkGet( u16 item );



#endif	/* _ITEM_H_ */

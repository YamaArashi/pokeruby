/*==================================================================*/
/*                  pic_eff.h                                       */
/*             　　 画像エフェクト関連                              */
/*                  by tomo                                         */
/*==================================================================*/

//BGエフェクト用変数構造体
typedef struct{
  u8 eff_no;			//エフェクト番号　※必須
  u16 *bg_adrs;			//ＢＧアドレス(計算用テンポラリ)　※必須
  u16 *pal_adrs;		//パレット出力アドレス(計算テンポラリ)　※必須
  u16 *map_adrs;		//マップ出力アドレス(BGmode0-2)
  u8 *chr_adrs;			//キャラ出力アドレス(BG,OBJ兼用)
  u16 mode;				//色のモード 0:255,1:223,2:15,3:32g,4:15g,5:b/w
  u16 out_mode;			//出力ＢＧモード 0;256色BG,1:16色BG,2:256obj,3:16obj
  u8 pal_p;				//0-15（どのパレットから使うか。通常0)　※必須
  u8 eax,eay,eah,eav;	//エフェクトさせる始点ＸＹとそこからのＨＶ幅　※必須
  u8 sah,sav;			//画像全体の大きさ　※必須
  u8 pat;				//エフェクトパターン(0:通常、1-4:パターン1-4)
}BE_ST;
/*==================================================================*/
/*==================================================================*/
#define COL_MODE_255	0		//255色
#define COL_MODE_223	1		//223色(2パレット)
#define COL_MODE_15		2		//15色
#define COL_MODE_32G	3		//グレー32色
#define COL_MODE_15G	4		//グレー15色
#define COL_MODE_BW		5		//黒白2色

#define OUT_COL_256BG	0		//256色BG
#define OUT_COL_16BG	1		//16色BG
#define OUT_COL_256OBJ	2		//256色OBJ
#define OUT_COL_16OBJ	3		//16色OBJ
/*==================================================================*/
/*==================================================================*/
#define EFF_KOUSHI		1	//格子状
#define EFF_PASUTERU_POKE	2	//パステル調(ポケモンOBJ専用版)
#define EFF_FOCUS_H		3	//フォーカス（横ライン）
#define EFF_FOCUS_V		4	//フォーカス（縦ライン）
#define EFF_FOCUS		5	//フォーカス（縦横）
#define EFF_GRAY32		6	//グレースケール（32色）
#define EFF_FUCHI_H		7	//ふちどり強化（横ライン）
#define EFF_FUCHI_V		8	//ふちどり強化（縦ライン）
#define EFF_RINKAKU		9	//輪郭取りだし
#define EFF_SHIRUETTO	10	//シルエット(合成)
#define EFF_KYOUCYOU_BW	11	//強調白黒画像(合成)
#define EFF_SUMIE_POKE	12	//墨絵調（合成）(ポケモンOBJ専用版)
#define EFF_AWAI_POKE	13	//淡色調（合成）(ポケモンOBJ専用版)
#define EFF_RINKAKU_KYOUCYO	30	//輪郭のみ強調
#define EFF_HANTEN		31	//明暗反転
#define EFF_FUCHI2_H	32	//縁取り特殊版（横）
#define EFF_FUCHI2_V	33	//縁取り特殊版（縦）
#define EFF_GRAY15		34	//グレースケール１５色
#define EFF_PASUTERU	35	//パステル調
#define EFF_SUMIE		36	//墨絵調（合成）
#define EFF_AWAI		37	//淡色調（合成）

/*==================================================================*/
/*==================================================================*/
#define R_MAX 29					//最も明るい時の値
#define G_MAX 29
#define B_MAX 29

#define R_MIN 6						//最も暗いときの値
#define G_MIN 6
#define B_MIN 6

#define R_MID ((R_MAX-R_MIN)/2)		//中くらいの値
#define G_MID ((G_MAX-G_MIN)/2)
#define B_MID ((B_MAX-B_MIN)/2)
/*==================================================================*/
/*==================================================================*/
#define RGB_BLACK	0x0000				//黒（RGB:各0)
#define RGB_WHITE	0x7fff				//白（RGB:各1f)
#define NUKE_BLACK	0x8000				//ヌケ色黒（RGB:各0、ヌケ色)

#define RGB_GRAY	0x3def				//灰色（RGB:各f)

/*==================================================================*/
/*==================================================================*/
#define PA_H	(8*8)				//ポケモン表示エリアの横の大きさ
#define PA_V	(8*8)				//ポケモン表示エリアの縦の大きさ

/*==================================================================*/
/*==================================================================*/
#define GRAY_COLOR_UP		3		//画面(背景)に合わせた明るさ補正量(グレーエフェクト)
#define SUMIE_COLOR_UP		2		//画面(背景)に合わせた明るさ補正量(墨絵エフェクト)
#define SUMIE_WHITE_DOWN	4		//画面(背景)に合わせた白レベルダウン量(墨絵エフェクト)

/*==================================================================*/
/*==================================================================*/
extern void poke_bit_effect(BE_ST *est);

/*==================================================================*/
/*==================================================================*/

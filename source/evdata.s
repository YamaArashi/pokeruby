//===============================================================
//
//	スクリプトデータ
//
//===============================================================

#include "AgbDefine.s"

/* テーブルをマクロで生成するために定義		*/
.SET	EV_CMD_S_GLOBAL,TRUE
.SET	EV_WORK_S_GLOBAL,TRUE
.SET	EV_CALL_S_GLOBAL,TRUE
.SET	SCR_TBL_S_GLOBAL,TRUE

/* スクリプトデータ用共通インクルードヘッダ */
#include	"usescript.h"

//===============================================================
//	スクリプトデータ
//===============================================================

#include	"../evdata/scriptlist.s"

#include	"../script/system.s"

#include	"../script/common.ev"

#include	"../script/debug.ev"

//---------------------------------------------------------------
//	タネイベント
//---------------------------------------------------------------
#include "../script/seed.ev"
#include "../script/seed.mes"

//---------------------------------------------------------------
//	ひみつきち
//---------------------------------------------------------------
#include "../script/base.ev"
#include "../script/base.mes"

//---------------------------------------------------------------
//	つうしん交換・対戦
//---------------------------------------------------------------
#include "../script/connect.ev"
#include "../script/connect.mes"

//---------------------------------------------------------------
//	コンテスト
//---------------------------------------------------------------
#include "../script/contest.ev"
#include "../script/contest.mes"

//---------------------------------------------------------------
//	ＴＶ企画
//---------------------------------------------------------------
#include "../script/tv.ev"			//インタビュー・ＴＶ放送
#include "../script/tv.mes"	
#include "../script/letter.ev"		//手紙
#include "../script/camera.ev"		//インタビュアー＆カメラマン

//---------------------------------------------------------------
//	７人のおやじ
//---------------------------------------------------------------
#include "../script/oyaji.ev"
#include "../script/oyaji.mes"

//---------------------------------------------------------------
//　秘伝技・居合斬り
//---------------------------------------------------------------
#include "../script/iaigiri.ev"
#include "../script/iaigiri.mes"

//---------------------------------------------------------------
//　秘伝技・岩砕き
//---------------------------------------------------------------
#include "../script/iwakudaki.ev"
#include "../script/iwakudaki.mes"

//---------------------------------------------------------------
//　秘伝技・怪力
//---------------------------------------------------------------
#include "../script/kairiki.ev"
#include "../script/kairiki.mes"

//---------------------------------------------------------------
//　秘伝技・滝登り
//---------------------------------------------------------------
#include "../script/taki.ev"
#include "../script/taki.mes"

//---------------------------------------------------------------
//　秘伝技・ﾀﾞｲﾋﾞﾝｸﾞ
//---------------------------------------------------------------
#include "../script/diving.ev"
#include "../script/diving.mes"

//---------------------------------------------------------------
//　技・甘い香り
//---------------------------------------------------------------
#include "../script/amaikaori.ev"
#include "../script/amaikaori.mes"

//---------------------------------------------------------------
//　フィールド上のモンスターボール
//---------------------------------------------------------------
//#include "../script/ball.ev"
#include "../script/ball2.ev"

//---------------------------------------------------------------
//　自己紹介
//---------------------------------------------------------------
#include "../script/introduce.ev"
#include "../script/introduce.mes"

//---------------------------------------------------------------
//　育て屋
//---------------------------------------------------------------
#include "../script/sodateya.ev"
#include "../script/sodateya.mes"

//---------------------------------------------------------------
//　シナリオバージョン違いファイル
//---------------------------------------------------------------
#include "../script/cave_d0701s.ev"			//えんとつ山
#include "../script/cave_d0701r.ev"
#include "../script/cave_d0701s.mes"
#include "../script/cave_d0701r.mes"
#include "../script/cave_d1111s.ev"			//不思議な洞窟
#include "../script/cave_d1111r.ev"
#include "../script/cave_d1111s.mes"
#include "../script/cave_d1111r.mes"
#include "../script/cave_d1206s.ev"			//新たな洞窟
#include "../script/cave_d1206r.ev"
#include "../script/cave_d1206s.mes"
#include "../script/cave_d1206r.mes"
#include "../script/cave_d0808s.ev"			//おくりび山
#include "../script/cave_d0808r.ev"
#include "../script/cave_d0808s.mes"
#include "../script/cave_d0808r.mes"

//---------------------------------------------------------------
//---------------------------------------------------------------
//---------------------------------------------------------------
SCRIPT_LABEL	ev_hiden_flash_script
	_FLD_BRIGHT_EFFECT	1
	_FLD_BRIGHT_CHANGE	1
	_END

//---------------------------------------------------------------
//　オープニング関連
//---------------------------------------------------------------
#include "../script/opening.ev"

//---------------------------------------------------------------
//　タネ大好きおやじ
//---------------------------------------------------------------
#include "../script/cube_oyaji.ev"

//---------------------------------------------------------------
//	トレーナーMSGデータ
//---------------------------------------------------------------
#include "../script/trainner_msg.s"

//---------------------------------------------------------------
//	アイテム用
//---------------------------------------------------------------
#include "../script/item.ev"
#include "../script/item.mes"


//---------------------------------------------------------------
//	サファリゾーン関連
//---------------------------------------------------------------
#include "../script/safari.ev"
#include "../script/safari.mes"
#include "../script/safari2.mes"

//---------------------------------------------------------------
//	ルーレット関連
//---------------------------------------------------------------
#include "../script/roulette.ev"
#include "../script/roulette.mes"

//---------------------------------------------------------------
//	おおきさオヤジ関連
//---------------------------------------------------------------
#include "../script/size_oyaji.mes"

//---------------------------------------------------------------
//	図鑑評価関連
//---------------------------------------------------------------
//#include "../script/hyouka.ev"
#include "../script/hyouka.mes"

//---------------------------------------------------------------
//	ポケモンくじ
//---------------------------------------------------------------
//#include "../script/kuzi.ev"
#include "../script/kuzi.mes"

//---------------------------------------------------------------
//	南の孤島イベント
//---------------------------------------------------------------
#include "../script/kokoro01.mes"

//---------------------------------------------------------------
//	点字メッセージデータ
//---------------------------------------------------------------
#include "../script/tenji.mes"

//---------------------------------------------------------------
//	RAM木の実メッセージデータ
//---------------------------------------------------------------
#include "../script/ramkinomi.mes"

//---------------------------------------------------------------
//	木の実メッセージデータ
//---------------------------------------------------------------
#include "../script/kinomi.mes"

//---------------------------------------------------------------
//	浅瀬の洞窟メッセージデータ
//---------------------------------------------------------------
#include "../script/asase.mes"

//---------------------------------------------------------------
//	ＢＧメッセージデータ
//---------------------------------------------------------------
#include "../script/bg.mes"

//---------------------------------------------------------------
//	毒による瀕死状態
//---------------------------------------------------------------
//common.ev / common.mes に移動した！

//---------------------------------------------------------------
//		マップエフェクト：落とし穴
//---------------------------------------------------------------
#include "../script/pitfall.ev"



//===============================================================
//	サンプルスクリプトデータ
//===============================================================

	.GLOBAL test_script
	.GLOBAL	test_bg_script
	.GLOBAL	test_pos_script

//---------------------------------------------------------------
//---------------------------------------------------------------
test_script:
	_EASY_OBJ_MSG	test_msg
	_END
	
//---------------------------------------------------------------
//---------------------------------------------------------------
test_bg_script:
	_EASY_MSG	test_bg_msg
	_END

//---------------------------------------------------------------
//---------------------------------------------------------------
SCRIPT_LABEL	test_jikken_script
//	_BGM_FADEOUT
//	_FLD_FADE_BLACKOUT
//	_PROGRAM	BG_EF_TEST			// BGエフェクトテストの呼び出し
//	_STOP_SCRIPT
//	_BGM_FADEIN
	_END

//---------------------------------------------------------------
//---------------------------------------------------------------
test_pos_script:
	_EASY_MSG	test_pos_msg
	_END

//---------------------------------------------------------------
//---------------------------------------------------------------
SCRIPT_LABEL	debug_clock_script
	_TALK_START
	_CALL	ev_clock_set
	_TALK_END
	_END

//---------------------------------------------------------------
//---------------------------------------------------------------
SCRIPT_LABEL	test_tama_script
	_TALK_START
	//_PUT_TENJI		tenji_sample01
	_PUT_TENJI		msg_tenji_01_p01_cave_d2002
	_AB_KEYWAIT
	_SCREEN_CLEAR
	_TALK_END
	_END

//===============================================================
//	サンプルメッセージデータ
//===============================================================

test_msg:
	.byte	TE_,SU_,TO_,yo_,u_,spc_,ME_,TTU_,SE_,bou_,ZI_,de_,su_,gyoe_
	.byte	CR_
	.byte	PO_,KE_,MO_,N_,no_,spc_,se_,ka_,i_,he_,spc_,yo_,u_,ko_,so_,gyoe_
	.byte	EOM_

test_bg_msg:
	.byte	TE_,SU_,TO_,yo_,u_,spc_,ME_,TTU_,SE_,bou_,ZI_,de_,su_,gyoe_
	.byte	CR_
	.byte	ka_,n_,ba_,n_,spc_,de_,su_
	.byte	EOM_

test_pos_msg:
	.byte	TE_,SU_,TO_,yo_,u_,spc_,ME_,TTU_,SE_,bou_,ZI_,de_,su_,gyoe_
	.byte	CR_
	.byte	za_,hi_,yyo_,u_,spc_,TI_,EE_,TTU_,KU_,no_,spc_,I_,BE_,N_,TO_,de_,su_
	.byte	EOM_


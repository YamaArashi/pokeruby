//=========================================================================
//	
//	毒系 技エフェクト
//
//=========================================================================
#include "common.h"
#include "actor.h"
#include "actanm.h"
#include "madefine.h"
#include "wazatool.h"
#include "waza_dat.h"
#include "waza_eff.h"
#include "server.h"
#include "calctool.h"





//=========================================================================
//
//		どくどく
//												by matsuda 2002.02.01(金)
//=========================================================================
#define DOKUDOKUANM_WAIT	5

static const actAnm dokudoku_anm0[] =
{
	{OBJ16_16x32 * 0, DOKUDOKUANM_WAIT, 0, 0},
	{OBJ16_16x32 * 1, DOKUDOKUANM_WAIT, 0, 0},
	{OBJ16_16x32 * 2, DOKUDOKUANM_WAIT, 0, 0},
	{OBJ16_16x32 * 3, DOKUDOKUANM_WAIT, 0, 0},
//	{ACT_ANMcLOOP, 1, 0,0},
	{ACT_ANMEND,0,0,0},
};
static const actAnm * const DokudokuAnmTbl[] = 
{
	dokudoku_anm0,
};
const actHeader ActDokudokuHeader = 
{
	WAZACHR_ID_DOKUDOKU,
	WAZACHR_ID_DOKUDOKU,
	&WazaOamDataNormal[10],
	DokudokuAnmTbl,
	ACT_NTRANS,
	DummyActAffTbl,
	W_AnmAffWaitDel,
};











//=========================================================================
//
//		ヘドロこうげき
//												by matsuda 2002.02.01(金)
//=========================================================================
static void HedoroInit(actWork *xreg);
static void HedoroMain(actWork *xreg);
static void YoukaiekiMain(actWork *xreg);
static void YoukaiekiInit(actWork *xreg);

static const actAnm hedoro_anm0[] =		//まるい
{
	{OBJ16_16x16 * 0, 1, 0, 0},
	{ACT_ANMEND,0,0,0},
};
static const actAnm hedoro_anm1[] =		//水滴
{
	{OBJ16_16x16 * 1, 1, 0, 0},
	{ACT_ANMEND,0,0,0},
};
static const actAnm hedoro_anm2[] =		//ぐしゃっとした形
{
	{OBJ16_16x16 * 2, 1, 0, 0},
	{ACT_ANMEND,0,0,0},
};
static const actAnm * const HedoroAnmTbl[] = 
{
	hedoro_anm0,
	hedoro_anm1,
	hedoro_anm2,
};

#define HEDORO_ADDAFF	10
#define HEDORO_AFFLOOP	10
static const actAffAnm HedoroAff0[] = {
//	{ 拡縮x, 拡縮y, 角度, ｳｪｲﾄ }
	{ 0x160, 0x160, 0, ACT_AFSET},
	{ -HEDORO_ADDAFF, -HEDORO_ADDAFF, 0, HEDORO_AFFLOOP},
	{ HEDORO_ADDAFF, HEDORO_ADDAFF, 0, HEDORO_AFFLOOP},
	{ACT_AFLOOP,0,0,0},
};
static const actAffAnm HedoroAff1[] = {
//	{ 拡縮x, 拡縮y, 角度, ｳｪｲﾄ }
	{ 0x100-20, 0x100-20, 0, ACT_AFSET},
	{ACT_AFEND,0,0,0},
};
static const	actAffAnm * const HedoroAffTbl[] = {
	HedoroAff0,
	HedoroAff1,
};

const actHeader ActHedoroHeader = 
{
	WAZACHR_ID_HEDORO,
	WAZACHR_ID_HEDORO,
	&WazaOamDataAffine2[1],
	HedoroAnmTbl,
	ACT_NTRANS,
	HedoroAffTbl,
	HedoroInit,
};

//-- ようかいえき --//
const actHeader YoukaiekiHeader = 
{
	WAZACHR_ID_HEDORO,
	WAZACHR_ID_HEDORO,
	&WazaOamDataAffine2[1],
	HedoroAnmTbl,
	ACT_NTRANS,
	HedoroAffTbl,
	YoukaiekiInit,
};


//----------------------------------------------------------
//	0:Xoffset	1:Yoffset	2:Sync回数	3:ｱﾆﾒﾊﾟﾀｰﾝ(0:グシャっとしたやつ  1:丸い水)
//----------------------------------------------------------
#define HEDORO_FURIHABA_Y	-30
static void HedoroInit(actWork *xreg)
{
	if(WazaEffWork[3] == 0)
		ActAnmChg(xreg, 2);
	
	WazaDefaultPosSet2(xreg, PM_MODE);
	xreg->work[0] = WazaEffWork[2];
	xreg->work[2] = GetWazaEffPos(DefenceNo, PM_X);
	xreg->work[4] = GetWazaEffPos(DefenceNo, PM_Y);
	xreg->work[5] = HEDORO_FURIHABA_Y;
	YamanariMoveInit(xreg);
	xreg->move = HedoroMain;
}

static void HedoroMain(actWork *xreg)
{
	if(YamanariMoveMain(xreg))
		DelWazaEffect(xreg);
}

//----------------------------------------------------------
//	ようかいえき用
//	0:Xoffset	1:Yoffset	2:Sync回数	3:ｱﾆﾒﾊﾟﾀｰﾝ(0:グシャっとしたやつ  1:丸い水)
//	4:終点Xoffset	5:終点Yoffset
//----------------------------------------------------------
static void YoukaiekiInit(actWork *xreg)
{
	s16 x, y;
	
	if(WazaEffWork[3] == 0)
		ActAnmChg(xreg, 2);
	
	WazaDefaultPosSet2(xreg, PM_MODE);
	GetCenterEffPos(DefenceNo, PM_MODE, &x, &y);
	if(MineEnemyCheck(AttackNo))
		WazaEffWork[4] = -WazaEffWork[4];
	xreg->work[0] = WazaEffWork[2];
	xreg->work[2] = x + WazaEffWork[4];
	xreg->work[4] = y + WazaEffWork[5];
	xreg->work[5] = HEDORO_FURIHABA_Y;
	YamanariMoveInit(xreg);
	xreg->move = YoukaiekiMain;
}

static void YoukaiekiMain(actWork *xreg)
{
	if(YamanariMoveMain(xreg))
		DelWazaEffect(xreg);
}

//----------------------------------------------------------
//	ヘドロばくだん 用(ビチャっと広がるやつ)
//	0:終点X ｵﾌｾｯﾄ方向	1:終点Y ｵﾌｾｯﾄ方向	2:Sync回数
//----------------------------------------------------------
static void HedoroSubInit(actWork *xreg);
static void HedoroSubMain(actWork *xreg);

const actHeader ActHedoroSubHeader = 
{
	WAZACHR_ID_HEDORO,
	WAZACHR_ID_HEDORO,
	&WazaOamDataAffine[1],
	&HedoroAnmTbl[2],
	ACT_NTRANS,
	&HedoroAffTbl[1],
	HedoroSubInit,
};

static void HedoroSubInit(actWork *xreg)
{
	xreg->work[0] = WazaEffWork[2];
	xreg->work[1] = xreg->x;
	xreg->work[2] = xreg->x + WazaEffWork[0];
	xreg->work[3] = xreg->y;
	xreg->work[4] = xreg->y + WazaEffWork[1];
	W_GetStraightMoveLoop(xreg);
	xreg->work[5] = xreg->work[1] / WazaEffWork[2];
	xreg->work[6] = xreg->work[2] / WazaEffWork[2];
	xreg->move = HedoroSubMain;
}

static void HedoroSubMain(actWork *xreg)
{
	W_ParallelMove2Seq(xreg);
	xreg->work[1] -= xreg->work[5];
	xreg->work[2] -= xreg->work[6];
	if(xreg->work[0] == 0)
		DelWazaEffect(xreg);
}

//----------------------------------------------------------
//	ようかいえき用(水滴)
//	0:Xoffset	1:Yoffset	2:終点Xoffset	3:終点Yoffset	4:Sync回数
//----------------------------------------------------------
static void HedoroSuitekiInit(actWork *xreg);

#define HEDOROSUITEKI_AFF	0x10
static const actAffAnm HedoroSuitekiAff0[] = {	//みずでっぽうの水滴でも使用
//	{ 拡縮x, 拡縮y, 角度, ｳｪｲﾄ }
	{ -HEDOROSUITEKI_AFF, HEDOROSUITEKI_AFF, 0, 6},
	{ HEDOROSUITEKI_AFF, -HEDOROSUITEKI_AFF, 0, 6},
	{ACT_AFLOOP,0,0,0},
};
const	actAffAnm * const HedoroSuitekiAffTbl[] = {
	HedoroSuitekiAff0,
};
const actHeader ActHedoroSuitekiHeader = 
{
	WAZACHR_ID_HEDORO,
	WAZACHR_ID_HEDORO,
	&WazaOamDataAffine2[1],
	&HedoroAnmTbl[1],
	ACT_NTRANS,
	HedoroSuitekiAffTbl,
	HedoroSuitekiInit,
};

static void HedoroSuitekiInit(actWork *xreg)
{
//	WazaDefaultPosSet1(xreg, PM_MODE);
	GetCenterEffPos(DefenceNo, PM_MODE, &xreg->x, &xreg->y);
	if(MineEnemyCheck(AttackNo))
		WazaEffWork[0] = -WazaEffWork[0];
	xreg->x += WazaEffWork[0];
	xreg->y += WazaEffWork[1];
	
	xreg->work[0] = WazaEffWork[4];
	xreg->work[2] = xreg->x + WazaEffWork[2];
	xreg->work[4] = xreg->y + WazaEffWork[4];
	xreg->move = W_StraightSyncMove;
	SetWorkSeq(xreg, DelWazaEffect);
}













//=========================================================================
//
//		毒の追加効果：共通エフェクト
//												by matsuda 2002.02.01(金)
//=========================================================================
static void DokuKoukaInit(actWork *xreg);
static void DokuKoukaMain(actWork *xreg);

#define DOKUKOUKA_INIT_AFF	100
#define DOKUKOUKA_AFFLOOP		20
#define DOKUKOUKA_AFFADD	(DOKUKOUKA_INIT_AFF/DOKUKOUKA_AFFLOOP)

#define DOKUKOUKA_SEC		11
#define DOKUKOUKA_FURIHABA	4
#define DOKUKOUKA_DY		(0x0030)	//上昇ｽﾋﾟｰﾄﾞ(固定少数)

static const actAffAnm DokuKoukaAff0[] = {
//	{ 拡縮x, 拡縮y, 角度, ｳｪｲﾄ }
	{0x100-DOKUKOUKA_INIT_AFF,	0x100-DOKUKOUKA_INIT_AFF, 0, ACT_AFSET},
	{DOKUKOUKA_AFFADD, DOKUKOUKA_AFFADD, 0, DOKUKOUKA_AFFLOOP},
	{ACT_AFEND,0,0,0},
};
static const	actAffAnm * const DokuKoukaAffTbl[] = {
	DokuKoukaAff0,
};
const actHeader ActDokuKoukaHeader = 
{
	WAZACHR_ID_HEDORO,
	WAZACHR_ID_HEDORO,
	&WazaOamDataAffine[1],
	HedoroAnmTbl,
	ACT_NTRANS,
	DokuKoukaAffTbl,
	DokuKoukaInit,
};

//-- 水の追加効果エフェクト --//
extern const actAnm *const MizuSuitekiAnmTbl[];
const actHeader ActMizuKoukaHeader = 
{
	WAZACHR_ID_MIZU2,
	WAZACHR_ID_MIZU2,
	&WazaOamDataBldAffine[1],
	&MizuSuitekiAnmTbl[0],
	ACT_NTRANS,
	DokuKoukaAffTbl,
	DokuKoukaInit,
};

//----------------------------------------------------------
//	0:Xoffset	1:Yoffset	2:0=ﾉｰﾏﾙ、1=2体選択モード
//----------------------------------------------------------
static void DokuKoukaInit(actWork *xreg)
{
	if(WazaEffWork[2] == 0)
		WazaDefaultPosSet1(xreg, PM_MODE);
	else{
		GetCenterEffPos(DefenceNo, PM_MODE, &xreg->x, &xreg->y);
		if(MineEnemyCheck(AttackNo))
			WazaEffWork[0] = -WazaEffWork[0];
		xreg->x += WazaEffWork[0];
		xreg->y += WazaEffWork[1];
	}
	xreg->move = DokuKoukaMain;
}

static void DokuKoukaMain(actWork *xreg)
{
	xreg->work[0] = 0xff & (xreg->work[0] + DOKUKOUKA_SEC);
	xreg->dx = SinMove(xreg->work[0], DOKUKOUKA_FURIHABA);
	
	xreg->work[1] += DOKUKOUKA_DY;
	xreg->dy = -(xreg->work[1] >> 8);
	
	if(xreg->affend_sw)
		DelWazaEffect(xreg);
}

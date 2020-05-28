//=========================================================================
//	
//	技エフェクトをする時にポケモンを動かすﾙｰﾁﾝ
//												by matsuda 2001.08.31(金)
//=========================================================================
#include "common.h"
#include "actor.h"
#include "actanm.h"
#include "madefine.h"

#include "wazatool.h"
#include "waza_dat.h"
#include "server.h"
#include "bss.h"
#include "waza_eff.h"
#include "calctool.h"
#include "task.h"
#include "fight.h"



//----------------------------------------------------------
//	プロトタイプ宣言
//----------------------------------------------------------
static void TaskPokeBuruburuMain(u8 id);
static void TaskPokeKurukuruMain(u8 id);

void SeqWazaTaiatariInit(actWork *Xreg);
void SeqWazaTaiatariReturn(actWork *Xreg);
void SeqWazaHaneruInit(actWork *Xreg);
void SeqWazaHaneruReturn(actWork *Xreg);
static void SeqWazaPokeDefaultMove(actWork *Xreg);
static void SeqWazaPokeDefaultMain(actWork *Xreg);
static void SeqWazaPokeStraightMove(actWork *Xreg);
static void SeqWazaPokeStraightMove2(actWork *Xreg);
static void TaskPokeCenterBuruMain(u8 id);
static void PokeSinBackWait(u8 id);
static void PokeSinBackMain(u8 id);
static void TaskPokeBuruDownMain(u8 id);

//----------------------------------------------------------
//	定数宣言
//----------------------------------------------------------

//----------------------------------------------------------
//	アクターテーブル
//----------------------------------------------------------
const	actHeader ActTaiatariHeader={
	0,
	0,
	&DummyActOam,
	DummyActAnmTbl,
	0,
	DummyActAffTbl,
	SeqWazaTaiatariInit,
};
const	actHeader ActHaneruHeader={
	0,
	0,
	&DummyActOam,
	DummyActAnmTbl,
	0,
	DummyActAffTbl,
	SeqWazaHaneruInit,
};
const	actHeader ActPokeDefaultMoveHeader={
	0,
	0,
	&DummyActOam,
	DummyActAnmTbl,
	0,
	DummyActAffTbl,
	SeqWazaPokeDefaultMove,
};
const	actHeader ActPokeStraightMoveHeader={
	0,
	0,
	&DummyActOam,
	DummyActAnmTbl,
	0,
	DummyActAffTbl,
	SeqWazaPokeStraightMove,
};

const	actHeader ActPokeStraightMove2Header={
	0,
	0,
	&DummyActOam,
	DummyActAnmTbl,
	0,
	DummyActAffTbl,
	SeqWazaPokeStraightMove2,
};

//=========================================================================
//	タスクシーケンス
//=========================================================================

//=========================================================================
//	その場でブルブル
//=========================================================================
//-------------------------------------------------------------
// offset 0:0=攻撃側  1=防御側	2=攻撃側相方  3=防御側相方
//		  1:X振り幅  2:Y振り幅  3:回数  4:wait
//-------------------------------------------------------------
void TaskPokeBuruburu(u8 id)
{
	u8 poke;
	
	poke = W_GetPokeActNo(WazaEffWork[0]);
	if(poke == 0xff){
		DelTaskEffect(id);
		return;
	}

	ActWork[poke].dx = WazaEffWork[1];
	ActWork[poke].dy = WazaEffWork[2];
	TaskTable[id].work[0] = poke;
	TaskTable[id].work[1] = WazaEffWork[3];
	TaskTable[id].work[2] = WazaEffWork[4];
	TaskTable[id].work[3] = WazaEffWork[4];
	TaskTable[id].work[4] = WazaEffWork[1];
	TaskTable[id].work[5] = WazaEffWork[2];
	TaskTable[id].TaskAdrs = TaskPokeBuruburuMain;
	TaskTable[id].TaskAdrs(id);
}
static void TaskPokeBuruburuMain(u8 id)
{
	if(TaskTable[id].work[3] == 0)
	{
		if(ActWork[TaskTable[id].work[0]].dx == 0)
			ActWork[TaskTable[id].work[0]].dx = TaskTable[id].work[4];
		else
			ActWork[TaskTable[id].work[0]].dx = 0;
		if(ActWork[TaskTable[id].work[0]].dy == 0)
			ActWork[TaskTable[id].work[0]].dy = TaskTable[id].work[5];
		else
			ActWork[TaskTable[id].work[0]].dy = 0;
		TaskTable[id].work[3] = TaskTable[id].work[2];
		TaskTable[id].work[1]--;

		if(TaskTable[id].work[1] == 0)
		{
			ActWork[TaskTable[id].work[0]].dx = 0;
			ActWork[TaskTable[id].work[0]].dy = 0;
			DelTaskEffect(id);
		}
	}
	else
		TaskTable[id].work[3]--;
}

//=========================================================================
//	その場でブルブル2
//	今の場所を中心にしてブルブル動く
//=========================================================================
//-------------------------------------------------------------
// offset 0:0=攻撃側  1=防御側	2=攻撃側相方  3=防御側相方
//			4=味方側1 5=味方側2 6=敵側1 7=敵側2
//			8=自爆専用(死んでてもAttackNoのﾎﾟｹﾓﾝを揺らす)
//		  1:X振り幅(半径)  2:Y振り幅(半径)  3:回数  4:wait
//-------------------------------------------------------------
void TaskPokeCenterBuru(u8 id)
{
	u8 poke;
	u8 end = 0;
	u8 client_no;
	
	if(WazaEffWork[0] < 4){
		poke = W_GetPokeActNo(WazaEffWork[0]);
		if(poke == 0xff)
			end = 1;
	}
	else if(WazaEffWork[0] != 8){
		switch(WazaEffWork[0]){
			case 4:
				client_no = ClientNoGet(BSS_CLIENT_MINE);
				break;
			case 5:
				client_no = ClientNoGet(BSS_CLIENT_MINE2);
				break;
			case 6:
				client_no = ClientNoGet(BSS_CLIENT_ENEMY);
				break;
			case 7:
			default:
				client_no = ClientNoGet(BSS_CLIENT_ENEMY2);
				break;
		}
		if(PokeBG2taimeCheck(client_no) == 0)
			end = 1;
		poke = PokemonStruct[client_no];
	}
	else{
		poke = PokemonStruct[AttackNo];
	}
	
	if(end){
		DelTaskEffect(id);
		return;
	}

	ActWork[poke].dx = WazaEffWork[1];
	ActWork[poke].dy = WazaEffWork[2];
	TaskTable[id].work[0] = poke;
	TaskTable[id].work[1] = WazaEffWork[3];
	TaskTable[id].work[2] = WazaEffWork[4];
	TaskTable[id].work[3] = WazaEffWork[4];
	TaskTable[id].work[4] = WazaEffWork[1];
	TaskTable[id].work[5] = WazaEffWork[2];
	TaskTable[id].TaskAdrs = TaskPokeCenterBuruMain;
	TaskTable[id].TaskAdrs(id);
}
static void TaskPokeCenterBuruMain(u8 id)
{
	if(TaskTable[id].work[3] == 0)
	{
		if(ActWork[TaskTable[id].work[0]].dx == TaskTable[id].work[4])
			ActWork[TaskTable[id].work[0]].dx = -TaskTable[id].work[4];
		else
			ActWork[TaskTable[id].work[0]].dx = TaskTable[id].work[4];
		if(ActWork[TaskTable[id].work[0]].dy == TaskTable[id].work[5])
			ActWork[TaskTable[id].work[0]].dy = -TaskTable[id].work[5];
		else
			ActWork[TaskTable[id].work[0]].dy = TaskTable[id].work[5];
		TaskTable[id].work[3] = TaskTable[id].work[2];
		TaskTable[id].work[1]--;

		if(TaskTable[id].work[1] == 0)
		{
			ActWork[TaskTable[id].work[0]].dx = 0;
			ActWork[TaskTable[id].work[0]].dy = 0;
			DelTaskEffect(id);
		}
	}
	else
		TaskTable[id].work[3]--;
}
//=========================================================================
//	その場でブルブル３
//	今の場所を中心にしてブルブル動く（dx, dy 値を保持する）
//=========================================================================
static void TaskPokeCenterBuru2Main(u8 id);
//-------------------------------------------------------------
// offset 0:0=攻撃側  1=防御側	2=攻撃側相方  3=防御側相方
//		  1:X振り幅(半径)  2:Y振り幅(半径)  3:回数  4:wait
//-------------------------------------------------------------
void TaskPokeCenterBuru2(u8 id)
{
	u8 poke;
	
	poke = W_GetPokeActNo(WazaEffWork[0]);
	if(poke == 0xff){
		DelTaskEffect(id);
		return;
	}

	ActWork[poke].dx += WazaEffWork[1];
	ActWork[poke].dy += WazaEffWork[2];
	TaskTable[id].work[0] = poke;
	TaskTable[id].work[1] = 0;
	TaskTable[id].work[2] = WazaEffWork[3];
	TaskTable[id].work[3] = 0;
	TaskTable[id].work[4] = WazaEffWork[4];
	TaskTable[id].work[5] = WazaEffWork[1] * 2;
	TaskTable[id].work[6] = WazaEffWork[2] * 2;
	TaskTable[id].TaskAdrs = TaskPokeCenterBuru2Main;
	TaskTable[id].TaskAdrs(id);
}
static void TaskPokeCenterBuru2Main(u8 id)
{
	if(TaskTable[id].work[3] == 0)
	{
		if(TaskTable[id].work[1] & 1){
			ActWork[TaskTable[id].work[0]].dx += TaskTable[id].work[5];
			ActWork[TaskTable[id].work[0]].dy += TaskTable[id].work[6];
		}else{
			ActWork[TaskTable[id].work[0]].dx -= TaskTable[id].work[5];
			ActWork[TaskTable[id].work[0]].dy -= TaskTable[id].work[6];
		}

		TaskTable[id].work[3] = TaskTable[id].work[4];
		TaskTable[id].work[1]++;

		if(TaskTable[id].work[1] >= TaskTable[id].work[2])
		{
			if(TaskTable[id].work[1] & 1){
				ActWork[TaskTable[id].work[0]].dx += (TaskTable[id].work[5] / 2);
				ActWork[TaskTable[id].work[0]].dy += (TaskTable[id].work[6] / 2);
			}else{
				ActWork[TaskTable[id].work[0]].dx -= (TaskTable[id].work[5] / 2);
				ActWork[TaskTable[id].work[0]].dy -= (TaskTable[id].work[6] / 2);
			}
			DelTaskEffect(id);
		}
	}
	else
		TaskTable[id].work[3]--;
}

//=========================================================================
//	横揺れでぶるぶるさせながら、下にさげていく
//=========================================================================
//-------------------------------------------------------------
// offset 0:0=攻撃側  1=防御側	  1:X振り幅  2:wait
//		　3:下に下げる速度(固定少数)	4:SyncNum
//-------------------------------------------------------------
void TaskPokeBuruDown(u8 id)
{
	u8 poke;
	
	poke = W_GetPokeActNo(WazaEffWork[0]);
	ActWork[poke].dx = WazaEffWork[1];
	TaskTable[id].work[0] = poke;
	TaskTable[id].work[1] = WazaEffWork[1];
	TaskTable[id].work[2] = WazaEffWork[2];	//wait
	TaskTable[id].work[3] = WazaEffWork[3];
	TaskTable[id].work[4] = WazaEffWork[4];	//sync
	TaskTable[id].TaskAdrs = TaskPokeBuruDownMain;
	TaskTable[id].TaskAdrs(id);
}
static void TaskPokeBuruDownMain(u8 id)
{
	u8 poke;
	s16 offset;
	
	poke = TaskTable[id].work[0];
	offset = TaskTable[id].work[1];
	if(TaskTable[id].work[2] == TaskTable[id].work[8]++)
	{
		TaskTable[id].work[8] = 0;

		if(ActWork[poke].dx == offset)
			offset = -offset;	//移動方向反転
		ActWork[poke].dx += offset;
	}
	TaskTable[id].work[1] = offset;

	TaskTable[id].work[9] += TaskTable[id].work[3];
	ActWork[poke].dy = TaskTable[id].work[9] >> 8;
	
	if(--TaskTable[id].work[4] == 0)
		DelTaskEffect(id);
}


//=========================================================================
//	円を描く動き
//=========================================================================
//-------------------------------------------------------------
// offset 0:0=攻撃側  1=防御側
//		  1:X振り幅  2:Y振り幅   3:回数  4:速度(遅:0〜5:速)
//-------------------------------------------------------------
void TaskPokeKurukuru(u8 id)
{
	u8 poke;
	u8 speed = 1;
	u8 i;
	
	poke = W_GetPokeActNo(WazaEffWork[0]);
	
	if(WazaEffWork[4] > 5)
		WazaEffWork[4] = 5;
	for(i = 0; i < WazaEffWork[4]; i++)
		speed *= 2;
	
	TaskTable[id].work[0] = poke;
	TaskTable[id].work[1] = WazaEffWork[1];
	TaskTable[id].work[2] = WazaEffWork[2];
	TaskTable[id].work[3] = WazaEffWork[3];
	TaskTable[id].work[4] = speed;
	TaskTable[id].TaskAdrs = TaskPokeKurukuruMain;
	TaskTable[id].TaskAdrs(id);
}

static void TaskPokeKurukuruMain(u8 id)
{
	u8 poke;

	poke = TaskTable[id].work[0];

	ActWork[poke].dx = SinMove(TaskTable[id].work[5], TaskTable[id].work[1]);
	ActWork[poke].dy = -CosMove(TaskTable[id].work[5], TaskTable[id].work[2]);
	ActWork[poke].dy += TaskTable[id].work[2];
	TaskTable[id].work[5] = 0xff & (TaskTable[id].work[5] + TaskTable[id].work[4]);
	if(TaskTable[id].work[5] == 0)
		TaskTable[id].work[3]--;
	if(TaskTable[id].work[3] == 0)
	{
		ActWork[poke].dx = 0;
		ActWork[poke].dy = 0;
		DelTaskEffect(id);
	}
}

//=========================================================================
//	円を描く動き2  攻撃側と防御側でX振り幅の反転を行う
//=========================================================================
//-------------------------------------------------------------
// offset 0:0=攻撃側  1=防御側
//		  1:X振り幅  2:Y振り幅   3:回数  4:速度(遅:0〜5:速)
//-------------------------------------------------------------
void TaskPokeKurukuruFlip(u8 id)
{
	if(MineEnemyCheck(AttackNo))
		WazaEffWork[1] = -WazaEffWork[1];
	TaskPokeKurukuru(id);
}



/*---------
//=========================================================================
//	跳ねまくる
//=========================================================================
//-------------------------------------------------------------
// offset 0:0=攻撃側  1=防御側
//		  1:X振り幅  2:Y振り幅   3:回数  4:速度(遅:0〜5:速)
//-------------------------------------------------------------
void TaskPokeKurukuru(u8 id)
{
	u8 poke;
	u8 speed = 1;
	u8 i;
	
	poke = W_GetPokeActNo(WazaEffWork[0]);
	
	if(WazaEffWork[4] > 5)
		WazaEffWork[4] = 5;
	for(i = 0; i < WazaEffWork[4]; i++)
		speed *= 2;
	
	TaskTable[id].work[0] = poke;
	TaskTable[id].work[1] = WazaEffWork[1];
	TaskTable[id].work[2] = WazaEffWork[2];
	TaskTable[id].work[3] = WazaEffWork[3];
	TaskTable[id].work[4] = speed;
	TaskTable[id].TaskAdrs = TaskPokeKurukuruMain;
	TaskTable[id].TaskAdrs(id);
}

static void TaskPokeKurukuruMain(u8 id)
{
	u8 poke;
	
	poke = TaskTable[id].work[0];
	
	ActWork[poke].dx = SinMove(TaskTable[id].work[5], TaskTable[id].work[1]);
	ActWork[poke].dy = -CosMove(TaskTable[id].work[5], TaskTable[id].work[2]);
	ActWork[poke].dy += TaskTable[id].work[2];
	TaskTable[id].work[5] = 0xff & (TaskTable[id].work[5] + TaskTable[id].work[4]);
	if(TaskTable[id].work[5] == 0)
		TaskTable[id].work[3]--;
	if(TaskTable[id].work[3] == 0)
	{
		ActWork[poke].dx = 0;
		ActWork[poke].dy = 0;
		DelTaskEffect(id);
	}
}
----------------*/






//-------------------------------------------------------------
//		アクターシーケンス
//-------------------------------------------------------------

//-------------------------------------------------------------
// offset 0:ﾙｰﾌﾟ回数  1:移動速度
//-------------------------------------------------------------
void SeqWazaTaiatariInit(actWork *Xreg)
{
	Xreg->banish = 1;
	
	if(MineEnemyCheck(AttackNo))
		Xreg->work[1] = -WazaEffWork[1];
	else
		Xreg->work[1] = WazaEffWork[1];
	
	Xreg->work[0] = WazaEffWork[0];
	Xreg->work[2] = 0;
	Xreg->work[3] = PokemonStruct[AttackNo];
	Xreg->work[4] = WazaEffWork[0];	//BackUp
	SetWorkSeq(Xreg, SeqWazaTaiatariReturn);
	Xreg->move = W_PokeParallelMoveSeq;
}

//----------------------------------------------------------
//	
//----------------------------------------------------------
void SeqWazaTaiatariReturn(actWork *Xreg)
{
	Xreg->work[0] = Xreg->work[4];
	Xreg->work[1] = -Xreg->work[1];
	Xreg->move = W_PokeParallelMoveSeq;
	SetWorkSeq(Xreg, DelWazaEffect);
}


//=========================================================================
//	はねる
//=========================================================================

//-------------------------------------------------------------
// offset 0:ﾙｰﾌﾟ回数  1:移動速度	2: 0=攻撃側 1=防御側
//-------------------------------------------------------------
void SeqWazaHaneruInit(actWork *Xreg)
{
	u8 SelectStruct;
	
	Xreg->banish = 1;

	SelectStruct = W_GetPokeActNo(WazaEffWork[2]);
	
	Xreg->work[0] = WazaEffWork[0];
	Xreg->work[1] = 0;
	Xreg->work[2] = WazaEffWork[1];
	Xreg->work[3] = SelectStruct;
	Xreg->work[4] = WazaEffWork[0];	//BackUp
	SetWorkSeq(Xreg, SeqWazaHaneruReturn);
	Xreg->move = W_PokeParallelMoveSeq;
}

//----------------------------------------------------------
//	
//----------------------------------------------------------
void SeqWazaHaneruReturn(actWork *Xreg)
{
	Xreg->work[0] = Xreg->work[4];
	Xreg->work[2] = -Xreg->work[2];
	Xreg->move = W_PokeParallelMoveSeq;
	SetWorkSeq(Xreg, DelWazaEffect);
}


//=========================================================================
//	ﾎﾟｹﾓﾝを定位置に戻す
// offset 0: 0=攻撃側   1=防御側
//	      1:対象(0=X&Y 1=X 2=Y)		
//        2:Xに対して何Syncのﾙｰﾌﾟで元に戻すか
//=========================================================================
static void SeqWazaPokeDefaultMove(actWork *Xreg)
{
	u8 actno;
	
	if(WazaEffWork[0] == 0)
		actno = PokemonStruct[AttackNo];
	else
		actno = PokemonStruct[DefenceNo];
	
	Xreg->work[0] = WazaEffWork[2];
	Xreg->work[1] = ActWork[actno].x + ActWork[actno].dx;
	Xreg->work[2] = ActWork[actno].x;
	Xreg->work[3] = ActWork[actno].y + ActWork[actno].dy;
	Xreg->work[4] = ActWork[actno].y;
	W_GetStraightMoveLoop(Xreg);
	Xreg->work[3] = 0;
	Xreg->work[4] = 0;
	Xreg->work[5] = ActWork[actno].dx;
	Xreg->work[6] = ActWork[actno].dy;
	Xreg->banish = 1;
	
	if(WazaEffWork[1] == 1)
		Xreg->work[2] = 0;
	else if(WazaEffWork[1] == 2)
		Xreg->work[1] = 0;
	
	Xreg->work[7] = WazaEffWork[1];
	Xreg->work[7] |= actno << 8;
	Xreg->move = SeqWazaPokeDefaultMain;
}

static void SeqWazaPokeDefaultMain(actWork *Xreg)
{
	actWork *PokeSt;
	u8 xy_flg;
	
	xy_flg = Xreg->work[7] & 0xff;
	PokeSt = &ActWork[Xreg->work[7] >> 8];
	
	if(Xreg->work[0] == 0)
	{
		if(xy_flg == 1 || xy_flg == 0)
			PokeSt->dx = 0;		//一応
		if(xy_flg == 2 || xy_flg == 0)
			PokeSt->dy = 0;
		DelWazaEffect(Xreg);
		return;
	}
	
	Xreg->work[0]--;
	Xreg->work[3] += Xreg->work[1];
	Xreg->work[4] += Xreg->work[2];
	PokeSt->dx = Xreg->work[5] + (Xreg->work[3] >> 8);
	PokeSt->dy = Xreg->work[6] + (Xreg->work[4] >> 8);
}


//=========================================================================
//	ﾎﾟｹﾓﾝ直線移動
// offset 0: 0=攻撃側   1=防御側
//	      1:X方向へ進むｵﾌｾｯﾄ値
//		  2:Y方向へ進むｵﾌｾｯﾄ値
//		  3:Y方向へのｵﾌｾｯﾄを敵、味方で反転させるか(0:反転しない 1:反転する)
//        4:何syncで到達させるか
//=========================================================================
static void SeqWazaPokeStraightMove(actWork *Xreg)
{
	u8 actno;
	u8 client;
	
	if(WazaEffWork[0] == 0)
		client = AttackNo;
	else
		client = DefenceNo;
	actno = PokemonStruct[client];
	if(MineEnemyCheck(client))
	{
		WazaEffWork[1] = -WazaEffWork[1];
		if(WazaEffWork[3] == 1)
			WazaEffWork[2] = -WazaEffWork[2];
	}
	
	Xreg->work[0] = WazaEffWork[4];
	Xreg->work[1] = ActWork[actno].x;
	Xreg->work[2] = ActWork[actno].x + WazaEffWork[1];
	Xreg->work[3] = ActWork[actno].y;
	Xreg->work[4] = ActWork[actno].y + WazaEffWork[2];
	W_GetStraightMoveLoop(Xreg);
	Xreg->work[3] = 0;
	Xreg->work[4] = 0;
	Xreg->work[5] = actno;
	Xreg->banish = 1;
	SetWorkSeq(Xreg, DelWazaEffect);
	Xreg->move = W_PokeParallelMoveSeq2;
}
//=========================================================================
//	ﾎﾟｹﾓﾝ直線移動（開始時に座標をゼロクリアせず、その場から動く）
// offset 0: 0=攻撃側   1=防御側
//	      1:X方向へ進むｵﾌｾｯﾄ値
//		  2:Y方向へ進むｵﾌｾｯﾄ値
//		  3:Y方向へのｵﾌｾｯﾄを敵、味方で反転させるか(0:反転しない 1:反転する)
//        4:何syncで到達させるか
//        5:移動終了時に dx, dy 値をゼロに戻すか（0:戻さない 1:戻す）
//=========================================================================
static void SeqWazaPokeStraightMove2Wait(actWork *Xreg);
static void SeqWazaPokeStraightMove2(actWork *Xreg)
{
	u8 actno;
	u8 client;

	Xreg->banish = 1;
	client = (WazaEffWork[0] == 0)? AttackNo : DefenceNo;
	actno = PokemonStruct[client];

	if(MineEnemyCheck(client))
	{
		WazaEffWork[1] = -WazaEffWork[1];
		if(WazaEffWork[3] == 1)
			WazaEffWork[2] = -WazaEffWork[2];
	}

	Xreg->work[0] = WazaEffWork[4];
	Xreg->work[1] = ActWork[actno].x + ActWork[actno].dx;
	Xreg->work[2] = Xreg->work[1] + WazaEffWork[1];
	Xreg->work[3] = ActWork[actno].y + ActWork[actno].dy;
	Xreg->work[4] = Xreg->work[3] + WazaEffWork[2];
	W_GetStraightMoveLoop(Xreg);
	Xreg->work[3] = (ActWork[actno].dx << 8);
	Xreg->work[4] = (ActWork[actno].dy << 8);
	Xreg->work[5] = actno;
	Xreg->work[6] = WazaEffWork[5];

	if(WazaEffWork[5] == 0){
		SetWorkSeq(Xreg, DelWazaEffect);
	}else{
		SetWorkSeq(Xreg, SeqWazaPokeStraightMove2Wait);
	}
	Xreg->move = W_PokeParallelMoveSeq2;
}
static void SeqWazaPokeStraightMove2Wait(actWork *Xreg)
{
	ActWork[Xreg->work[5]].dx = 0;
	ActWork[Xreg->work[5]].dy = 0;
	DelWazaEffect(Xreg);
}



//=========================================================================
//	一度後ろにゆっくりと下がって前に突進する
//	0: 0=攻撃側		1=防御側
//	1:X方向への後退Xoffset				2:Y方向へのSin振り幅
//	3:何syncで後退させるか				4:後退させた後のｳｪｲﾄ
//	5:X方向へ前進させるXoffset			6:前進させるSync回数
//=========================================================================
void PokeSinBackInit(u8 id)
{
	u16 back_sec;
	
	back_sec = (128 << 8) / WazaEffWork[3];
	if(MineEnemyCheck(AttackNo))
	{
		WazaEffWork[1] = -WazaEffWork[1];
		WazaEffWork[5] = -WazaEffWork[5];
	}
	
	TaskTable[id].work[0] = W_GetPokeActNo(WazaEffWork[0]);
	TaskTable[id].work[1] = (WazaEffWork[1] << 8) / WazaEffWork[3];
	TaskTable[id].work[2] = WazaEffWork[2];
	TaskTable[id].work[3] = WazaEffWork[3];
	TaskTable[id].work[4] = WazaEffWork[4];
	TaskTable[id].work[5] = (WazaEffWork[5] << 8) / WazaEffWork[6];
	TaskTable[id].work[6] = WazaEffWork[6];
	TaskTable[id].work[7] = back_sec;
	TaskTable[id].TaskAdrs = PokeSinBackMain;
}

static void PokeSinBackMain(u8 id)
{
	u8 pokeact;

	pokeact = TaskTable[id].work[0];
	
	TaskTable[id].work[11] += TaskTable[id].work[1];
	ActWork[pokeact].dx = TaskTable[id].work[11] >> 8;
	ActWork[pokeact].dy = SinMove((u16)TaskTable[id].work[10] >> 8, TaskTable[id].work[2]);
	(u16)TaskTable[id].work[10] += (u16)TaskTable[id].work[7];
	if(--TaskTable[id].work[3] == 0)
		TaskTable[id].TaskAdrs = PokeSinBackWait;
}

static void PokeSinBackWait(u8 id)
{
	u8 pokeact;
	
	if(TaskTable[id].work[4] > 0)
	{
		TaskTable[id].work[4]--;
		return;
	}
	
	pokeact = TaskTable[id].work[0];
	TaskTable[id].work[12] += TaskTable[id].work[5];
	ActWork[pokeact].dx = (TaskTable[id].work[12] >> 8) + (TaskTable[id].work[11]>>8);
	if(--TaskTable[id].work[6] == 0)
		DelTaskEffect(id);
}

//=========================================================================
//
//		ﾎﾟｹﾓﾝを画面外に移動させる
//												by matsuda 2002.02.19(火)
//=========================================================================
static void PokeNigeruMoveMain(u8 id);
//----------------------------------------------------------
//	0: 0=攻撃側		1=防御側	2=攻撃側相方	3=防御側相方
//	1: Dx移動速度
//----------------------------------------------------------
void PokeNigeruMoveTask(u8 id)
{
	u8 pokeact;
	
	switch(WazaEffWork[0]){
		case 0:
		case 1:
			pokeact = W_GetPokeActNo(WazaEffWork[0]);
			break;
		case 2:
			if(PokeBG2taimeCheck(AttackNo^2) == 0){
				DelTaskEffect(id);
				return;
			}
			pokeact = PokemonStruct[AttackNo^2];
			break;
		case 3:
			if(PokeBG2taimeCheck(DefenceNo^2) == 0){
				DelTaskEffect(id);
				return;
			}
			pokeact = PokemonStruct[DefenceNo^2];
			break;
		default:
			DelTaskEffect(id);
			return;
	}
	TaskTable[id].work[0] = pokeact;
	if(MineEnemyCheck(DefenceNo))
		TaskTable[id].work[1] = WazaEffWork[1];
	else
		TaskTable[id].work[1] = -WazaEffWork[1];
	TaskTable[id].TaskAdrs = PokeNigeruMoveMain;
}

static void PokeNigeruMoveMain(u8 id)
{
	u8 pokeact;
	
	pokeact = TaskTable[id].work[0];
	ActWork[pokeact].dx += TaskTable[id].work[1];
	if(ActWork[pokeact].dx + ActWork[pokeact].x > 240+32
			|| ActWork[pokeact].dx + ActWork[pokeact].x < -32)
		DelTaskEffect(id);
}





//=========================================================================
//
//		ﾎﾟｹﾓﾝをSinｶｰﾌﾞで揺れさせる
//												by matsuda 2002.02.21(木)
//=========================================================================
static void PokeSinMoveMain(u8 id);
//----------------------------------------------------------
//	0:X,Yどちらに対して処理を行うか(0=X  1=Y)
//	1:振り幅	2:秒速度(固定少数)	3:繰り返し回数
//	4:どのﾎﾟｹﾓﾝに対して行うか(0=攻撃側	1=防御側)
//----------------------------------------------------------
void PokeSinMove(u8 id)
{
	u8 pokeact;
	
	if(MineEnemyCheck(AttackNo))
		WazaEffWork[1] = -WazaEffWork[1];
	
	pokeact = W_GetPokeActNo(WazaEffWork[4]);
	TaskTable[id].work[0] = WazaEffWork[0];
	TaskTable[id].work[1] = WazaEffWork[1];
	TaskTable[id].work[2] = WazaEffWork[2];
	TaskTable[id].work[3] = WazaEffWork[3];
	TaskTable[id].work[4] = pokeact;
	if(WazaEffWork[4] == 0)
		TaskTable[id].work[5] = AttackNo;
	else
		TaskTable[id].work[5] = DefenceNo;
	TaskTable[id].work[12] = 1;	//終了条件判定式で使用するﾌﾗｸﾞの初期値
	TaskTable[id].TaskAdrs = PokeSinMoveMain;
}

static void PokeSinMoveMain(u8 id)
{
	u8 pokeact;
	u16 sec;
	s16 dxy;
	
	pokeact = TaskTable[id].work[4];
	
	sec = (u16)TaskTable[id].work[10];
	sec += TaskTable[id].work[2];
	TaskTable[id].work[10] = sec;
	sec >>= 8;
	
	dxy = SinMove(sec, TaskTable[id].work[1]);
	if(TaskTable[id].work[0] == 0)
		ActWork[pokeact].dx = dxy;
	else{
		if(MineEnemyCheck(TaskTable[id].work[5]) == 0)
			ActWork[pokeact].dy = abs(dxy);	//絵が切れてる所が見えてしまうので正のみ
		else
			ActWork[pokeact].dy = -abs(dxy);
	}
	
	if((sec > 127 && TaskTable[id].work[11] == 0 && TaskTable[id].work[12] == 1)
		|| (sec < 127 && TaskTable[id].work[11] == 1 && TaskTable[id].work[12] == 0))
	{
		TaskTable[id].work[11] ^= 1;	//中心に戻ってきたﾌﾗｸﾞ
		TaskTable[id].work[12] ^= 1;
		if(--TaskTable[id].work[3] == 0)
		{
			ActWork[pokeact].dx = 0;
			ActWork[pokeact].dy = 0;
			DelTaskEffect(id);
		}
	}
}






//=========================================================================
//
//		ﾎﾟｹﾓﾝの拡縮を行う
//												by matsuda 2002.02.18(月)
//=========================================================================
static void PokeKakusyukuMain(u8 id);
//----------------------------------------------------------
//	0:一度に足す拡縮X値		1:一度に足す拡縮Y値	
//	2:Sync回数(このSyncに達したら同じSync回数で元の大きさに戻す)
//	3:どちらのﾎﾟｹﾓﾝに出すか(0:攻撃側	1:防御側)
//	4:半透明ﾌﾗｸﾞ(0:OFF	1:ON)
//----------------------------------------------------------
void PokeKakusyukuTask(u8 id)
{
	u8 pokeact;
	
	pokeact = W_GetPokeActNo(WazaEffWork[3]);
	PokeKakusyukuInit(pokeact, WazaEffWork[4]);
	
	TaskTable[id].work[0] = WazaEffWork[0];
	TaskTable[id].work[1] = WazaEffWork[1];
	TaskTable[id].work[2] = WazaEffWork[2];
	TaskTable[id].work[3] = WazaEffWork[2];		//Sync保存
	TaskTable[id].work[4] = pokeact;
	
	TaskTable[id].work[10] = 0x0100;	//ﾃﾞﾌｫﾙﾄX値
	TaskTable[id].work[11] = 0x0100;	//ﾃﾞﾌｫﾙﾄY
	
	TaskTable[id].TaskAdrs = PokeKakusyukuMain;
}

static void PokeKakusyukuMain(u8 id)
{
	u8 pokeact;
	
	TaskTable[id].work[10] += TaskTable[id].work[0];
	TaskTable[id].work[11] += TaskTable[id].work[1];
	pokeact = TaskTable[id].work[4];
	
	PokeKakusyukuSet(pokeact, TaskTable[id].work[10], TaskTable[id].work[11],  0);
	if(--TaskTable[id].work[2] == 0)
	{
		if(TaskTable[id].work[3] > 0)
		{
			TaskTable[id].work[0] = -TaskTable[id].work[0];
			TaskTable[id].work[1] = -TaskTable[id].work[1];
			TaskTable[id].work[2] = TaskTable[id].work[3];
			TaskTable[id].work[3] = 0;
		}
		else
		{
			PokeKakusyukuEnd(pokeact);
			DelTaskEffect(id);
		}
	}
}




//=========================================================================
//
//	その場で傾ける
//												by taya 2002.03.29(月)
//=========================================================================
static void WazaPokeRollTaskMain(u8 id);

//==============================================
//	初期化
//	0: sync数
//
//	1:1syncあたりの角度変化量（小数部8bit）
//	※ + で前、- で後ろに傾ける
//
//	2: どちらのポケモンか（0:攻撃  1:防御）
//
//	3: 動作モード（0,1,2）
//	※ 0 ... 傾けるだけ（再度、モード1で戻す必要あり）
//	   1 ... モード0 で傾けたポケモンを戻すのに使用
//	   2 ... 傾けた後、自動で元に戻す（同sync数、同角度量）
//==============================================
void WazaPokeRollTask(u8 id)
{
	u8 pokeact;

	pokeact = W_GetPokeActNo(WazaEffWork[2]);
	PokeKakusyukuInit(pokeact, 0);

	TaskTable[id].work[1] = 0;
	TaskTable[id].work[2] = WazaEffWork[0];
	if(WazaEffWork[3] != 1){
		TaskTable[id].work[3] = 0;
	}else{
		TaskTable[id].work[3] = WazaEffWork[0] * WazaEffWork[1];
	}
	TaskTable[id].work[4] = WazaEffWork[1];
	TaskTable[id].work[5] = pokeact;
	TaskTable[id].work[6] = WazaEffWork[3];

	// 自分のポケモンを傾けるのか判定
	if(ContestCheck()){		//ｺﾝﾃｽﾄの処理追加 2002.09.04(水) by matsuda
		TaskTable[id].work[7] = 1;
	}else if(WazaEffWork[2] == 0){
		TaskTable[id].work[7] = (MineEnemyCheck(AttackNo) == SIDE_MINE);
	}else{
		TaskTable[id].work[7] = (MineEnemyCheck(DefenceNo) == SIDE_MINE);
	}

	if(TaskTable[id].work[7] && ContestCheck()==0){
		TaskTable[id].work[3] *= -1;
		TaskTable[id].work[4] *= -1;
	}

	TaskTable[id].TaskAdrs = WazaPokeRollTaskMain;
}
//==========================================================
//	きのみエフェクト専用の初期化
//	
//		つねにY座標の補正を行う
//		対象が画面奥の場合、角度を反転させる
//										add_iwasawa_02_08_16
//==========================================================
void KinomiPokeRollTask(u8 id)
{
	u8 pokeact;

	pokeact = W_GetPokeActNo(WazaEffWork[2]);
	PokeKakusyukuInit(pokeact, 0);

	TaskTable[id].work[1] = 0;
	TaskTable[id].work[2] = WazaEffWork[0];

	//対象が敵軍のときは、角度を反転させる
	if(WazaEffWork[2] == 0){
		if(MineEnemyCheck(AttackNo)) WazaEffWork[1] = -WazaEffWork[1];
	}
	else{
		if(MineEnemyCheck(DefenceNo)) WazaEffWork[1] = -WazaEffWork[1];
	}
	if(WazaEffWork[3] != 1){
		TaskTable[id].work[3] = 0;
	}else{
		TaskTable[id].work[3] = WazaEffWork[0] * WazaEffWork[1];
	}
	TaskTable[id].work[4] = WazaEffWork[1];
	TaskTable[id].work[5] = pokeact;
	TaskTable[id].work[6] = WazaEffWork[3];

	//Y座標補正(足元の補正)のためのフラグを立てておく
	TaskTable[id].work[7] = 1;

	TaskTable[id].work[3] *= -1;
	TaskTable[id].work[4] *= -1;

	TaskTable[id].TaskAdrs = WazaPokeRollTaskMain;
}
static void WazaPokeRollTaskMain(u8 id)
{
	TaskTable[id].work[3] += TaskTable[id].work[4];
	PokeKakusyukuSet(TaskTable[id].work[5], 0x100, 0x100, TaskTable[id].work[3]);
	if(TaskTable[id].work[7]){
		W_AdjustKaitenYPos(TaskTable[id].work[5]);
	}
	if(++(TaskTable[id].work[1]) >= TaskTable[id].work[2]){
		switch(TaskTable[id].work[6]){
		case 1: PokeKakusyukuEnd(TaskTable[id].work[5]);
		default:
		/* FALL THRU */
		case 0: DelTaskEffect(id);
			break;

		case 2:
			TaskTable[id].work[1] = 0;
			TaskTable[id].work[4] *= -1;
			TaskTable[id].work[6] = 1;
			break;
		}
	}
}

//=========================================================================
//	攻撃側の技威力に応じて防御側をブルブル震わせる
//
//	0:(0:威力(WazaEffPower)ﾓｰﾄﾞ  1:ﾀﾞﾒｰｼﾞ(WazaEffDamage)ﾓｰﾄﾞ)
//	1:wait  2:回数  3:横揺れON  4:縦揺れON
//																	taya
//=========================================================================
#define DAMAGEYURE_MIN  (1)
#define DAMAGEYURE_MAX  (16)

static void TaskPokeDamageYureMain(u8 id);

void TaskPokeDamageYure(u8 id)
{
	// 15:合計振り幅
	if(WazaEffWork[0] == 0){
		TaskTable[id].work[15] = WazaEffPower / 12;
		if(TaskTable[id].work[15] < DAMAGEYURE_MIN){
			TaskTable[id].work[15] = DAMAGEYURE_MIN;
		}
		if(TaskTable[id].work[15] > DAMAGEYURE_MAX){
			TaskTable[id].work[15] = DAMAGEYURE_MAX;
		}
	}else{
		TaskTable[id].work[15] = WazaEffDamage / 12;
		if(TaskTable[id].work[15] < DAMAGEYURE_MIN){
			TaskTable[id].work[15] = DAMAGEYURE_MIN;
		}
		if(TaskTable[id].work[15] > DAMAGEYURE_MAX){
			TaskTable[id].work[15] = DAMAGEYURE_MAX;
		}
	}

	// 13,14:左右振り幅
	TaskTable[id].work[14] = TaskTable[id].work[15] / 2;
	TaskTable[id].work[13] = TaskTable[id].work[14] + (TaskTable[id].work[15] & 1);

	// 12: 左右振れ方向
	TaskTable[id].work[12] = 0;

	// 10,11:揺れ方向フラグ
	TaskTable[id].work[10] = WazaEffWork[3];
	TaskTable[id].work[11] = WazaEffWork[4];

	// 7:ﾎﾟｹﾓﾝｱｸﾀｰﾅﾝﾊﾞｰ  8:dx, 9:dy
	TaskTable[id].work[7] = W_GetPokeActNo(1);
	TaskTable[id].work[8] = ActWork[TaskTable[id].work[7]].dx;
	TaskTable[id].work[9] = ActWork[TaskTable[id].work[7]].dy;

	TaskTable[id].work[0] = 0;
	TaskTable[id].work[1] = WazaEffWork[1];
	TaskTable[id].work[2] = WazaEffWork[2];

	TaskTable[id].TaskAdrs = TaskPokeDamageYureMain;

}

static void TaskPokeDamageYureMain(u8 id)
{
	TASK_TABLE *my = &TaskTable[id];

	if(++(my->work[0]) > my->work[1]){
		my->work[0] = 0;
		my->work[12] = (my->work[12] + 1) & 1;
		if(my->work[10]){
			if(my->work[12]){
				ActWork[my->work[7]].dx = my->work[8] + my->work[13];
			}else{
				ActWork[my->work[7]].dx = my->work[8] - my->work[14];
			}
		}
		if(my->work[11]){
			if(my->work[12]){
				ActWork[my->work[7]].dy = my->work[15];
			}else{
				ActWork[my->work[7]].dy = 0;
			}
		}
		my->work[2]--;
		if(my->work[2] == 0){
			ActWork[my->work[7]].dx = 0;
			ActWork[my->work[7]].dy = 0;
			DelTaskEffect(id);
		}
	}
}

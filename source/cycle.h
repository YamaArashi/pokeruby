//**********************************************************************
//		cycle.h
//**********************************************************************
#ifndef	CYCLE_H
#define CYCLE_H

#undef	EXT
#ifdef	CYCLE_H_PROTO
#define	EXT	/**/
#else
#define	EXT	extern
#endif

enum
{
	CYCLE_S_NORMAL = 0,											// 通常
	CYCLE_S_TURN,												// 振り向き
	CYCLE_S_FTUP,												// ﾌﾛﾝﾄ
	CYCLE_S_DANIEL,												// ﾀﾞﾆｴﾙ
	CYCLE_S_WHEELIE,											// ｳｲﾘｰ
	CYCLE_S_KANI,												// ｶﾆ
	CYCLE_S_JUMP_TURN,											// ｼﾞｬﾝﾌﾟﾀｰﾝ
};

#define HERO_MOVE_SPEED_1	(0x01)								// 自機速度
#define HERO_MOVE_SPEED_2	(0x02)
#define HERO_MOVE_SPEED_3	(0x03)
#define HERO_MOVE_SPEED_4	(0x04)
#define HERO_MOVE_SPEED_MAX HERO_MOVE_SPEED_4

EXT void HeroMoveCycle(u8,u16,u16);								// 自転車動作制御
EXT void CycleCommandSet(u16,u16);								// 自転車ｺﾏﾝﾄﾞｾｯﾄ

EXT void MyCycleWorkInit(u32,u32);								// 自転車ﾜｰｸ初期化
EXT void MyCycleRequest(u8);									// 自転車ﾘｸｴｽﾄ
EXT u8 CheckRideCycle(void);									// 自転車乗車ﾁｪｯｸ
EXT u8 CheckFtDownEnableCycle(void);							// 自転車ﾌﾛﾝﾄﾀﾞｳﾝ可能ﾁｪｯｸ
EXT u8 CycleBatMoveAttrCheck(u8);								// 自転車移動可能ﾁｪｯｸ
EXT s16 GetHeroMoveSpeed(void);									// 自機移動速度取得
EXT void CycleSpeedBrakeSet(u8);								// 自転車速度ｾｯﾄ
EXT void SetHeroCycleStatus(void);								// 自転車ｽﾃｰﾀｽｾｯﾄ

#endif	// CYCLE_H

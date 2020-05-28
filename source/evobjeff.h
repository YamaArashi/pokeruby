//**********************************************************************
//		evobjeff.h
//**********************************************************************
#ifndef EVOBJEFF_H
#define	EVOBJEFF_H

#include "evobj.def"

#undef	EXT
#ifdef 	EVOBJEFF_H_PROTO
#define	EXT	/**/
#else
#define	EXT extern
#endif

enum														// fèİíŞ
{
	EOE_REF_NORMAL,											// gkfèİ
	EOE_REF_ICE,											// ñgkfèİ
};

enum														// Bêª
{
	HIDE_NOTHING = 0,										// Bêª³µ
	HIDE_ON,												// Bêª\¦
	HIDE_OFF,												// Bêªñ\¦
};

enum														// gÎß¹®ì
{
	NAMIPOKE_NOWITH = 0,									// ¯ú³µ
	NAMIPOKE_WITH,											// ¯ú
	NAMIPOKE_NOWITH_SWAY,									// ¯ú³µ&äçäç
};

enum														// gÎß¹µÌ¾¯Ä
{
	NAMIPOKE_VOFFSET_OFF = 0,								// wè³µ
	NAMIPOKE_VOFFSET_ON,									// µÌ¾¯Ä±Ø
};

enum														// gÎß¹ûü
{
	NAMIPOKE_SITE_NOCHG = 0,								// ûüÏX
	NAMIPOKE_SITE_CHG,										// ÏX³µ
};

EXT void EvActReflectSet(EventOBJ*,actWork*,u8);			// fèİ¾¯Ä

EXT u8 EvActExitCursorSet(void);							// oû¶°¿Ù¾¯Ä
EXT void EvActExitCursorOFF(u8);							// ¶°¿Ùñ\¦
EXT void EvActExitCursorON(u8,u8,s16,s16);					// ¶°¿Ù\¦

EXT void FeAshMake(s16,s16,u16,s16);						// D¾¯Ä
EXT void EvActHideClsSet(EventOBJ*);						// BêªÁµ
EXT u8 EvActHideClsChk(EventOBJ*);							// BêªÁµÁª¯¸

EXT void SetPokeSwimMoveFlag(u8,u8);						// gÎß¹®ìÌ×¸Ş¾¯Ä
EXT void SetPokeSwimSiteFlag(u8,u8);						// gÎß¹ûüÌ×¸Ş¾¯Ä
EXT void SetPokeSwimOffsetFlag(u8,u8,s16);					// gÎß¹µÌ¾¯ÄÌ×¸Ş¾¯Ä

EXT u8 EvActDivingSwaySet(u8);								// ÀŞ²ËŞİ¸Şhê±¸À°¾¯Ä

EXT void EvActShadeMove(actWork*);							// e±¸À°®ì
EXT void FeShortGrassShakeMove(actWork*);					// Z¢hê®ì
EXT u8 CheckFeShortGrass(u8,u8,u8,s16,s16);					// Z¢hêÁª¯¸
EXT void FeLongGrassShakeMove(actWork*);					// ·¢hê®ì
EXT void EvActFootPrintMove(actWork*);						// «Õ®ì
EXT void EvActSplashMove(actWork*);							// ò®ì
EXT void EvActAshMove(actWork*);							// D®ì
EXT void EvActPokeSwimMove(actWork*);						// gæèÎß¹Óİ®ì
EXT void EvActDeepSandMove(actWork*);						// [¢»®ì
EXT void EvActSmallGrassMove(actWork*);						// ¬³¢®ì
EXT void EvActOnsenMove(actWork*);							// ·ò®ì
EXT void EvActTrainerHideMove(actWork*);					// Bêª®ì
EXT void EvActAwaMove(actWork*);							// A®ì
EXT void EvActKirariMove(actWork*);							// ¯·×Ø®ì

EXT void EvActCommonMove0(actWork*);						// ¤Ê®ì0
EXT void EvActCommonMove1(actWork*);						// ¤Ê®ì1

#undef EXT
#endif // EVOBJEFF_H

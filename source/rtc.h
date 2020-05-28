#ifndef __RTC_H__
#define __RTC_H__

//=========================================================================
//	
//	ゲーム内時間のための定義
//
//
//=========================================================================

//=========================================================================
//	定義
//=========================================================================
//#define name value

//typedef ...

typedef struct {
	s16 day;
	s8 hour;
	s8 min;
	s8 sec;
}GAME_TIME;

#undef GLOBAL
#endif	/*__RTC_H__*/


/***************************************************************


	librtc.h
						for librtc.a[ver.001]
						last modified 2002.01.30
****************************************************************/
#ifndef	__AGB_SII_RTC_H_
#define	__AGB_SII_RTC_H_

#include <AgbTypes.h>



/********************************************
 * ステータスレジスタ・フラグ
 ********************************************/
#define	RTC_POWER_FLAG		0x80
#define	RTC_BKUP_FLAG		0x40
#define	RTC_FLAGS			0xC0

#define	RTC_INTMOD_MASK	0x07	//割り込みモードマスク


/********************************************
 * RTCデータ構造体
 ********************************************/
typedef struct {
	u8	year;
	u8	month;
	u8	day;
	u8	week;
	u8	hour;
	u8	minute;
	u8	second;
	u8	stat;
	u8	alarm_hour;
	u8	alarm_minute;
} RtcDataOrg;



/*************************************
 * RTCとのI/O制御
 *************************************/
void RtcIoEnable( void);
void RtcIoDisable( void);

/******************************************************
 * RTC電源投入時またはテストモードを検出しリセットする
 *（RTCがバックアップされていない場合はリセットする）
 ******************************************************/
u8 RtcPowerOnCheck( void);

/*************************************
 * リセットコマンド書き込み
 *************************************/
u8 RtcReset( void);

/*************************************
 * ステータスレジスタを読み出す
 *************************************/
u8 RtcReadStat( RtcDataOrg* rtc_dat_org);

/*************************************
 * ステータスレジスタにデータセット
 *************************************/
u8 RtcWriteStat( RtcDataOrg* rtc_dat_org);

/*************************************
 * 年〜秒データ読み出し
 *************************************/
u8 RtcReadDate( RtcDataOrg* rtc_dat_org);

/*************************************
 * 年〜秒データ書き込み
 *************************************/
u8 RtcWriteDate( RtcDataOrg* rtc_dat_org);

/*************************************
 * 時〜秒データ読み出し
 *************************************/
u8 RtcReadTime( RtcDataOrg* rtc_dat_org);

/*************************************
 * 時〜秒データ書き込み
 *************************************/
u8 RtcWriteTime( RtcDataOrg* rtc_dat_org);

/*************************************
 * アラームデータ書き込み
 *************************************/
u8 RtcWriteAlarm( RtcDataOrg* rtc_dat_org);



#endif	/*__AGB_SII_RTC_H_*/

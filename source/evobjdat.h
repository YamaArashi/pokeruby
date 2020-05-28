//**********************************************************************
//	evobjdat.h
//**********************************************************************
#ifndef	EVOBJDAT_H
#define	EVOBJDAT_H

#include	"evobj.def"
#include	"evobjdat.def"

#undef	EXT
#ifdef	EVOBJDAT_H_PROTO
#define	EXT	/**/
#else
#define	EXT	extern
#endif

EXT	void (* const EvObjMoveTbl[])(actWork*);					// 動作ﾃｰﾌﾞﾙ
EXT const u8 EvObjMoveLimitFlagTbl[];							// 移動制限ﾃｰﾌﾞﾙ
EXT const u8 EvObjDefaultSiteTbl[];								// 基本方向ﾃｰﾌﾞﾙ
EXT	const SXYObjHead * const SxyObjHeadTbl[];					// OBJ ﾍｯﾀﾞﾃｰﾌﾞﾙ
EXT const actHeader * const EvActHeadTbl[];						// ｱｸﾀﾍｯﾀﾞ
EXT	const PalData EvObjPalTbl[];								// ﾊﾟﾚｯﾄﾃｰﾌﾞﾙ
EXT const STDATA EvObjHeroPalStTbl[];							// 主人公ﾊﾟﾚｯﾄﾃﾞｰﾀﾃｰﾌﾞﾙ
EXT const STDATA EvObjSpPalStTbl[];								// 特殊ﾊﾟﾚｯﾄｽﾃｰﾀｽﾃｰﾌﾞﾙ
EXT const u16 * const EvObjStayPalTbl[];						// 常駐ﾊﾟﾚｯﾄﾃｰﾌﾞﾙ
EXT const actAnmData * const SeedCellTransTbl[];				// 種ｾﾙ
EXT const u8 * const SeedPalNoTbl[];							// 種ﾊﾟﾚｯﾄ
EXT const u8 * const SeedObjCodeTbl[];							// 種OBJｺｰﾄﾞ

#define EvObjDefaultSite(code)	(EvObjDefaultSiteTbl[code])		// 基本方向
#define	SxyObjHeadAdrs(c) ((SXYObjHead*)SxyObjHeadTbl[c])		// SXY OBJ ｽﾃｰﾀｽｱﾄﾞﾚｽ
#define	EvActHeadGet(c) ((actHeader*)EvActHeadTbl[c])			// ｱｸﾀﾍｯﾀﾞﾃｰﾌﾞﾙｱﾄﾞﾚｽ取得
#define SeedCellTransGet(s) (SeedCellTransTbl[s])				// 種ｷｬﾗｾﾙ取得
#define SeedPalNoGet(s,g) (SeedPalNoTbl[s][g])					// 種ﾊﾟﾚｯﾄ取得
#define SeedObjCodeGet(s,g) (SeedObjCodeTbl[s][g])				// 種OBJｺｰﾄﾞ

#undef	EXT
#endif	// EVOBJDAT_H

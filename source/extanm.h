
#ifndef __EXTANM_H__
#define __EXTANM_H__


//----------------------------------------------------------
//	構造体宣言
//----------------------------------------------------------
typedef struct{
	ActOamData *oamData;			//AddするｱｸﾀｰのOamﾃﾞｰﾀ
	u8 *DataAdrs;					//転送するﾃﾞｰﾀの先頭ｱﾄﾞﾚｽ
	const actAnm * const *anm_tbl;	// ｱﾆﾒﾃｰﾌﾞﾙ
	const actAffAnm * const *aff_tbl;	// 拡縮ﾊﾟｯﾄ
	void (*move)(struct actWork_tag *);
	u16 pal_id;
}ExtActHeader;


//----------------------------------------------------------
//	外部関数宣言
//----------------------------------------------------------
extern u8 ExtAnm(actWork *Xreg);
extern u8 ExtAddActor(ExtActHeader *eah, s16 x, s16 y, u8 pri);
extern void ExtDelActor(actWork *Xreg);
extern void ExtAnmChg(actWork *xreg, u8 anmNo);


#endif

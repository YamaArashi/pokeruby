#ifndef	__BRAILLE_H__
#define	__BRAILLE_H__

//==========================================================
//
//		点字フォント用定義
//
//==========================================================
//	点字用フォントの種類
#define	TENJI0000_		0x00
#define	TENJI1000_		0x01
#define	TENJI0100_		0x02
#define	TENJI1100_		0x03
#define	TENJI0010_		0x04
#define	TENJI1010_		0x05
#define	TENJI0110_		0x06
#define	TENJI1110_		0x07
#define	TENJI0001_		0x08
#define	TENJI1001_		0x09
#define	TENJI0101_		0x0a
#define	TENJI1101_		0x0b
#define	TENJI0011_		0x0c
#define	TENJI1011_		0x0d
#define	TENJI0111_		0x0e
#define	TENJI1111_		0x0f

#define	LT_TENJI0000_		(0x00)
#define	LT_TENJI1000_		(0x01)
#define	LT_TENJI0100_		(0x02)
#define	LT_TENJI1100_		(0x03)
#define	LT_TENJI0010_		(0x04)
#define	LT_TENJI1010_		(0x05)
#define	LT_TENJI0110_		(0x06)
#define	LT_TENJI1110_		(0x07)
#define	LT_TENJI0001_		(0x08)
#define	LT_TENJI1001_		(0x09)
#define	LT_TENJI0101_		(0x0a)
#define	LT_TENJI1101_		(0x0b)
#define	LT_TENJI0011_		(0x0c)
#define	LT_TENJI1011_		(0x0d)
#define	LT_TENJI0111_		(0x0e)
#define	LT_TENJI1111_		(0x0f)

#define	LB_TENJI0000_		(0x10)
#define	LB_TENJI1000_		(0x11)
#define	LB_TENJI0100_		(0x12)
#define	LB_TENJI1100_		(0x13)
#define	LB_TENJI0010_		(0x14)
#define	LB_TENJI1010_		(0x15)
#define	LB_TENJI0110_		(0x16)
#define	LB_TENJI1110_		(0x17)
#define	LB_TENJI0001_		(0x18)
#define	LB_TENJI1001_		(0x19)
#define	LB_TENJI0101_		(0x1a)
#define	LB_TENJI1101_		(0x1b)
#define	LB_TENJI0011_		(0x1c)
#define	LB_TENJI1011_		(0x1d)
#define	LB_TENJI0111_		(0x1e)
#define	LB_TENJI1111_		(0x1f)

#define	RT_TENJI00_		(0x20)
#define	RT_TENJI10_		(0x21)
#define	RT_TENJI01_		(0x22)
#define	RT_TENJI11_		(0x23)

#define	RB_TENJI00_		(0x24)
#define	RB_TENJI10_		(0x25)
#define	RB_TENJI01_		(0x26)
#define	RB_TENJI11_		(0x27)

//	点字用文字コード
#define TENJI000000		0x00
#define TENJI100000		0x01
#define TENJI010000		0x02
#define TENJI110000		0x03
#define TENJI001000		0x04
#define TENJI101000		0x05
#define TENJI011000		0x06
#define TENJI111000		0x07
#define TENJI000100		0x08
#define TENJI100100		0x09
#define TENJI010100		0x0a
#define TENJI110100		0x0b
#define TENJI001100		0x0c
#define TENJI101100		0x0d
#define TENJI011100		0x0e
#define TENJI111100		0x0f
#define TENJI000010		0x10
#define TENJI100010		0x11
#define TENJI010010		0x12
#define TENJI110010		0x13
#define TENJI001010		0x14
#define TENJI101010		0x15
#define TENJI011010		0x16
#define TENJI111010		0x17
#define TENJI000110		0x18
#define TENJI100110		0x19
#define TENJI010110		0x1a
#define TENJI110110		0x1b
#define TENJI001110		0x1c
#define TENJI101110		0x1d
#define TENJI011110		0x1e
#define TENJI111110		0x1f
#define TENJI000001		0x20
#define TENJI100001		0x21
#define TENJI010001		0x22
#define TENJI110001		0x23
#define TENJI001001		0x24
#define TENJI101001		0x25
#define TENJI011001		0x26
#define TENJI111001		0x27
#define TENJI000101		0x28
#define TENJI100101		0x29
#define TENJI010101		0x2a
#define TENJI110101		0x2b
#define TENJI001101		0x2c
#define TENJI101101		0x2d
#define TENJI011101		0x2e
#define TENJI111101		0x2f
#define TENJI000011		0x30
#define TENJI100011		0x31
#define TENJI010011		0x32
#define TENJI110011		0x33
#define TENJI001011		0x34
#define TENJI101011		0x35
#define TENJI011011		0x36
#define TENJI111011		0x37
#define TENJI000111		0x38
#define TENJI100111		0x39
#define TENJI010111		0x3a
#define TENJI110111		0x3b
#define TENJI001111		0x3c
#define TENJI101111		0x3d
#define TENJI011111		0x3e
#define TENJI111111		0x3f

#define L_TENJI000000		0x00
#define L_TENJI100000		0x01
#define L_TENJI010000		0x02
#define L_TENJI110000		0x03
#define L_TENJI001000		0x04
#define L_TENJI101000		0x05
#define L_TENJI011000		0x06
#define L_TENJI111000		0x07
#define L_TENJI000100		0x08
#define L_TENJI100100		0x09
#define L_TENJI010100		0x0a
#define L_TENJI110100		0x0b
#define L_TENJI001100		0x0c
#define L_TENJI101100		0x0d
#define L_TENJI011100		0x0e
#define L_TENJI111100		0x0f
#define L_TENJI000010		0x10
#define L_TENJI100010		0x11
#define L_TENJI010010		0x12
#define L_TENJI110010		0x13
#define L_TENJI001010		0x14
#define L_TENJI101010		0x15
#define L_TENJI011010		0x16
#define L_TENJI111010		0x17
#define L_TENJI000110		0x18
#define L_TENJI100110		0x19
#define L_TENJI010110		0x1a
#define L_TENJI110110		0x1b
#define L_TENJI001110		0x1c
#define L_TENJI101110		0x1d
#define L_TENJI011110		0x1e
#define L_TENJI111110		0x1f
#define L_TENJI000001		0x20
#define L_TENJI100001		0x21
#define L_TENJI010001		0x22
#define L_TENJI110001		0x23
#define L_TENJI001001		0x24
#define L_TENJI101001		0x25
#define L_TENJI011001		0x26
#define L_TENJI111001		0x27
#define L_TENJI000101		0x28
#define L_TENJI100101		0x29
#define L_TENJI010101		0x2a
#define L_TENJI110101		0x2b
#define L_TENJI001101		0x2c
#define L_TENJI101101		0x2d
#define L_TENJI011101		0x2e
#define L_TENJI111101		0x2f
#define L_TENJI000011		0x30
#define L_TENJI100011		0x31
#define L_TENJI010011		0x32
#define L_TENJI110011		0x33
#define L_TENJI001011		0x34
#define L_TENJI101011		0x35
#define L_TENJI011011		0x36
#define L_TENJI111011		0x37
#define L_TENJI000111		0x38
#define L_TENJI100111		0x39
#define L_TENJI010111		0x3a
#define L_TENJI110111		0x3b
#define L_TENJI001111		0x3c
#define L_TENJI101111		0x3d
#define L_TENJI011111		0x3e
#define L_TENJI111111		0x3f

#define R_TENJI000000		(0x00+0x40)
#define R_TENJI100000		(0x01+0x40)
#define R_TENJI010000		(0x02+0x40)
#define R_TENJI110000		(0x03+0x40)
#define R_TENJI001000		(0x04+0x40)
#define R_TENJI101000		(0x05+0x40)
#define R_TENJI011000		(0x06+0x40)
#define R_TENJI111000		(0x07+0x40)
#define R_TENJI000100		(0x08+0x40)
#define R_TENJI100100		(0x09+0x40)
#define R_TENJI010100		(0x0a+0x40)
#define R_TENJI110100		(0x0b+0x40)
#define R_TENJI001100		(0x0c+0x40)
#define R_TENJI101100		(0x0d+0x40)
#define R_TENJI011100		(0x0e+0x40)
#define R_TENJI111100		(0x0f+0x40)
#define R_TENJI000010		(0x10+0x40)
#define R_TENJI100010		(0x11+0x40)
#define R_TENJI010010		(0x12+0x40)
#define R_TENJI110010		(0x13+0x40)
#define R_TENJI001010		(0x14+0x40)
#define R_TENJI101010		(0x15+0x40)
#define R_TENJI011010		(0x16+0x40)
#define R_TENJI111010		(0x17+0x40)
#define R_TENJI000110		(0x18+0x40)
#define R_TENJI100110		(0x19+0x40)
#define R_TENJI010110		(0x1a+0x40)
#define R_TENJI110110		(0x1b+0x40)
#define R_TENJI001110		(0x1c+0x40)
#define R_TENJI101110		(0x1d+0x40)
#define R_TENJI011110		(0x1e+0x40)
#define R_TENJI111110		(0x1f+0x40)
#define R_TENJI000001		(0x20+0x40)
#define R_TENJI100001		(0x21+0x40)
#define R_TENJI010001		(0x22+0x40)
#define R_TENJI110001		(0x23+0x40)
#define R_TENJI001001		(0x24+0x40)
#define R_TENJI101001		(0x25+0x40)
#define R_TENJI011001		(0x26+0x40)
#define R_TENJI111001		(0x27+0x40)
#define R_TENJI000101		(0x28+0x40)
#define R_TENJI100101		(0x29+0x40)
#define R_TENJI010101		(0x2a+0x40)
#define R_TENJI110101		(0x2b+0x40)
#define R_TENJI001101		(0x2c+0x40)
#define R_TENJI101101		(0x2d+0x40)
#define R_TENJI011101		(0x2e+0x40)
#define R_TENJI111101		(0x2f+0x40)
#define R_TENJI000011		(0x30+0x40)
#define R_TENJI100011		(0x31+0x40)
#define R_TENJI010011		(0x32+0x40)
#define R_TENJI110011		(0x33+0x40)
#define R_TENJI001011		(0x34+0x40)
#define R_TENJI101011		(0x35+0x40)
#define R_TENJI011011		(0x36+0x40)
#define R_TENJI111011		(0x37+0x40)
#define R_TENJI000111		(0x38+0x40)
#define R_TENJI100111		(0x39+0x40)
#define R_TENJI010111		(0x3a+0x40)
#define R_TENJI110111		(0x3b+0x40)
#define R_TENJI001111		(0x3c+0x40)
#define R_TENJI101111		(0x3d+0x40)
#define R_TENJI011111		(0x3e+0x40)
#define R_TENJI111111		(0x3f+0x40)

#define TEN_SPACE			TENJI000000
#define TEN_YOUON			TENJI010000
#define TEN_YOU_DAKU		TENJI010100
#define TEN_YOU_HANDAKU		TENJI010001
#define TEN_DAKU			TENJI000100
#define TEN_HANDAKU			TENJI000001
#define TEN_NUMBER			TENJI010111
#define TEN_TUNAGI			TENJI000011

#define	TEN_1_			TENJI100000
#define TEN_2_			TENJI101000
#define TEN_3_			TENJI110000
#define TEN_4_			TENJI110100
#define TEN_5_			TENJI100100
#define TEN_6_			TENJI111000
#define TEN_7_			TENJI111100
#define TEN_8_			TENJI101100
#define TEN_9_			TENJI011000
#define TEN_0_			TENJI011100

#define TEN_TTU_		TENJI001000
#define TEN_bou_		TENJI001100

#define TEN_A_			TENJI100000
#define TEN_I_			TENJI101000
#define TEN_U_			TENJI110000
#define TEN_E_			TENJI111000
#define TEN_O_			TENJI011000

#define TEN_KA_			TENJI100001
#define TEN_KI_			TENJI101001
#define TEN_KU_			TENJI110001
#define TEN_KE_			TENJI111001
#define TEN_KO_			TENJI011001

#define TEN_SA_			TENJI100101
#define TEN_SI_			TENJI101101
#define TEN_SU_			TENJI110101
#define TEN_SE_			TENJI111101
#define TEN_SO_			TENJI011101

#define TEN_TA_			TENJI100110
#define TEN_TI_			TENJI101110
#define TEN_TU_			TENJI110110
#define TEN_TE_			TENJI111110
#define TEN_TO_			TENJI011110

#define TEN_NA_			TENJI100010
#define TEN_NI_			TENJI101010
#define TEN_NU_			TENJI110010
#define TEN_NE_			TENJI111010
#define TEN_NO_			TENJI011010

#define TEN_HA_			TENJI100011
#define TEN_HI_			TENJI101011
#define TEN_HU_			TENJI110011
#define TEN_HE_			TENJI111011
#define TEN_HO_			TENJI011011

#define TEN_MA_			TENJI100111
#define TEN_MI_			TENJI101111
#define TEN_MU_			TENJI110111
#define TEN_ME_			TENJI111111
#define TEN_MO_			TENJI011111

#define TEN_RA_			TENJI100100
#define TEN_RI_			TENJI101100
#define TEN_RU_			TENJI110100
#define TEN_RE_			TENJI111100
#define TEN_RO_			TENJI011100

#define TEN_YA_			TENJI010010
#define TEN_YU_			TENJI010011
#define TEN_YO_			TENJI010110

#define TEN_WA_			TENJI000010
#define TEN_WO_			TENJI000110
#define TEN_N_			TENJI000111

#endif	/* __BRAILLE_H__ */

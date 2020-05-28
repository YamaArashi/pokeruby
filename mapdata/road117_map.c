//MapEditNH Ver.3.55 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : field.cell
//Part Cell File Name (512-1023) : field_5.cell

#define	MapSizeX_road117	60
#define	MapSizeY_road117	20

const u16	road117_OutRangeCell[4]={
0x00c6,0x00c6,0x00c6,0x00c6,
};

const u16	road117_MapData[MapSizeX_road117*MapSizeY_road117]={
0x04c6,0x04c7,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x0417,0x0417,0x0417,0x0417,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x0417,0x0417,0x0417,0x0417,0x0417,0x0417,0x0417,0x0417,0x0417,0x0417,0x0417,0x04c6,0x04c6,0x0417,0x0417,0x0235,0x0236,0x0237,0x0417,0x0417,0x3001,0x320d,0x300d,0x3001,0x3001,0x30d0,0x30d1,0x30d1,0x30d2,0x300e,0x3001,0x300d,0x300d,0x320a,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,
0x04c7,0x04c7,0x04c7,0x04c7,0x04c6,0x04c6,0x04c6,0x04c7,0x3001,0x3001,0x300d,0x300d,0x0417,0x0417,0x0417,0x0417,0x0417,0x0417,0x3001,0x3001,0x3001,0x3001,0x10b0,0x10b1,0x10b1,0x10b1,0x10b1,0x10b1,0x10b2,0x0417,0x04c6,0x06ba,0x3468,0x3473,0x3071,0x3475,0x3069,0x346a,0x300e,0x3001,0x3001,0x320d,0x300d,0x30d0,0x30d1,0x30d1,0x30d2,0x3416,0x3001,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,
0x04c6,0x04c7,0x04c7,0x04c7,0x04c6,0x04c6,0x04c6,0x0416,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x10b8,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10c2,0x10b2,0x0417,0x0688,0x3470,0x347b,0x347c,0x347d,0x3071,0x3472,0x3416,0x3001,0x300d,0x300d,0x3001,0x30d0,0x30d1,0x30d9,0x30da,0x300d,0x3001,0x3001,0x3008,0x3009,0x3009,0x300a,0x3001,0x3001,0x300e,0x3001,0x3001,0x3001,
0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x0538,0x0549,0x0549,0x0549,0x0549,0x0549,0x0549,0x053a,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x10b8,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10c2,0x10b2,0x0688,0x3470,0x3071,0x3071,0x3474,0x3479,0x347a,0x3001,0x300d,0x300d,0x300e,0x30c8,0x30d1,0x30d2,0x300d,0x320c,0x3001,0x3001,0x320b,0x0410,0x0411,0x0411,0x0412,0x3001,0x3001,0x3416,0x3001,0x3001,0x3001,
0x04c6,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x0540,0x3215,0x320c,0x3213,0x320a,0x3211,0x3208,0x0542,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x320a,0x10b8,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10ba,0x0688,0x3478,0x3479,0x3479,0x347a,0x3001,0x3001,0x300d,0x3001,0x300d,0x3416,0x30d8,0x30d9,0x30da,0x3001,0x3001,0x3001,0x320c,0x3001,0x0418,0x0419,0x040b,0x041a,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,
0x04c6,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c6,0x0540,0x320e,0x3215,0x320c,0x3213,0x320a,0x3211,0x0542,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3002,0x3002,0x3002,0x3002,0x10cc,0x10a1,0x10a1,0x10a1,0x10ba,0x0690,0x0691,0x0691,0x0691,0x0691,0x0691,0x0691,0x0691,0x0691,0x0691,0x0691,0x0691,0x0691,0x0691,0x0691,0x0691,0x3001,0x0691,0x0403,0x0420,0x0421,0x0413,0x0422,0x0691,0x0691,0x0691,0x0691,0x0691,0x0691,
0x0416,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x0416,0x0540,0x3217,0x320e,0x3215,0x320c,0x3213,0x320a,0x0542,0x3001,0x0403,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x320a,0x10b8,0x10a1,0x10a1,0x10a1,0x10ba,0x3001,0x3208,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,
0x3204,0x0416,0x0416,0x0416,0x0416,0x0416,0x3001,0x0540,0x320f,0x3217,0x320e,0x3215,0x320c,0x3213,0x0542,0x3001,0x3118,0x3119,0x3119,0x3119,0x3119,0x3119,0x311a,0x3001,0x3001,0x3001,0x3002,0x3002,0x10cc,0x10a1,0x10ba,0x3211,0x3001,0x3001,0x3001,0x3118,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x311a,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,
0x0549,0x0549,0x0549,0x0549,0x0549,0x0549,0x0549,0x0548,0x0549,0x3001,0x3001,0x3001,0x3001,0x0549,0x054a,0x3001,0x3120,0x3121,0x3129,0x3129,0x3129,0x3129,0x312a,0x3001,0x3001,0x3001,0x3001,0x3001,0x3002,0x3002,0x3002,0x3001,0x3001,0x3118,0x3119,0x3121,0x3121,0x3121,0x3129,0x3278,0x3279,0x3278,0x3279,0x3278,0x3279,0x3278,0x3279,0x3121,0x3121,0x3121,0x3119,0x311a,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,
0x3204,0x3205,0x3001,0x3001,0x3205,0x3001,0x3205,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3120,0x3122,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3118,0x3119,0x3119,0x3119,0x3119,0x3121,0x3121,0x3121,0x3121,0x312a,0x3001,0x05d6,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d7,0x3128,0x3129,0x3121,0x3121,0x3121,0x3119,0x3119,0x311a,0x3001,0x3001,0x3001,0x3001,0x3001,
0x3205,0x3204,0x3001,0x3204,0x3001,0x3204,0x3001,0x3001,0x3118,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3121,0x3122,0x3001,0x3001,0x10b0,0x10b1,0x10b2,0x320c,0x3001,0x3001,0x3001,0x3001,0x3128,0x3129,0x3121,0x3121,0x3121,0x3121,0x3121,0x3121,0x312a,0x3001,0x31ce,0x05f3,0x05f2,0x05f3,0x05f2,0x05f3,0x05f2,0x05f3,0x05f2,0x31cf,0x3001,0x3128,0x3121,0x3121,0x3121,0x3129,0x312a,0x3001,0x3001,0x3001,0x3001,0x3001,
0x3204,0x3204,0x3204,0x3001,0x3001,0x3001,0x3001,0x3001,0x3128,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x312a,0x3001,0x3001,0x10b8,0x10a1,0x10c2,0x10b2,0x3213,0x3001,0x3001,0x3001,0x3001,0x3001,0x3128,0x3129,0x3121,0x3121,0x3121,0x3122,0x3001,0x3001,0x05d6,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d7,0x3001,0x3001,0x3120,0x3121,0x312a,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,
0x3204,0x3001,0x3205,0x3001,0x3204,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x10b8,0x10a1,0x10a1,0x10c2,0x10b1,0x10b2,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3128,0x3121,0x3121,0x3122,0x3001,0x3001,0x05dc,0x05dd,0x05e4,0x05e5,0x05e4,0x05e5,0x05e4,0x05f2,0x05f3,0x05e7,0x3001,0x0403,0x3120,0x3122,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x300f,0x300f,
0x0549,0x0549,0x0440,0x0440,0x0440,0x0440,0x0549,0x0549,0x0538,0x0549,0x0549,0x3001,0x3001,0x3001,0x0549,0x0549,0x053a,0x3001,0x300d,0x300d,0x10b8,0x10a1,0x10a1,0x10a1,0x10a1,0x10ba,0x3001,0x3213,0x3001,0x3001,0x3001,0x3001,0x3001,0x3120,0x3121,0x3121,0x311a,0x3001,0x05d4,0x05d5,0x314b,0x354c,0x354c,0x354c,0x314d,0x05d4,0x05d5,0x3001,0x3001,0x3118,0x3121,0x3122,0x3001,0x3001,0x3001,0x300f,0x300f,0x300f,0x04c6,0x04c6,
0x3001,0x300f,0x04c6,0x04c7,0x04c6,0x04c6,0x300f,0x300f,0x0540,0x320e,0x3215,0x320c,0x3213,0x320a,0x3211,0x3208,0x0542,0x300d,0x300d,0x300d,0x10b8,0x10a1,0x10a1,0x10a1,0x10a1,0x10c2,0x10b1,0x10b2,0x3001,0x300d,0x300d,0x300d,0x3001,0x3128,0x3121,0x3121,0x3122,0x3001,0x05e6,0x05e7,0x3113,0x3114,0x3114,0x3114,0x3115,0x05e4,0x05e7,0x3001,0x3001,0x3120,0x3121,0x312a,0x3001,0x300f,0x300f,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,
0x300f,0x04c7,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x0540,0x3217,0x320e,0x3215,0x320c,0x3213,0x320a,0x3211,0x0542,0x300d,0x300d,0x300d,0x10b8,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10ba,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x3120,0x3121,0x3121,0x311a,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3118,0x3121,0x3122,0x3001,0x3001,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,
0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x0540,0x320f,0x3217,0x320e,0x3215,0x320c,0x3213,0x320a,0x0542,0x300d,0x300d,0x300d,0x10b8,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10ba,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3128,0x3121,0x3121,0x3121,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3121,0x3121,0x312a,0x3001,0x300f,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,
0x04c6,0x04c6,0x04c6,0x0416,0x0416,0x0416,0x0416,0x0416,0x0548,0x3001,0x0549,0x0549,0x0549,0x0549,0x0549,0x0549,0x054a,0x0440,0x0440,0x0440,0x10b8,0x102d,0x102d,0x102d,0x102d,0x102d,0x102d,0x10ba,0x3025,0x3025,0x300d,0x300d,0x300d,0x300d,0x300d,0x3128,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x312a,0x3001,0x300f,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,
0x04c7,0x04c7,0x04c7,0x300f,0x3001,0x300f,0x300f,0x300f,0x300f,0x300f,0x3001,0x300f,0x300f,0x300f,0x300f,0x300f,0x3001,0x04c6,0x04c6,0x04c6,0x301d,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x301d,0x04c6,0x04c6,0x3025,0x3025,0x300d,0x300d,0x300d,0x3001,0x3001,0x300f,0x300f,0x300f,0x300f,0x300f,0x300f,0x300f,0x300f,0x300f,0x300f,0x300f,0x3001,0x3001,0x300f,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,
0x04c6,0x04c6,0x04c6,0x04c6,0x300f,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x300f,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x300f,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x3025,0x3025,0x3025,0x300f,0x300f,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x300f,0x300f,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,
};

const MapScreenData	road117_map_data =
{
	MapSizeX_road117,
	MapSizeY_road117,
	road117_OutRangeCell,
	road117_MapData,
	&field_char_data,
	&field_5_char_data
};

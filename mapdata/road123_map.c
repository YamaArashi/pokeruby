//MapEditNH Ver.3.55 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : field.cell
//Part Cell File Name (512-1023) : field_9.cell

#define	MapSizeX_road123	140
#define	MapSizeY_road123	20

const u16	road123_OutRangeCell[4]={
0x00c6,0x00c7,0x00c7,0x00c6,
};

const u16	road123_MapData[MapSizeX_road123*MapSizeY_road123]={
0x04c6,0x04c6,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c6,0x04c7,0x0416,0x04c7,0x04c7,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x0416,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c6,0x04c6,0x04c7,0x04c6,0x04c6,0x04c6,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x04c7,0x04c7,0x04c7,0x04c6,0x04c6,0x04c6,0x04c6,0x0416,0x0416,0x0416,0x0416,0x04c6,0x04c7,0x04c6,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x04c7,0x04c7,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c7,0x1190,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1192,0x0445,0x3001,0x3001,0x0447,0x1190,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x04c6,0x04c6,0x04c6,0x04c6,0x04c7,0x04c6,0x04c7,0x04c7,0x04c6,0x0540,0x0416,0x0416,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x0540,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c6,0x04c6,0x04c7,0x04c7,0x04c7,0x0416,0x0416,0x0416,0x3001,0x3001,0x0468,0x0469,0x0469,0x0469,0x0469,0x0469,0x0469,0x0469,0x0469,0x0469,0x0469,0x0469,0x0469,0x046a,0x04c7,0x04c7,0x04c7,0x04c7,0x04c6,0x0416,0x0416,0x300d,0x300d,0x300d,0x300d,0x0416,0x04c7,0x04c6,0x300d,0x3001,0x300d,0x300d,0x04fe,0x34e0,0x314b,0x354c,0x354c,0x354c,0x314d,0x04c7,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c7,0x04c6,0x1190,0x1170,0x1193,0x1193,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1192,0x0445,0x3001,0x3001,0x0447,0x1190,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x04c6,0x04c6,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c6,0x04c7,0x0540,0x0541,0x0549,0x0549,0x0549,0x0549,0x0549,0x0549,0x0549,0x0549,0x0539,0x3001,0x0416,0x0416,0x0416,0x0416,0x0416,0x0540,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x0416,0x0416,0x0416,0x3001,0x3001,0x3001,0x3001,0x3001,0x0470,0x0471,0x0471,0x0471,0x0471,0x0471,0x0471,0x0471,0x0471,0x0471,0x0471,0x0471,0x0471,0x0472,0x04c7,0x04c7,0x04c7,0x04c6,0x0416,0x3001,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x04c7,0x04c6,0x300d,0x300d,0x300d,0x300d,0x0485,0x3001,0x3113,0x3114,0x3114,0x3114,0x3115,0x04c7,0x04c7,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c6,0x04c6,0x301d,0x301d,0x04c7,0x04c7,0x1193,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1192,0x0445,0x3001,0x3001,0x0447,0x1190,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x04c6,0x04c6,0x04c6,0x04c6,0x04c7,0x04c6,0x04c7,0x04c7,0x04c6,0x0540,0x0542,0x3673,0x3675,0x3001,0x3673,0x3675,0x3001,0x3673,0x3675,0x0540,0x3001,0x3008,0x3009,0x3009,0x300a,0x3001,0x0540,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x0416,0x0416,0x0416,0x0416,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x34e0,0x3001,0x0478,0x05a0,0x0479,0x05a0,0x0479,0x0479,0x0479,0x0489,0x0471,0x0471,0x0471,0x0471,0x0471,0x0472,0x04c7,0x04c7,0x04c7,0x0416,0x3001,0x3001,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x0416,0x04c6,0x300d,0x300d,0x300d,0x300d,0x0485,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0416,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c6,0x04c6,0x04c6,0x04c7,0x04c6,0x04c6,0x04c7,0x04c7,0x1193,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1192,0x0445,0x3001,0x3001,0x0447,0x1190,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x04c6,0x04c6,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c6,0x04c7,0x0540,0x0542,0x327b,0x327d,0x3001,0x327b,0x327d,0x3001,0x327b,0x327d,0x0540,0x3001,0x0410,0x0411,0x0411,0x0412,0x3001,0x0540,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x10b0,0x10b1,0x10b1,0x10b1,0x10b1,0x10b1,0x10b1,0x10b2,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x04fe,0x3001,0x3001,0x300d,0x300d,0x0478,0x0489,0x0471,0x0471,0x0471,0x0471,0x0472,0x04c7,0x04c7,0x04c7,0x3001,0x3001,0x3001,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x0416,0x300d,0x300d,0x300d,0x300d,0x0485,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x04c6,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x1193,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1192,0x0445,0x3001,0x3001,0x0447,0x1190,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c7,0x04c6,0x0416,0x0540,0x0542,0x3673,0x3675,0x3001,0x3673,0x3675,0x3001,0x3673,0x3675,0x0540,0x3001,0x0418,0x0419,0x040b,0x041a,0x3001,0x0540,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x0416,0x0416,0x10b8,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10ba,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0485,0x3001,0x300d,0x300d,0x300d,0x300d,0x0478,0x0479,0x0479,0x05a0,0x0677,0x067f,0x04c6,0x04c6,0x04c7,0x34d5,0x3487,0x3487,0x3487,0x3487,0x3487,0x34d6,0x300f,0x300d,0x300d,0x3001,0x3001,0x3001,0x300d,0x300d,0x0485,0x3001,0x3001,0x3001,0x3001,0x300d,0x300d,0x3001,0x3001,0x300e,0x300e,0x300e,0x300e,0x300e,0x3001,0x04c6,0x04c6,0x04c7,0x04c6,0x04c6,0x04c7,0x04c7,0x04c7,0x04c7,0x1193,0x1193,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1192,0x0445,0x3001,0x3001,0x0447,0x1190,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x04c6,0x04c6,0x04c6,0x04c7,0x04c6,0x04c7,0x0416,0x0416,0x3001,0x0540,0x0542,0x327b,0x327d,0x3001,0x327b,0x327d,0x3001,0x327b,0x327d,0x0540,0x3001,0x0420,0x0421,0x0413,0x0422,0x3001,0x0540,0x04c7,0x0416,0x0416,0x0416,0x0416,0x3001,0x3001,0x10b8,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10ba,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0485,0x300d,0x300d,0x300d,0x300d,0x300d,0x34d5,0x046f,0x3001,0x3001,0x0416,0x04c6,0x04c6,0x04c6,0x0416,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x300f,0x04c6,0x300d,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0485,0x3001,0x3001,0x3001,0x300d,0x300d,0x300d,0x300d,0x300d,0x0416,0x04c7,0x04c7,0x04c7,0x04c7,0x3001,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c6,0x04c6,0x04c6,0x1193,0x1193,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1192,0x0445,0x3001,0x3001,0x0447,0x1190,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1193,0x1193,0x1193,
0x04c7,0x04c6,0x04c6,0x04c6,0x0416,0x0416,0x3001,0x3001,0x3001,0x0540,0x0533,0x0549,0x0549,0x3001,0x3001,0x3001,0x3001,0x0549,0x0549,0x0532,0x3403,0x3001,0x3001,0x3001,0x3001,0x3001,0x0540,0x0416,0x3001,0x04fe,0x34e0,0x3001,0x3001,0x3001,0x10b8,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10ba,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0485,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x0485,0x3001,0x3001,0x3001,0x04c7,0x04c7,0x0416,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x04c6,0x04c6,0x300f,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0506,0x300f,0x300f,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x04c7,0x04c6,0x04c7,0x04c7,0x3001,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x1193,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1192,0x0445,0x3001,0x3001,0x0447,0x1190,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1193,0x1193,0x04c7,0x04c7,0x04c7,
0x04c7,0x0417,0x0417,0x0417,0x3001,0x3001,0x3001,0x3001,0x3001,0x0540,0x300e,0x300e,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0540,0x3001,0x3001,0x0485,0x3001,0x3001,0x3001,0x3001,0x10b8,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10ba,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0506,0x3025,0x3025,0x300d,0x300d,0x300d,0x300d,0x0485,0x3001,0x3001,0x3001,0x04c7,0x0416,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0416,0x04c6,0x04c6,0x300f,0x34e0,0x3001,0x3001,0x3001,0x3001,0x300f,0x04c6,0x04c6,0x3025,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x0416,0x04c7,0x04c7,0x04c7,0x3001,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c6,0x04c6,0x1193,0x1193,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1192,0x0445,0x3001,0x3001,0x0447,0x1190,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1193,0x1193,0x1193,0x04c7,0x04c6,0x04c7,0x04c7,0x04c7,
0x0417,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0540,0x04c7,0x0416,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x31d0,0x31d2,0x3001,0x3001,0x3001,0x0540,0x3001,0x3001,0x0485,0x3001,0x3001,0x3001,0x3001,0x3002,0x3002,0x3002,0x3002,0x3002,0x3002,0x3002,0x3002,0x3001,0x3001,0x3001,0x34e0,0x3001,0x300f,0x300f,0x04c6,0x04c6,0x3025,0x300d,0x300d,0x300d,0x0485,0x3001,0x300f,0x3001,0x0416,0x34d5,0x3487,0x3487,0x3487,0x3487,0x34d6,0x300f,0x300d,0x300d,0x300d,0x04c6,0x04c6,0x04c6,0x300f,0x3001,0x3001,0x3001,0x3001,0x04c6,0x04c6,0x04c6,0x04c6,0x3025,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x04c7,0x04c7,0x04c7,0x3001,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x04c7,0x04c7,0x04c7,0x04c6,0x04c6,0x04c6,0x04c6,0x1193,0x1193,0x1193,0x1193,0x1193,0x1170,0x1170,0x1170,0x1192,0x0445,0x3001,0x3001,0x0447,0x1190,0x1170,0x1170,0x1193,0x1193,0x1193,0x1193,0x1193,0x1193,0x1193,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,
0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0540,0x0416,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x31d8,0x31da,0x3001,0x3001,0x3001,0x0540,0x3001,0x3001,0x0485,0x3001,0x3001,0x300e,0x300e,0x300e,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x300f,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x300d,0x300d,0x3001,0x0485,0x300f,0x04c6,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x04c6,0x3025,0x300d,0x300d,0x0416,0x0416,0x04c6,0x04c6,0x3001,0x3001,0x3001,0x3001,0x0416,0x04c6,0x04c6,0x04c6,0x04c6,0x3025,0x300d,0x300d,0x300d,0x300d,0x300d,0x0416,0x04c7,0x04c7,0x3001,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x3001,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c6,0x04c6,0x04c7,0x04c6,0x04c7,0x04c7,0x04c7,0x343e,0x343e,0x343e,0x0403,0x3001,0x3001,0x3001,0x3001,0x343e,0x343e,0x343e,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c7,
0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0548,0x0549,0x0549,0x0549,0x0549,0x0549,0x0549,0x0549,0x0549,0x0549,0x0549,0x3001,0x31d8,0x31da,0x3001,0x0549,0x0549,0x0532,0x3001,0x3001,0x048d,0x3487,0x3487,0x04c7,0x04c7,0x04c7,0x300e,0x34d5,0x3487,0x3487,0x3487,0x3487,0x3487,0x346f,0x300e,0x300e,0x300e,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x3001,0x3001,0x3001,0x0506,0x04c6,0x04c6,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x300f,0x04c6,0x04c6,0x300d,0x300d,0x300d,0x300d,0x0416,0x0416,0x34d5,0x0487,0x0487,0x0487,0x04d6,0x04c6,0x04c6,0x04c6,0x04c6,0x0416,0x3001,0x3001,0x3001,0x300d,0x300d,0x300d,0x0416,0x0416,0x3001,0x0416,0x0416,0x0416,0x0416,0x0416,0x04c7,0x04c7,0x04c7,0x3001,0x04c7,0x04c7,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x0416,0x3001,0x34e0,0x3001,0x3001,0x3001,0x3118,0x311a,0x3001,0x3001,0x34e0,0x3001,0x0416,0x04c7,0x04c6,0x04c7,0x04c6,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x04c6,
0x300f,0x300f,0x300f,0x300f,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3403,0x3001,0x3001,0x3004,0x3001,0x3001,0x3004,0x3001,0x3001,0x3004,0x3001,0x31d8,0x31da,0x3001,0x3004,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0416,0x04c7,0x04c7,0x04c7,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0485,0x04c7,0x04c7,0x04c7,0x04c7,0x04c6,0x04c6,0x04c6,0x04c6,0x0416,0x3001,0x3001,0x3001,0x300f,0x04c6,0x0416,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x300f,0x04c6,0x04c6,0x04c6,0x3025,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0416,0x0416,0x0416,0x0416,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x300d,0x300d,0x300d,0x04c7,0x04c7,0x04c7,0x3001,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c6,0x0416,0x0416,0x0416,0x0416,0x0416,0x3001,0x3001,0x3001,0x3001,0x3001,0x3118,0x3121,0x3122,0x3001,0x3001,0x3001,0x3001,0x3001,0x04c6,0x04c6,0x04c6,0x04c6,0x3001,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x04c7,
0x04c7,0x04c7,0x04c7,0x04c7,0x300f,0x300f,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x31d8,0x31da,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0416,0x0416,0x0416,0x3004,0x3001,0x3001,0x3004,0x3001,0x3001,0x0485,0x0416,0x04c6,0x04c6,0x04c6,0x04c7,0x04c7,0x04c7,0x0416,0x3001,0x3001,0x3001,0x3001,0x0416,0x0416,0x34d5,0x3487,0x3487,0x3487,0x3487,0x3487,0x34d6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x3025,0x3025,0x300d,0x300d,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x04fe,0x3001,0x3001,0x34e0,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x300d,0x300d,0x300d,0x300d,0x300d,0x0416,0x0416,0x0416,0x3001,0x0416,0x04c6,0x04c6,0x04c6,0x04c6,0x0416,0x314b,0x354c,0x354c,0x354c,0x314d,0x3001,0x3001,0x3118,0x3119,0x3119,0x3121,0x3121,0x312a,0x3001,0x3001,0x3001,0x3001,0x3001,0x0416,0x0416,0x0416,0x0416,0x3001,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c7,0x04c6,
0x04c6,0x04c6,0x04c7,0x04c7,0x04c6,0x04c6,0x300f,0x3001,0x31d0,0x31d1,0x31d1,0x31d1,0x31d1,0x31d1,0x31d1,0x31d1,0x31d1,0x31d1,0x31d1,0x31d1,0x31d1,0x31d9,0x31d9,0x31d1,0x31d1,0x31d1,0x31d1,0x31d1,0x31d1,0x31d1,0x31d1,0x31d1,0x31d1,0x31d1,0x31d1,0x31d1,0x31d1,0x31d1,0x31d1,0x31d2,0x3001,0x3001,0x0485,0x3001,0x0416,0x0416,0x04c6,0x04c6,0x04c6,0x04c6,0x34d5,0x3487,0x3487,0x3487,0x3487,0x3487,0x046f,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0416,0x0416,0x04c6,0x04c6,0x04c6,0x04c6,0x0416,0x300d,0x3001,0x3001,0x3001,0x3001,0x3118,0x3119,0x3119,0x311a,0x3001,0x0485,0x3118,0x3119,0x3119,0x3119,0x311a,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x0416,0x0416,0x0416,0x0416,0x3001,0x3113,0x3114,0x3114,0x3114,0x3115,0x3118,0x3119,0x3121,0x3121,0x3121,0x3121,0x312a,0x3001,0x3001,0x3001,0x3001,0x300e,0x300e,0x300e,0x300e,0x300e,0x3001,0x300e,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c7,0x04c6,0x04c7,
0x04c7,0x04c7,0x04c6,0x04c6,0x04c7,0x04c6,0x04c6,0x300f,0x31e0,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e1,0x31e2,0x3001,0x3001,0x0485,0x3001,0x3001,0x3001,0x0416,0x0416,0x0416,0x0416,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0485,0x3001,0x3118,0x3119,0x3119,0x3119,0x3119,0x3119,0x311a,0x3001,0x0416,0x0416,0x0416,0x0416,0x3001,0x04fe,0x3001,0x3118,0x3119,0x3119,0x3121,0x3121,0x3129,0x312a,0x3001,0x0485,0x3128,0x3129,0x3129,0x3121,0x3121,0x3119,0x3119,0x3119,0x311a,0x34e0,0x3001,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x3118,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3121,0x3121,0x3121,0x3129,0x3129,0x312a,0x3001,0x3001,0x34e0,0x300e,0x300e,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x3001,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c7,0x04c6,
0x04c7,0x04c7,0x04c6,0x04c7,0x04c7,0x04c6,0x04c7,0x04c7,0x300f,0x300f,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x300e,0x300e,0x300e,0x300e,0x3001,0x3001,0x3001,0x3001,0x3001,0x0485,0x3001,0x3001,0x3118,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x311a,0x3001,0x3001,0x3001,0x0485,0x3001,0x3128,0x3129,0x3129,0x3129,0x3129,0x3121,0x3121,0x3119,0x3119,0x3119,0x3119,0x311a,0x3001,0x0485,0x3001,0x3128,0x3129,0x3129,0x3129,0x312a,0x3001,0x3001,0x3001,0x0485,0x3001,0x3001,0x3001,0x3128,0x3129,0x3129,0x3129,0x3129,0x312a,0x300e,0x3025,0x3025,0x3025,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x3128,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x312a,0x3001,0x3001,0x3001,0x3001,0x300e,0x300e,0x04c7,0x04c7,0x04c7,0x04c6,0x04c6,0x04c6,0x04c6,0x3001,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c7,0x04c6,
0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c7,0x04c7,0x04c7,0x3440,0x0549,0x3001,0x0549,0x0549,0x0549,0x0549,0x0549,0x0549,0x0549,0x0549,0x0549,0x0549,0x0549,0x3440,0x3440,0x0549,0x0549,0x0549,0x0549,0x0549,0x3001,0x3440,0x04c6,0x04c6,0x04c6,0x04c6,0x300e,0x300e,0x300e,0x3001,0x3001,0x0485,0x300f,0x3001,0x3128,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x312a,0x3001,0x3001,0x3001,0x0506,0x300f,0x300f,0x3001,0x3001,0x3001,0x3001,0x3128,0x3129,0x3129,0x3129,0x3129,0x3129,0x312a,0x3001,0x0485,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x34e0,0x3001,0x0506,0x300e,0x300e,0x3001,0x3001,0x3001,0x300e,0x300e,0x300e,0x300e,0x04c6,0x04c6,0x04c6,0x04c6,0x3025,0x3025,0x3025,0x3025,0x300d,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x34e0,0x3001,0x3001,0x3001,0x3001,0x3001,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x04c7,0x04c6,0x04c7,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x3001,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,
0x04c7,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c6,0x04c7,0x04c6,0x04c7,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x04c7,0x04c7,0x300e,0x3001,0x300f,0x300f,0x300e,0x300e,0x04c6,0x04c7,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x300e,0x300e,0x0506,0x04c7,0x300f,0x300f,0x3001,0x3001,0x3001,0x3001,0x34e0,0x3001,0x300f,0x300f,0x300f,0x300f,0x300f,0x04c6,0x04c6,0x300f,0x300f,0x300f,0x300f,0x3001,0x3001,0x3001,0x3001,0x34e0,0x3001,0x3001,0x3001,0x0506,0x300f,0x300f,0x300f,0x3001,0x3001,0x3001,0x300f,0x300f,0x300f,0x300e,0x04c6,0x04c6,0x300e,0x300e,0x300e,0x04c6,0x04c6,0x04c7,0x04c6,0x04c6,0x04c6,0x04c7,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x300e,0x300e,0x34e0,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x300e,0x300e,0x300e,0x300e,0x300e,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x3001,
0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x300f,0x04c6,0x04c6,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c7,0x04c6,0x04c7,0x04c7,0x04c7,0x04c7,0x300e,0x04c7,0x04c7,0x04c7,0x300f,0x300f,0x300f,0x300f,0x300f,0x300f,0x04c7,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x300f,0x300f,0x300f,0x300f,0x300f,0x300f,0x300f,0x300f,0x300f,0x04c7,0x04c7,0x04c7,0x300f,0x300f,0x300f,0x04c7,0x04c7,0x04c7,0x04c6,0x04c6,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c6,0x04c6,0x04c7,0x04c6,0x04c7,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x300e,0x04c6,0x04c6,0x04c7,0x04c6,0x04c7,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c7,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x300e,
};

const MapScreenData	road123_map_data =
{
	MapSizeX_road123,
	MapSizeY_road123,
	road123_OutRangeCell,
	road123_MapData,
	&field_char_data,
	&field_9_char_data
};

//MapEditNH Ver.3.55 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : field.cell
//Part Cell File Name (512-1023) : field_2.cell

#define	MapSizeX_road104	40
#define	MapSizeY_road104	80

const u16	road104_OutRangeCell[4]={
0x01d4,0x01d5,0x01dc,0x01dd,
};

const u16	road104_MapData[MapSizeX_road104*MapSizeY_road104]={
0x05d4,0x35d5,0x05d4,0x35d5,0x05d4,0x35d5,0x05d4,0x35d5,0x05d4,0x05d7,0x31ce,0x31cf,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x05d4,0x05d5,0x05d4,0x05d5,0x05dc,0x05dd,
0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05d4,0x05d7,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x31ce,0x31cf,0x05dc,0x05dd,0x05dc,0x05dd,0x05d4,0x05d5,
0x05d4,0x35d5,0x05d4,0x35d5,0x05d4,0x35d5,0x05d4,0x35d5,0x05d4,0x35d5,0x05dc,0x05dd,0x31ce,0x31cf,0x3001,0x3118,0x311a,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x30c8,0x30ca,0x3001,0x3001,0x05d6,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05dc,0x05dd,
0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05e4,0x05e5,0x05dc,0x05dd,0x05d4,0x05d5,0x05d4,0x05d7,0x3001,0x3120,0x3121,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x311a,0x3001,0x3001,0x30d8,0x30d1,0x30ca,0x3001,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05d4,0x05d5,
0x05d4,0x35d5,0x05d4,0x35d5,0x05d4,0x35d5,0x300d,0x300d,0x05d4,0x35d5,0x05dc,0x05dd,0x05dc,0x05dd,0x3001,0x3128,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3121,0x3122,0x3001,0x3001,0x3001,0x30d8,0x30da,0x3001,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05dc,0x05dd,
0x05dc,0x05dd,0x05e4,0x05e5,0x05e4,0x05e7,0x3001,0x300d,0x35e6,0x05e5,0x05d4,0x05d5,0x05d4,0x05d5,0x3001,0x3001,0x3001,0x3001,0x30c8,0x30ca,0x3001,0x3001,0x3001,0x0403,0x3120,0x3122,0x3001,0x3001,0x3001,0x3001,0x3001,0x3004,0x05e6,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05d4,0x05d5,
0x05d4,0x35d5,0x300d,0x3001,0x300d,0x300d,0x300d,0x3001,0x300d,0x300d,0x05dc,0x05dd,0x05dc,0x05dd,0x31ce,0x31cf,0x3001,0x3001,0x30d8,0x30da,0x3001,0x3001,0x3001,0x3001,0x3120,0x3122,0x3001,0x30c8,0x30ca,0x3001,0x3001,0x3001,0x3001,0x314b,0x354c,0x354c,0x354c,0x314d,0x05dc,0x05dd,
0x05dc,0x05dd,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x05d4,0x35d5,0x05d4,0x05d5,0x05d4,0x05d7,0x31ce,0x31cf,0x31ce,0x31cf,0x3001,0x30c8,0x30ca,0x3001,0x3128,0x312a,0x3001,0x30d8,0x30da,0x3001,0x3001,0x3001,0x3004,0x3113,0x3114,0x3114,0x3114,0x3115,0x05d4,0x05d5,
0x05d4,0x35d5,0x300d,0x300d,0x300d,0x3001,0x300d,0x300d,0x31c6,0x31c7,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05d4,0x05d5,0x05d4,0x05d7,0x3001,0x30d8,0x30da,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3004,0x3001,0x3004,0x3004,0x05dc,0x05dd,
0x05dc,0x05dd,0x300d,0x3001,0x300d,0x300d,0x31c6,0x31c7,0x05d6,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05dc,0x05dd,0x05dc,0x05dd,0x10b0,0x10b1,0x10b1,0x10b1,0x3350,0x3351,0x10b1,0x10b1,0x10b1,0x10b1,0x10b1,0x10b1,0x10b1,0x10b1,0x10b1,0x10b1,0x10b1,0x10b2,0x05d4,0x05d5,
0x05d4,0x05d5,0x300d,0x300d,0x300d,0x300d,0x05d6,0x05d5,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05d4,0x05d5,0x05d4,0x05d5,0x10b8,0x120f,0x120e,0x120d,0x334e,0x334f,0x120a,0x1209,0x1208,0x120f,0x120e,0x120d,0x120c,0x120b,0x120a,0x1209,0x1208,0x10ba,0x05dc,0x05dd,
0x05dc,0x05dd,0x300d,0x300d,0x31c6,0x31c7,0x05dc,0x05dd,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05e4,0x05e5,0x05e4,0x05e7,0x10b8,0x1208,0x120f,0x120e,0x334e,0x334f,0x120b,0x120a,0x1209,0x1208,0x120f,0x120e,0x120d,0x120c,0x120b,0x120a,0x1209,0x10ba,0x05d4,0x05d5,
0x05d4,0x05d5,0x3001,0x300d,0x05d6,0x05d5,0x05d4,0x05d5,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05e4,0x05e7,0x10b0,0x10b1,0x10b1,0x10b1,0x10c0,0x1209,0x1208,0x120f,0x334e,0x334f,0x120c,0x120b,0x120a,0x1209,0x1208,0x120f,0x120e,0x120d,0x120c,0x120b,0x120a,0x10ba,0x05dc,0x05dd,
0x05dc,0x05dd,0x3001,0x3001,0x05dc,0x05dd,0x05dc,0x05dd,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x10b0,0x10b1,0x10c0,0x120e,0x120d,0x120c,0x120b,0x120a,0x1209,0x1208,0x334e,0x334f,0x120d,0x120c,0x120b,0x120a,0x1209,0x1208,0x120f,0x120e,0x120d,0x120c,0x120b,0x10ba,0x05d4,0x05d5,
0x05d4,0x05d5,0x3001,0x3001,0x05d4,0x05d5,0x05d4,0x05d5,0x05e4,0x05f2,0x05f3,0x05f2,0x05f3,0x05e7,0x10b8,0x1209,0x1208,0x120f,0x120e,0x120d,0x120c,0x120b,0x120a,0x1209,0x334e,0x334f,0x120e,0x120d,0x120c,0x120b,0x120a,0x1209,0x1208,0x120f,0x120e,0x120d,0x120c,0x10ba,0x05e6,0x05e5,
0x05dc,0x05dd,0x3001,0x3248,0x0649,0x064a,0x064b,0x064c,0x064d,0x05d4,0x05d5,0x05d4,0x05d5,0x10b0,0x10c0,0x120a,0x1209,0x1208,0x120f,0x120e,0x120d,0x120c,0x120b,0x120a,0x334e,0x334f,0x3344,0x3344,0x3344,0x3344,0x334e,0x334f,0x1209,0x1208,0x120f,0x120e,0x120d,0x10ba,0x3001,0x3001,
0x05d4,0x05d5,0x3207,0x0650,0x0651,0x0652,0x0653,0x0654,0x0655,0x05dc,0x05dd,0x05dc,0x05dd,0x10b8,0x120c,0x120b,0x120a,0x1209,0x1208,0x120f,0x120e,0x120d,0x120c,0x120b,0x3346,0x3347,0x334c,0x334c,0x334c,0x334c,0x334e,0x334f,0x120a,0x1209,0x1208,0x120f,0x120e,0x10ba,0x31ce,0x31cf,
0x05dc,0x05dd,0x3207,0x0658,0x0659,0x065a,0x065b,0x065c,0x065d,0x05d4,0x05d5,0x05d4,0x05d5,0x10b8,0x120d,0x120c,0x120b,0x120a,0x1209,0x1208,0x120f,0x120e,0x120d,0x120c,0x1333,0x1334,0x134d,0x134d,0x134d,0x134d,0x334e,0x334f,0x120b,0x120a,0x1209,0x1208,0x120f,0x10ba,0x05d6,0x05d5,
0x05d4,0x05d5,0x3207,0x0660,0x0661,0x0262,0x0663,0x0664,0x0665,0x05e6,0x05e5,0x05dc,0x05dd,0x10b8,0x120e,0x120d,0x120c,0x120b,0x120a,0x1209,0x1208,0x120f,0x120e,0x120d,0x120c,0x120b,0x120a,0x1209,0x1208,0x120f,0x334e,0x334f,0x120c,0x120b,0x120a,0x1209,0x1208,0x10ba,0x05dc,0x05dd,
0x05dc,0x05dd,0x3207,0x3206,0x3207,0x3001,0x3206,0x3207,0x3206,0x3207,0x3207,0x05d4,0x05d5,0x10b8,0x120f,0x120e,0x120d,0x120c,0x120b,0x120a,0x1209,0x1208,0x120f,0x120e,0x120d,0x120c,0x120b,0x120a,0x1209,0x1208,0x334e,0x334f,0x120d,0x120c,0x120b,0x120a,0x1209,0x10ba,0x05d4,0x05d5,
0x05d4,0x05d5,0x3004,0x3004,0x3004,0x3001,0x3001,0x0403,0x3004,0x3004,0x3004,0x35e6,0x35e7,0x10b8,0x1208,0x120f,0x120e,0x120d,0x120c,0x120b,0x120a,0x1209,0x1208,0x120f,0x120e,0x120d,0x120c,0x120b,0x120a,0x1209,0x334e,0x334f,0x120e,0x120d,0x120c,0x120b,0x120a,0x10ba,0x05dc,0x05dd,
0x05dc,0x35dd,0x3004,0x3004,0x3004,0x3001,0x3001,0x3001,0x3004,0x3004,0x3004,0x3001,0x3001,0x10b8,0x1209,0x1208,0x120f,0x120e,0x120d,0x120c,0x120b,0x120a,0x1209,0x1208,0x120f,0x120e,0x120d,0x120c,0x120b,0x120a,0x334e,0x334f,0x120f,0x120e,0x120d,0x120c,0x120b,0x10ba,0x05d4,0x05d5,
0x35d4,0x35d5,0x314b,0x354c,0x314d,0x3118,0x311a,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3002,0x3002,0x3002,0x3002,0x3002,0x3002,0x3002,0x3002,0x3002,0x3002,0x3002,0x3002,0x3002,0x3002,0x3002,0x3002,0x3002,0x3001,0x3001,0x3002,0x3002,0x31e8,0x31e9,0x31e8,0x31e9,0x05dc,0x05dd,
0x35dc,0x35dd,0x310b,0x350c,0x310d,0x3120,0x3122,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x341b,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3118,0x311a,0x3001,0x3001,0x05d6,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,
0x05d4,0x35d5,0x310b,0x350c,0x310d,0x3120,0x3121,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3121,0x3122,0x31ce,0x31cf,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,
0x05dc,0x05dd,0x310b,0x350c,0x310d,0x3128,0x3129,0x3129,0x3129,0x3129,0x3121,0x3121,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x312a,0x05d6,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,
0x05d4,0x05d5,0x3113,0x3114,0x3115,0x3001,0x3001,0x3001,0x3001,0x3001,0x3120,0x3122,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x05ec,0x05ed,0x05ec,0x05ed,0x05dc,0x05dd,0x05dc,0x05dd,
0x05dc,0x05dd,0x31ce,0x31cf,0x31ce,0x31cf,0x3001,0x3001,0x3001,0x3001,0x3120,0x3122,0x3001,0x3001,0x3549,0x3549,0x3549,0x3440,0x3440,0x3549,0x3549,0x3549,0x3549,0x3440,0x3440,0x3440,0x3549,0x3549,0x3549,0x3549,0x3440,0x3440,0x04c7,0x04c7,0x04c7,0x04c7,0x05d4,0x05d5,0x05d4,0x05d5,
0x05d4,0x05d5,0x05d4,0x35d5,0x05d4,0x35d5,0x3440,0x3440,0x3549,0x3549,0x3128,0x312a,0x3549,0x3549,0x300f,0x300e,0x300e,0x04c7,0x04c7,0x300e,0x300e,0x300e,0x300e,0x04c7,0x04c6,0x04c6,0x300f,0x300e,0x300f,0x300f,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x05ec,0x05ed,0x05dc,0x05dd,
0x05dc,0x05dd,0x05ec,0x05ed,0x05ec,0x05ed,0x04c7,0x04c7,0x300f,0x300f,0x3306,0x3306,0x300f,0x300f,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c6,0x04c6,0x04c6,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x05d4,0x05d5,
0x05d4,0x35d5,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x330e,0x330e,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x05dc,0x05dd,
0x05ec,0x05ed,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x0716,0x0716,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x05d4,0x05d5,
0x04c6,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x05ec,0x05ed,
0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,
0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,
0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c6,0x04c6,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,
0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,
0x0416,0x0416,0x0416,0x0416,0x0416,0x04c6,0x04c7,0x04c6,0x04c7,0x04c7,0x0707,0x0707,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,
0x0479,0x0479,0x0479,0x0479,0x0489,0x04c6,0x04c6,0x04c7,0x04c7,0x04c7,0x330f,0x330f,0x04c7,0x04c7,0x04c7,0x04c7,0x04c6,0x04c6,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,
0x112c,0x112c,0x112c,0x1145,0x0488,0x0416,0x04c6,0x04c7,0x0417,0x0417,0x3317,0x3317,0x0417,0x0416,0x04c7,0x04c7,0x04c7,0x04c7,0x04c6,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,
0x1170,0x1170,0x1170,0x1123,0x0490,0x0489,0x0416,0x0417,0x3549,0x0549,0x3118,0x311a,0x3549,0x3549,0x0417,0x0417,0x04c7,0x04c6,0x04c7,0x04c7,0x04c7,0x0416,0x0416,0x0416,0x0416,0x0416,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,
0x1170,0x1170,0x1170,0x112b,0x1145,0x0490,0x0489,0x300d,0x300d,0x300d,0x3120,0x3122,0x300d,0x300d,0x300d,0x300d,0x0417,0x0416,0x0416,0x0417,0x0417,0x314b,0x354c,0x354c,0x354c,0x314d,0x04c6,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x0707,0x0707,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,
0x1170,0x1170,0x1170,0x1170,0x112b,0x1145,0x0488,0x300d,0x300d,0x300d,0x3120,0x3122,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x3001,0x3113,0x3114,0x3114,0x3114,0x3115,0x04c6,0x04c7,0x04c7,0x04c7,0x04c7,0x04c7,0x330f,0x330f,0x04c7,0x04c7,0x04c7,0x04c7,0x05f4,0x05f5,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x0488,0x300d,0x300d,0x300d,0x3120,0x3121,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x311a,0x3001,0x04c6,0x04c7,0x04c7,0x04c7,0x04c7,0x0416,0x3317,0x3317,0x05f4,0x05f5,0x04c7,0x04c7,0x05d4,0x05d5,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x0490,0x0489,0x300d,0x300d,0x3128,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3121,0x3121,0x3122,0x3001,0x04c6,0x04c6,0x04c7,0x04c7,0x04c7,0x3001,0x3001,0x3001,0x05d4,0x05d5,0x05f4,0x05f5,0x05dc,0x05dd,
0x1170,0x1170,0x1170,0x1170,0x1170,0x112b,0x1145,0x0488,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x3001,0x3120,0x3121,0x3122,0x3001,0x04c6,0x04c7,0x04c7,0x04c7,0x04c7,0x3001,0x3001,0x3001,0x05dc,0x05dd,0x05d4,0x05d5,0x05d4,0x05d5,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x0490,0x0479,0x0479,0x0489,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x3120,0x3121,0x3122,0x3001,0x0416,0x04c7,0x04c7,0x04c7,0x0416,0x3001,0x3001,0x3001,0x05d4,0x05d5,0x05dc,0x05dd,0x05dc,0x05dd,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x112b,0x112c,0x152c,0x1545,0x0490,0x0479,0x0479,0x0479,0x0489,0x3268,0x3269,0x326a,0x326b,0x326c,0x3001,0x3001,0x3120,0x3121,0x3122,0x3001,0x3001,0x04c6,0x04c7,0x04c7,0x3001,0x3001,0x3001,0x3001,0x05dc,0x05dd,0x05d4,0x05d5,0x05d4,0x05d5,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x152b,0x152c,0x152c,0x152c,0x1545,0x0488,0x3670,0x0671,0x0672,0x0673,0x0674,0x3001,0x3001,0x3120,0x3121,0x3122,0x3001,0x3001,0x0416,0x0417,0x0416,0x3001,0x3001,0x3001,0x3001,0x05d4,0x05d5,0x05dc,0x05dd,0x05dc,0x05dd,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1570,0x1570,0x1570,0x1570,0x1523,0x0488,0x3678,0x0679,0x067a,0x067b,0x067c,0x3001,0x3001,0x3120,0x3121,0x3122,0x3001,0x3001,0x3001,0x04fe,0x3001,0x3001,0x3001,0x3001,0x3001,0x35dc,0x35dd,0x05d4,0x05d5,0x05d4,0x05d5,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1570,0x0550,0x0551,0x1570,0x1570,0x152b,0x072f,0x3680,0x0681,0x0282,0x0683,0x0684,0x0403,0x3001,0x3120,0x3121,0x3122,0x3001,0x3001,0x3001,0x0485,0x3001,0x3001,0x3004,0x3001,0x3001,0x05d4,0x05d5,0x05dc,0x05dd,0x05dc,0x05dd,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x0558,0x0559,0x073d,0x426e,0x426e,0x432e,0x0001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3128,0x3129,0x312a,0x3001,0x3001,0x3001,0x0485,0x3001,0x3004,0x3001,0x3001,0x3001,0x05dc,0x05dd,0x05d4,0x05d5,0x05d4,0x05d5,
0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x0576,0x0558,0x0559,0x1170,0x1170,0x0745,0x426d,0x426d,0x4336,0x0001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0485,0x3001,0x3001,0x3004,0x31ce,0x31cf,0x05d4,0x05d5,0x05dc,0x05dd,0x05dc,0x05dd,
0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,0x1335,0x1276,0x1276,0x0677,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0485,0x3001,0x3004,0x3001,0x05d6,0x05d5,0x35dc,0x35dd,0x05d4,0x05d5,0x05d4,0x05d5,
0x1170,0x1170,0x1170,0x1170,0x1572,0x157b,0x0574,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x111b,0x0490,0x0479,0x30af,0x30cf,0x0479,0x0489,0x3001,0x3001,0x3001,0x3001,0x3001,0x300d,0x300d,0x300d,0x0485,0x3001,0x3001,0x3004,0x35dc,0x35dd,0x05d4,0x05d5,0x05dc,0x05dd,0x05dc,0x05dd,
0x1170,0x1170,0x1170,0x1170,0x157a,0x1071,0x057c,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x3001,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x048d,0x0487,0x046f,0x3001,0x05d4,0x05d5,0x35dc,0x35dd,0x05d4,0x05d5,0x05d4,0x05d5,
0x1170,0x1170,0x1170,0x1170,0x1582,0x0479,0x0584,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x112b,0x1145,0x3124,0x3124,0x3124,0x3124,0x0488,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x0485,0x3001,0x35e6,0x35e5,0x05d4,0x05d5,0x05dc,0x05dd,0x05dc,0x05dd,
0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x0576,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x3124,0x3124,0x3124,0x3124,0x0488,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x048d,0x0487,0x0487,0x04d6,0x35dc,0x35dd,0x05d4,0x05d5,0x05d4,0x05d5,
0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x3124,0x3124,0x3124,0x3124,0x0490,0x0489,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x3001,0x05d4,0x05d5,0x05dc,0x05dd,0x05dc,0x05dd,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x0576,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x35e6,0x35e5,0x05d4,0x05d5,0x05d4,0x05d5,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x3124,0x3124,0x3124,0x3124,0x3124,0x0490,0x0489,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x3118,0x3119,0x311a,0x3001,0x3001,0x3001,0x3001,0x3001,0x35e6,0x35e5,0x35e4,0x05e5,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x111b,0x313d,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x300d,0x300d,0x300d,0x3001,0x3001,0x3118,0x3121,0x3121,0x3121,0x3119,0x3119,0x311a,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0490,0x0479,0x0489,0x3001,0x3001,0x3001,0x3120,0x3121,0x3121,0x3121,0x3121,0x3121,0x3121,0x311a,0x3001,0x3001,0x3001,0x3001,0x3001,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1123,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x3001,0x3001,0x3001,0x3128,0x3121,0x3121,0x3121,0x3121,0x3129,0x3129,0x312a,0x3001,0x31ce,0x31cf,0x31ce,0x31cf,
0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x0576,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1123,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0490,0x0489,0x3001,0x3001,0x3001,0x3128,0x3129,0x3129,0x312a,0x3001,0x3001,0x3001,0x3001,0x05d6,0x05d5,0x05d4,0x05d5,
0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x31ce,0x31cf,0x05dc,0x05dd,0x05dc,0x05dd,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x112b,0x1145,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0490,0x0479,0x0489,0x0403,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x05d6,0x35d5,0x05d4,0x35d5,0x35d4,0x35d5,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x3001,0x3001,0x3001,0x3001,0x3001,0x31ce,0x31cf,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,
0x1170,0x1170,0x1170,0x1170,0x1572,0x157b,0x0574,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x3001,0x3001,0x3001,0x3001,0x3001,0x05d6,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,
0x1170,0x1170,0x1170,0x1170,0x157a,0x1071,0x057c,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x3001,0x3001,0x3001,0x3001,0x3001,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x35dd,0x05dc,0x05dd,
0x1170,0x1170,0x1170,0x1170,0x1582,0x0479,0x0584,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x112b,0x1145,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0490,0x0479,0x30af,0x30cf,0x0479,0x0489,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x0576,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x05dc,0x35dd,0x05dc,0x35dd,0x05dc,0x05dd,0x05dc,0x05dd,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x0576,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x112b,0x112c,0x1145,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x35dc,0x05dd,0x35dc,0x05dd,0x05dc,0x05dd,0x35dc,0x05dd,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x112b,0x112c,0x1145,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,
0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x112b,0x112c,0x112c,0x1145,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x05dc,0x35dd,0x05dc,0x35dd,0x35dc,0x05dd,0x05dc,0x05dd,
0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x0575,0x0576,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x112b,0x112c,0x112c,0x112c,0x112c,0x112c,0x1145,0x3124,0x3124,0x0488,0x35d4,0x05d5,0x35d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x112b,0x0552,0x0553,0x0577,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x0576,0x0558,0x0559,0x057a,0x05d4,0x05d5,0x05d4,0x05d5,0x35d4,0x05d5,0x35d4,0x05d5,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x057a,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,
};

const MapScreenData	road104_map_data =
{
	MapSizeX_road104,
	MapSizeY_road104,
	road104_OutRangeCell,
	road104_MapData,
	&field_char_data,
	&field_2_char_data
};

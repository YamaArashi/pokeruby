//MapEditNH Ver.3.55 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : field.cell
//Part Cell File Name (512-1023) : field_9.cell

#define	MapSizeX_safari01_2	40
#define	MapSizeY_safari01_2	40

const u16	safari01_2_OutRangeCell[4]={
0x01d4,0x01d5,0x01dc,0x01dd,
};

const u16	safari01_2_MapData[MapSizeX_safari01_2*MapSizeY_safari01_2]={
0x3071,0x0474,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x047d,0x3071,0x3071,0x3071,0x0474,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x0489,0x3071,0x3071,0x3071,0x3071,0x3071,0x3071,0x3071,0x3071,0x3071,0x3071,
0x047c,0x047d,0x3071,0x3071,0x0474,0x04a9,0x04a9,0x04a9,0x04a9,0x047c,0x047c,0x047c,0x047d,0x3071,0x3071,0x3071,0x0474,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x0489,0x3071,0x3071,0x3071,0x3071,0x3071,0x047b,0x047c,0x047c,0x047c,0x047c,0x0489,0x3071,0x3071,0x3071,0x3071,0x3071,
0x04a9,0x04a9,0x047c,0x047c,0x047d,0x0474,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x047c,0x047c,0x047c,0x047d,0x3071,0x3071,0x3071,0x3071,0x3071,0x3071,0x047b,0x047c,0x047c,0x0489,0x3071,0x3071,0x3071,0x3071,0x3071,0x3071,0x3071,0x0473,0x3071,0x3071,0x3071,0x3071,0x3071,
0x3071,0x3071,0x0474,0x04a9,0x04a9,0x047d,0x3071,0x0474,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x0489,0x3071,0x3071,0x3071,0x3071,0x3071,0x3071,0x3071,0x3071,0x3071,0x3071,0x047b,0x047c,0x0489,0x3071,0x3071,0x3071,0x3071,0x3071,0x047b,0x0489,0x3071,0x3071,0x3071,0x3071,
0x047c,0x047c,0x047d,0x3071,0x3071,0x0474,0x047c,0x047d,0x3071,0x0474,0x0491,0x0491,0x04a9,0x0489,0x3071,0x047b,0x047c,0x047c,0x047c,0x047c,0x047c,0x047c,0x047c,0x047c,0x047c,0x047c,0x0489,0x3071,0x047b,0x047c,0x047c,0x047c,0x047c,0x0489,0x3071,0x0473,0x3071,0x3071,0x3071,0x3071,
0x04a9,0x04a9,0x04a9,0x047c,0x047c,0x047d,0x0474,0x0491,0x0479,0x047a,0x300d,0x300d,0x300d,0x0478,0x0479,0x0491,0x0491,0x0491,0x0491,0x0491,0x0491,0x0491,0x0491,0x0491,0x0489,0x3071,0x047b,0x047c,0x04a9,0x04a9,0x0489,0x3071,0x3071,0x0473,0x3071,0x0473,0x3071,0x3071,0x3071,0x3071,
0x3071,0x3071,0x3071,0x3071,0x3071,0x3071,0x0472,0x3001,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x3120,0x34e2,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0490,0x0479,0x0491,0x0491,0x0489,0x3071,0x0473,0x3071,0x3071,0x0473,0x3071,0x047b,0x0489,0x3071,0x3071,0x3071,
0x05f0,0x05f1,0x05f0,0x05f1,0x05f0,0x05f1,0x047a,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x3120,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0490,0x0489,0x0473,0x3071,0x3071,0x0473,0x3071,0x3071,0x0473,0x3071,0x3071,0x3071,
0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d7,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x3128,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x0473,0x3071,0x3071,0x0473,0x3071,0x3071,0x047b,0x047c,0x0489,0x3071,
0x05dc,0x05dd,0x05dc,0x05dd,0x05e4,0x05e7,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x3120,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x0473,0x3071,0x3071,0x047b,0x0489,0x3071,0x3071,0x3071,0x0473,0x3071,
0x05d4,0x05d5,0x05d4,0x05d5,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x3120,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x047b,0x0489,0x3071,0x3071,0x0473,0x3071,0x3071,0x3071,0x0473,0x3071,
0x05dc,0x05dd,0x05dc,0x05dd,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x3120,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x34e2,0x3124,0x0488,0x3071,0x0473,0x3071,0x3071,0x0473,0x3071,0x3071,0x3071,0x047b,0x047c,
0x05d4,0x05d5,0x05d4,0x05d5,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3128,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0490,0x0489,0x0473,0x3071,0x3071,0x047b,0x047c,0x0489,0x3071,0x3071,0x3071,
0x05dc,0x05dd,0x05dc,0x05dd,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3120,0x34e2,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x0473,0x3071,0x3071,0x3071,0x3071,0x0473,0x3071,0x3071,0x3071,
0x05d4,0x05d5,0x05d4,0x05d5,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3128,0x3129,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x047b,0x0489,0x3071,0x3071,0x3071,0x047b,0x047c,0x047c,0x047c,
0x05dc,0x05dd,0x05dc,0x05dd,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3128,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0490,0x0489,0x0473,0x3071,0x3071,0x3071,0x3071,0x3071,0x3071,0x3071,
0x05d4,0x05d5,0x05d4,0x05d5,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0468,0x50d3,0x5002,0x5002,0x5002,0x5002,0x5002,0x5002,0x50d4,0x0482,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x0473,0x3071,0x3071,0x3071,0x3071,0x3071,0x3071,0x3071,
0x05dc,0x05dd,0x05e4,0x05e7,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0468,0x50d3,0x5002,0x5001,0x5001,0x5001,0x5118,0x5119,0x511a,0x5001,0x5001,0x0472,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x047b,0x047c,0x0489,0x3071,0x3071,0x3071,0x3071,0x3071,
0x05d4,0x05d5,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0470,0x5001,0x5001,0x5001,0x5118,0x5119,0x5121,0x5121,0x512a,0x5001,0x5001,0x0472,0x3124,0x04e2,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0490,0x0491,0x0489,0x047b,0x0479,0x0479,0x0479,0x0479,0x0479,
0x05dc,0x05dd,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0468,0x50d3,0x5002,0x5001,0x5118,0x5119,0x5121,0x5121,0x5121,0x512a,0x5001,0x5001,0x5001,0x50d4,0x5002,0x50d4,0x0482,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x31ce,0x31cf,0x31ce,0x31cf,0x31ce,0x31cf,
0x05d4,0x05d5,0x3001,0x3001,0x3001,0x3001,0x3001,0x0468,0x50d3,0x5002,0x5001,0x5001,0x5118,0x5121,0x5121,0x5121,0x5121,0x512a,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x0472,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x05d6,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,
0x05dc,0x05dd,0x04e0,0x3001,0x3001,0x3001,0x3001,0x0470,0x5001,0x5001,0x5001,0x5118,0x5121,0x5121,0x5121,0x5121,0x5122,0x5001,0x5001,0x046e,0x0487,0x0487,0x5317,0x046f,0x5001,0x0472,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x04e2,0x0488,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,
0x05d4,0x05d5,0x3001,0x3001,0x3001,0x3001,0x3001,0x0470,0x5001,0x5001,0x5001,0x5128,0x5129,0x5121,0x04e2,0x5121,0x512a,0x5001,0x5001,0x0486,0x5001,0x5001,0x531f,0x0485,0x04e0,0x0472,0x04e2,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,
0x05dc,0x05dd,0x31ce,0x31cf,0x3001,0x3001,0x3001,0x0470,0x5001,0x5001,0x5001,0x5001,0x5001,0x5128,0x5129,0x512a,0x5001,0x5001,0x0474,0x06b3,0x0487,0x0487,0x0323,0x06b4,0x0479,0x047a,0x3120,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,
0x05d4,0x05d5,0x05d4,0x05d7,0x3001,0x3001,0x3001,0x0478,0x0479,0x00af,0x00cf,0x0479,0x0489,0x5001,0x5001,0x5001,0x5001,0x5001,0x0472,0x3001,0x3001,0x3001,0x3327,0x3001,0x3001,0x3001,0x3128,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0488,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,
0x05dc,0x05dd,0x05dc,0x05dd,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0470,0x51ce,0x51cf,0x5001,0x5001,0x5001,0x0472,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3128,0x3129,0x3129,0x3129,0x3129,0x3129,0x0488,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,
0x05d4,0x05d5,0x05d4,0x05d5,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0470,0x05d6,0x05d7,0x5001,0x5001,0x5001,0x50d4,0x046a,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x300d,0x300d,0x300d,0x300d,0x0710,0x0488,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,
0x05dc,0x05dd,0x05dc,0x05dd,0x04e0,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0470,0x05dc,0x05dd,0x5001,0x5001,0x5001,0x5001,0x0472,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x300d,0x300d,0x300d,0x300d,0x300d,0x3318,0x0470,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,
0x05d4,0x05d5,0x05d4,0x05d5,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0470,0x05d4,0x05d5,0x5001,0x5001,0x5001,0x5001,0x0472,0x04e0,0x3001,0x3001,0x3001,0x3001,0x3001,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x0470,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,
0x05dc,0x05dd,0x05dc,0x05dd,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0470,0x05e6,0x05e7,0x5001,0x5001,0x5001,0x5001,0x5002,0x5002,0x5002,0x5002,0x5002,0x5002,0x046a,0x300d,0x300d,0x300d,0x31c6,0x31c7,0x31c6,0x31c7,0x06cd,0x05f3,0x05f2,0x05f3,0x05f2,0x05f3,0x05e5,
0x05d4,0x05d5,0x05d4,0x05d5,0x300d,0x300d,0x3001,0x3001,0x3001,0x3001,0x0468,0x50d3,0x5002,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5002,0x5002,0x5002,0x071a,0x05fc,0x05fd,0x05fc,0x05fd,0x05fc,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x5001,
0x05dc,0x05dd,0x05e4,0x05e7,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x0470,0x500d,0x500d,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x05e6,0x05e5,0x05e4,0x05e5,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x5001,
0x05d4,0x05d5,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x0468,0x50d3,0x5002,0x500d,0x500d,0x500d,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x05d4,0x05d5,0x05d6,0x05d5,0x05d4,0x05d5,0x0474,
0x05dc,0x05dd,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x0470,0x500d,0x500d,0x500d,0x500d,0x500d,0x500d,0x5001,0x5001,0x51ce,0x51cf,0x51ce,0x51cf,0x51ce,0x51cf,0x51ce,0x51cf,0x51ce,0x51cf,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x0472,
0x05d4,0x05d5,0x300d,0x300d,0x300d,0x0710,0x300d,0x300d,0x0470,0x500d,0x500d,0x500d,0x500d,0x500d,0x500d,0x5001,0x5001,0x05d6,0x05d7,0x05d6,0x05d7,0x05d6,0x05d7,0x05d6,0x05d7,0x05d6,0x05d7,0x5001,0x5001,0x5001,0x5001,0x5001,0x5001,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x0472,
0x05dc,0x05dd,0x300d,0x300d,0x300d,0x3318,0x300d,0x300d,0x0470,0x500d,0x500d,0x500d,0x500d,0x500d,0x500d,0x5001,0x5001,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x51ce,0x51cf,0x5001,0x5001,0x5001,0x5001,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x0472,
0x05d4,0x05d5,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x0470,0x500d,0x500d,0x500d,0x500d,0x500d,0x500d,0x5001,0x5001,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d7,0x5001,0x5001,0x5001,0x5001,0x05d6,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x0472,
0x05dc,0x05dd,0x31c6,0x31c7,0x300d,0x300d,0x300d,0x300d,0x0470,0x51c6,0x51c7,0x51c6,0x51c7,0x500d,0x5001,0x51ce,0x51cf,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x51ce,0x51cf,0x5001,0x5001,0x05e6,0x05e5,0x05dc,0x05dd,0x05dc,0x05dd,0x0472,
0x05d4,0x05d5,0x05d4,0x05d7,0x300d,0x300d,0x300d,0x300d,0x0470,0x05d6,0x05d5,0x05d4,0x05d7,0x500d,0x5001,0x05d6,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d7,0x5001,0x5001,0x5001,0x5001,0x05d4,0x05d5,0x05d4,0x05d5,0x0472,
0x05dc,0x05dd,0x05dc,0x05dd,0x31c6,0x31c7,0x31c6,0x31c7,0x0470,0x05dc,0x05dd,0x05dc,0x05dd,0x51ce,0x51cf,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x5001,0x5001,0x5001,0x5001,0x05dc,0x05dd,0x05dc,0x05dd,0x0472,
};

const MapScreenData	safari01_2_map_data =
{
	MapSizeX_safari01_2,
	MapSizeY_safari01_2,
	safari01_2_OutRangeCell,
	safari01_2_MapData,
	&field_char_data,
	&field_9_char_data
};

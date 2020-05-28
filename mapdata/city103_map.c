//MapEditNH Ver.3.55 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : field.cell
//Part Cell File Name (512-1023) : field_5.cell

#define	MapSizeX_city103	40
#define	MapSizeY_city103	20

const u16	city103_OutRangeCell[4]={
0x0170,0x0170,0x0170,0x0170,
};

const u16	city103_MapData[MapSizeX_city103*MapSizeY_city103]={
0x0688,0x0401,0x3004,0x3001,0x3004,0x3001,0x3004,0x3004,0x3001,0x3004,0x3001,0x3001,0x068a,0x3001,0x3001,0x3108,0x305e,0x310a,0x3001,0x3001,0x0688,0x0401,0x040e,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,
0x0688,0x0401,0x3004,0x3001,0x3004,0x31aa,0x31ab,0x31ab,0x31ab,0x31ab,0x31ac,0x3001,0x068a,0x3001,0x3001,0x3108,0x305e,0x310a,0x3001,0x3001,0x0688,0x3001,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x0416,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,
0x0688,0x3004,0x3001,0x3004,0x3004,0x05b2,0x05b3,0x05b3,0x05b3,0x05b3,0x05b4,0x3004,0x068a,0x3001,0x3001,0x3108,0x305e,0x310a,0x3001,0x3001,0x0688,0x0448,0x0449,0x044a,0x044b,0x0680,0x0691,0x0691,0x0691,0x0691,0x0691,0x0691,0x0691,0x0682,0x0683,0x0684,0x0684,0x0684,0x0685,0x04c6,
0x0688,0x0401,0x3004,0x3004,0x0401,0x05b8,0x05b9,0x05ba,0x05b3,0x05bb,0x05bc,0x3001,0x068a,0x3001,0x3001,0x3108,0x305e,0x310a,0x3001,0x3001,0x0688,0x0450,0x0451,0x0452,0x0453,0x0688,0x0698,0x0699,0x069a,0x3001,0x0698,0x0699,0x069a,0x068a,0x068b,0x068c,0x068c,0x068c,0x068d,0x04c6,
0x0673,0x0691,0x0691,0x0691,0x0691,0x05c0,0x05c1,0x05c2,0x05c5,0x05c3,0x35c4,0x0691,0x0692,0x3001,0x3001,0x3108,0x305e,0x310a,0x3001,0x3001,0x0690,0x0458,0x0459,0x045a,0x045b,0x3688,0x0698,0x0699,0x069a,0x3001,0x0698,0x0699,0x069a,0x068a,0x0693,0x06a4,0x06a5,0x066f,0x0695,0x04c6,
0x0688,0x3001,0x3001,0x3001,0x3001,0x31c8,0x31c9,0x05ca,0x05cd,0x05cb,0x31cc,0x3130,0x3001,0x3001,0x3001,0x3108,0x305e,0x310a,0x3001,0x3001,0x3001,0x0460,0x0461,0x0462,0x0463,0x3690,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0692,0x069b,0x06ac,0x06ad,0x0677,0x069d,0x04c6,
0x36b2,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3100,0x305e,0x3102,0x3001,0x0531,0x3001,0x3001,0x3001,0x3108,0x305e,0x310a,0x3001,0x3001,0x3001,0x3001,0x3108,0x310a,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0403,0x3001,0x3108,0x310a,0x3001,0x3001,0x0416,
0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3108,0x305e,0x310a,0x3001,0x3001,0x3001,0x3001,0x3100,0x305e,0x305e,0x305e,0x3102,0x0403,0x3001,0x3001,0x3108,0x310a,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3108,0x310a,0x3001,0x3001,0x3001,
0x3100,0x3101,0x3101,0x3101,0x3101,0x3101,0x3101,0x305e,0x305e,0x305e,0x3101,0x3101,0x3101,0x3101,0x305e,0x305e,0x305e,0x305e,0x305e,0x3101,0x3101,0x3101,0x305e,0x305e,0x3101,0x3101,0x3101,0x3101,0x3101,0x3101,0x3101,0x3101,0x3101,0x3101,0x3101,0x305e,0x305e,0x3101,0x3101,0x3102,
0x3110,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x305e,0x305e,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x305e,0x305e,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3112,
0x3001,0x3001,0x3001,0x3001,0x3001,0x32d8,0x32d9,0x32d9,0x32d9,0x32d9,0x32d9,0x32dc,0x3108,0x310a,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3108,0x310a,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,
0x36ba,0x3001,0x3001,0x3001,0x3001,0x06e0,0x06e1,0x06e1,0x06e1,0x06e1,0x06e1,0x06e4,0x3108,0x310a,0x3001,0x3001,0x3001,0x3001,0x3283,0x3284,0x3284,0x3285,0x3028,0x3029,0x3029,0x302b,0x3001,0x3001,0x3108,0x310a,0x3001,0x3283,0x3284,0x3284,0x3284,0x3285,0x327e,0x32a7,0x32a7,0x327f,
0x0688,0x3001,0x3001,0x3001,0x3001,0x06e8,0x06db,0x06e9,0x06ea,0x06eb,0x06db,0x06ec,0x3108,0x310a,0x0680,0x0691,0x0691,0x0691,0x068b,0x068c,0x068c,0x068d,0x0430,0x0431,0x0432,0x0433,0x3001,0x3001,0x3108,0x310a,0x3001,0x068b,0x068c,0x068c,0x068c,0x068d,0x0686,0x06af,0x06af,0x0687,
0x0688,0x3001,0x3001,0x3001,0x3001,0x06d1,0x06e3,0x06d2,0x02d3,0x06da,0x06e3,0x06e2,0x3108,0x310a,0x0688,0x3004,0x3004,0x3004,0x0693,0x06a4,0x066f,0x0695,0x0438,0x0439,0x043a,0x043b,0x3001,0x3001,0x3108,0x310a,0x3001,0x06a0,0x06a4,0x06a1,0x06a3,0x06a2,0x068e,0x06b7,0x06b7,0x068f,
0x0690,0x0691,0x0691,0x0691,0x0691,0x0691,0x0682,0x3320,0x3001,0x3321,0x3001,0x3001,0x3108,0x310a,0x0688,0x3001,0x3001,0x3001,0x069b,0x06ac,0x0677,0x069d,0x0460,0x0441,0x0442,0x0443,0x3001,0x3001,0x3108,0x310a,0x3001,0x06a8,0x06ac,0x06a9,0x06ab,0x06aa,0x0696,0x06a6,0x06a6,0x0697,
0x040e,0x040e,0x3001,0x3001,0x3001,0x3001,0x068a,0x3001,0x3001,0x3001,0x3001,0x0403,0x3108,0x310a,0x0688,0x3100,0x3101,0x3101,0x3101,0x305e,0x3101,0x3101,0x3101,0x305e,0x3101,0x3101,0x3101,0x3101,0x305e,0x305e,0x3101,0x3101,0x305e,0x3102,0x3001,0x300e,0x069e,0x069c,0x069c,0x069f,
0x04c6,0x04c6,0x040e,0x040e,0x040e,0x3001,0x068a,0x3001,0x3001,0x3001,0x3001,0x3001,0x3110,0x3112,0x0688,0x3108,0x305e,0x305e,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3111,0x3112,0x3001,0x04c6,0x040e,0x040e,0x3001,0x3001,
0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x040e,0x068a,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0688,0x3108,0x305e,0x310a,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x04c6,0x0416,0x0416,0x3001,0x3001,
0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x06b1,0x0691,0x0691,0x0691,0x0691,0x0691,0x0691,0x0691,0x36b2,0x3108,0x305e,0x310a,0x3001,0x0691,0x0691,0x0691,0x0691,0x0691,0x0691,0x040e,0x040e,0x0691,0x0691,0x0691,0x0691,0x0691,0x0691,0x3001,0x300e,0x04c6,0x1188,0x1189,0x1189,0x1189,
0x04c7,0x04c6,0x04c6,0x04c6,0x04c6,0x04c6,0x040e,0x040e,0x040e,0x3001,0x040e,0x0541,0x3001,0x3001,0x3001,0x3110,0x3111,0x3112,0x3001,0x0539,0x040e,0x040e,0x040e,0x040e,0x040e,0x04c6,0x04c6,0x300e,0x3001,0x300e,0x300e,0x300e,0x300e,0x300e,0x04c6,0x04c6,0x1190,0x1170,0x1170,0x1170,
};

const MapScreenData	city103_map_data =
{
	MapSizeX_city103,
	MapSizeY_city103,
	city103_OutRangeCell,
	city103_MapData,
	&field_char_data,
	&field_5_char_data
};

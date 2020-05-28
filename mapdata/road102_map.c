//MapEditNH Ver.3.55 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : field.cell
//Part Cell File Name (512-1023) : field_1.cell

#define	MapSizeX_road102	50
#define	MapSizeY_road102	20

const u16	road102_OutRangeCell[4]={
0x01d4,0x01d5,0x01dc,0x01dd,
};

const u16	road102_MapData[MapSizeX_road102*MapSizeY_road102]={
0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,
0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05e4,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05e4,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,
0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0403,0x3001,0x3001,0x3001,0x3001,0x3001,0x328c,0x368d,0x368d,0x328e,0x3001,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x300d,0x300d,0x300d,0x300d,0x10b0,0x10b1,0x10b1,0x10b2,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,
0x05dc,0x05dd,0x05e4,0x05e5,0x05e4,0x05e5,0x05e4,0x05e7,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x31d0,0x31d1,0x31d1,0x31d2,0x3001,0x3001,0x3001,0x3001,0x3001,0x3113,0x3114,0x3114,0x3115,0x3001,0x05e6,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05e4,0x05e7,0x300d,0x300d,0x300d,0x300d,0x10b8,0x10a1,0x10a1,0x10ba,0x05e4,0x05e5,0x05dc,0x05dd,0x05dc,0x05dd,
0x05d4,0x05d5,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x31d0,0x31d1,0x31d9,0x31d9,0x31d9,0x31d9,0x31d1,0x31d2,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3004,0x04ff,0x3001,0x300d,0x300d,0x300d,0x300d,0x10b8,0x10a1,0x10a1,0x10c2,0x10b1,0x10b2,0x05d4,0x05d5,0x05d4,0x05d5,
0x05e4,0x05e7,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x31d0,0x31d9,0x31d9,0x3271,0x3279,0x31e1,0x31e1,0x31e1,0x31e2,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x31ce,0x31cf,0x3004,0x3001,0x0486,0x3001,0x3001,0x300d,0x300d,0x300d,0x10b8,0x10a1,0x10a1,0x10a1,0x10a1,0x10ba,0x05dc,0x05dd,0x05dc,0x05dd,
0x3001,0x3001,0x3001,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x31d8,0x31d9,0x31e2,0x05d6,0x05d7,0x04d5,0x04d6,0x3001,0x3001,0x04d5,0x0487,0x0487,0x0487,0x0487,0x04d6,0x31ce,0x31cf,0x31ce,0x31cf,0x05d6,0x05d7,0x3001,0x3004,0x0486,0x3001,0x3001,0x3001,0x300d,0x300d,0x10b8,0x10a1,0x10a1,0x10a1,0x10a1,0x10ba,0x05d4,0x05d5,0x05d4,0x05d5,
0x3001,0x3001,0x3001,0x3001,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x31e0,0x3272,0x31cf,0x05dc,0x05dd,0x3001,0x3001,0x3001,0x3001,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x05d6,0x05d5,0x05d4,0x05d5,0x05dc,0x05dd,0x31ce,0x31cf,0x0486,0x3001,0x3001,0x3001,0x3001,0x3001,0x3002,0x3002,0x3002,0x3002,0x3002,0x3002,0x05e6,0x05e5,0x05dc,0x05dd,
0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x05d6,0x05d5,0x05d4,0x05d5,0x3001,0x3001,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x05dc,0x05dd,0x05dc,0x05dd,0x05d4,0x05d5,0x05d4,0x05d7,0x067b,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x05d4,0x05d5,
0x31ce,0x31cf,0x31ce,0x31cf,0x31ce,0x31cf,0x31ce,0x31cf,0x3001,0x3001,0x3001,0x3001,0x05dc,0x05dd,0x05dc,0x05dd,0x3001,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x05d4,0x05d5,0x05d4,0x05d5,0x05dc,0x05dd,0x05dc,0x05dd,0x31ce,0x31cf,0x3001,0x3001,0x3001,0x3001,0x0403,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x05e6,0x05e5,
0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d7,0x3001,0x3001,0x31ce,0x31cf,0x05d4,0x05d5,0x05d4,0x05d5,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x3001,0x05dc,0x05dd,0x05dc,0x05dd,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d7,0x3001,0x3001,0x3001,0x3001,0x3001,0x31d0,0x31d1,0x31d1,0x31d2,0x3001,0x3001,0x3001,0x3001,0x3001,
0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05e4,0x05e7,0x3001,0x3001,0x05d6,0x05d5,0x05dc,0x05dd,0x05dc,0x05dd,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x05d4,0x05d5,0x05d4,0x05d5,0x05e4,0x05e5,0x05dc,0x05dd,0x05dc,0x05dd,0x3001,0x3001,0x31d0,0x31d1,0x31d1,0x31d9,0x31d9,0x31d9,0x31da,0x3001,0x3001,0x3001,0x31ce,0x31cf,
0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x300d,0x300d,0x3001,0x3001,0x05e6,0x05e5,0x05d4,0x05d5,0x05d4,0x05d5,0x300d,0x300d,0x300d,0x3001,0x3001,0x31ce,0x31cf,0x3001,0x3001,0x3001,0x05e6,0x05e5,0x05e4,0x05e7,0x300d,0x300d,0x05d4,0x05d5,0x05d4,0x05d5,0x31d0,0x31d1,0x31d9,0x31d9,0x31d9,0x31d9,0x31d9,0x31e1,0x31e2,0x3001,0x3001,0x3001,0x05d6,0x05d5,
0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x300d,0x300d,0x04d5,0x0487,0x0487,0x04d6,0x05dc,0x05dd,0x05dc,0x05dd,0x31c6,0x31c7,0x3001,0x3001,0x3001,0x05d6,0x05d7,0x31ce,0x31cf,0x3001,0x3001,0x3001,0x300d,0x300d,0x300d,0x300d,0x05e6,0x05e5,0x05e4,0x05e7,0x31d8,0x31d9,0x31d9,0x31d9,0x31d9,0x31e1,0x31e2,0x3001,0x31ce,0x31cf,0x31ce,0x31cf,0x05dc,0x05dd,
0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d7,0x3001,0x3001,0x3001,0x05e6,0x05e5,0x05d4,0x05d7,0x3001,0x3001,0x3001,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x31d0,0x31d9,0x31d9,0x31e1,0x31e1,0x31e2,0x3001,0x3001,0x3001,0x05d6,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,
0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x300d,0x300d,0x300d,0x3001,0x31ce,0x31cf,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x3001,0x3001,0x300d,0x300d,0x300d,0x05e6,0x05e7,0x3001,0x3001,0x3001,0x3001,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x31e0,0x31e1,0x31e2,0x3001,0x3001,0x31ce,0x31cf,0x31ce,0x31cf,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,
0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x300d,0x300d,0x300d,0x300d,0x05d6,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x3001,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x05d6,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,
0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x31c6,0x31c7,0x31c6,0x31c7,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x31ce,0x31c7,0x31c6,0x31c7,0x31c6,0x31c7,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x3001,0x3001,0x31ce,0x31cf,0x31ce,0x31cf,0x31ce,0x31cf,0x31ce,0x31cf,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,
0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d7,0x300d,0x300d,0x300d,0x300d,0x3001,0x3001,0x3001,0x3001,0x05d6,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,
0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x31c6,0x31c7,0x31c6,0x31c7,0x31ce,0x31cf,0x31ce,0x31cf,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,
};

const MapScreenData	road102_map_data =
{
	MapSizeX_road102,
	MapSizeY_road102,
	road102_OutRangeCell,
	road102_MapData,
	&field_char_data,
	&field_1_char_data
};

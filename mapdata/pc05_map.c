//MapEditNH Ver.3.48 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : room.cell
//Part Cell File Name (512-1023) : trade.cell

#define	MapSizeX_pc05	20
#define	MapSizeY_pc05	10

const u16	pc05_OutRangeCell[4]={
0x0201,0x0201,0x0201,0x0201,
};

const u16	pc05_MapData[MapSizeX_pc05*MapSizeY_pc05]={
0x0601,0x0601,0x0601,0x0690,0x0691,0x0697,0x0697,0x0697,0x0694,0x0695,0x0695,0x0696,0x0697,0x0697,0x0697,0x0692,0x0693,0x0601,0x0601,0x0601,
0x0601,0x0601,0x0601,0x0698,0x0699,0x069f,0x069f,0x069f,0x069c,0x069d,0x069d,0x069e,0x069f,0x069f,0x069f,0x069a,0x069b,0x0601,0x0601,0x0601,
0x0601,0x0601,0x0601,0x06a0,0x32a1,0x32a7,0x32a7,0x32a7,0x32a4,0x32a5,0x32a5,0x32a6,0x32a7,0x32a7,0x32a7,0x32a2,0x06a3,0x0601,0x0601,0x0601,
0x0601,0x0601,0x0601,0x06a8,0x32a9,0x32c4,0x32c4,0x32b4,0x32c4,0x32c4,0x32c4,0x32c4,0x32b6,0x32c4,0x32c4,0x32aa,0x06ab,0x0601,0x0601,0x0601,
0x0601,0x0601,0x0601,0x06a8,0x32a9,0x32c4,0x32ac,0x06bc,0x06b8,0x06b9,0x06ba,0x06bb,0x06be,0x32ae,0x32c4,0x32aa,0x06ab,0x0601,0x0601,0x0601,
0x0601,0x0601,0x0601,0x06a8,0x32a9,0x32c4,0x32c4,0x32b5,0x06c0,0x06c1,0x06c2,0x06c3,0x32b7,0x32c4,0x32c4,0x32aa,0x06ab,0x0601,0x0601,0x0601,
0x0601,0x0601,0x0601,0x06a8,0x32a9,0x32c4,0x32ad,0x06bd,0x06c8,0x06c9,0x06ca,0x06cb,0x06bf,0x32af,0x32c4,0x32aa,0x06ab,0x0601,0x0601,0x0601,
0x0601,0x0601,0x0601,0x06a8,0x32a9,0x32c4,0x32c4,0x32c6,0x32c6,0x32c6,0x32c6,0x32c6,0x32c6,0x32c4,0x32c4,0x32aa,0x06ab,0x0601,0x0601,0x0601,
0x0601,0x0601,0x0601,0x06b0,0x32b1,0x32c4,0x32c4,0x32c4,0x32c4,0x32c4,0x32c4,0x32c4,0x32c4,0x32c4,0x32c4,0x32b2,0x06b3,0x0601,0x0601,0x0601,
0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x3222,0x3222,0x3222,0x3222,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,
};

const MapScreenData	pc05_map_data =
{
	MapSizeX_pc05,
	MapSizeY_pc05,
	pc05_OutRangeCell,
	pc05_MapData,
	&room_char_data,
	&trade_char_data
};

//MapEditNH Ver.3.48 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : room.cell
//Part Cell File Name (512-1023) : fdshop.cell

#define	MapSizeX_gate01_1	15
#define	MapSizeY_gate01_1	6

const u16	gate01_1_OutRangeCell[4]={
0x0001,0x0001,0x0001,0x0001,
};

const u16	gate01_1_MapData[MapSizeX_gate01_1*MapSizeY_gate01_1]={
0x0688,0x0688,0x0688,0x0688,0x0688,0x0688,0x068d,0x0688,0x068b,0x0688,0x0688,0x0688,0x0688,0x0688,0x0688,
0x0690,0x0690,0x0690,0x0690,0x0690,0x069c,0x0695,0x0690,0x0693,0x0690,0x069c,0x0690,0x0690,0x0690,0x0690,
0x3278,0x3270,0x3270,0x3270,0x3270,0x36a8,0x3299,0x3298,0x3299,0x3299,0x36a9,0x3278,0x3270,0x3270,0x3270,
0x3280,0x3268,0x3268,0x3268,0x3268,0x36b0,0x36a1,0x36a0,0x36a1,0x36a1,0x36b1,0x3280,0x3268,0x3268,0x3268,
0x325c,0x3268,0x3268,0x3268,0x3268,0x3270,0x3259,0x325a,0x3259,0x325a,0x3270,0x3279,0x3268,0x3268,0x326c,
0x3664,0x0216,0x0217,0x3268,0x3268,0x3268,0x3661,0x3662,0x3661,0x3662,0x3268,0x3268,0x0216,0x0217,0x3674,
};

const MapScreenData	gate01_1_map_data =
{
	MapSizeX_gate01_1,
	MapSizeY_gate01_1,
	gate01_1_OutRangeCell,
	gate01_1_MapData,
	&room_char_data,
	&fdshop_char_data
};

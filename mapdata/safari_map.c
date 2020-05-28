//MapEditNH Ver.3.50 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : room.cell
//Part Cell File Name (512-1023) : fdshop.cell

#define	MapSizeX_safari	18
#define	MapSizeY_safari	14

const u16	safari_OutRangeCell[4]={
0x0001,0x0001,0x0001,0x0001,
};

const u16	safari_MapData[MapSizeX_safari*MapSizeY_safari]={
0x0688,0x0688,0x0688,0x0688,0x0688,0x0688,0x0688,0x0688,0x0688,0x068d,0x0688,0x0688,0x065d,0x0688,0x0688,0x068b,0x0688,0x0688,
0x0690,0x0690,0x0690,0x0690,0x0690,0x0690,0x069c,0x0690,0x0690,0x0695,0x0690,0x069c,0x0404,0x0690,0x0690,0x0693,0x0690,0x0690,
0x3278,0x3270,0x3270,0x3270,0x3270,0x3270,0x06a8,0x32d4,0x3298,0x3299,0x3299,0x06a9,0x3265,0x3278,0x3270,0x3270,0x3270,0x3270,
0x3280,0x3268,0x3268,0x3268,0x3268,0x3268,0x06b0,0x06a1,0x06a0,0x06a1,0x06a1,0x06b1,0x3280,0x3268,0x32c8,0x3268,0x3268,0x32ba,
0x325c,0x3268,0x3268,0x3268,0x3268,0x3268,0x3271,0x3259,0x325a,0x3259,0x325a,0x3270,0x3279,0x3268,0x3268,0x3268,0x3268,0x32ba,
0x3664,0x3268,0x0216,0x0217,0x3268,0x3268,0x3268,0x0661,0x0662,0x0661,0x0662,0x3268,0x3268,0x3268,0x3268,0x3268,0x3268,0x3268,
0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x3280,0x3268,0x3268,0x3268,0x32c3,0x32c3,
0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x325c,0x3268,0x3268,0x3268,0x06d0,0x06d1,
0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0664,0x3268,0x3268,0x3268,0x06d0,0x3278,
0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x3280,0x3268,0x3268,0x3268,0x06d0,0x3280,
0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x3280,0x3268,0x3268,0x3268,0x06d0,0x32d2,
0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x3280,0x3268,0x3268,0x3268,0x06d1,0x06d1,
0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x325c,0x3268,0x3268,0x3268,0x3271,0x32d3,
0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x3664,0x3268,0x0216,0x0217,0x3268,0x3674,
};

const MapScreenData	safari_map_data =
{
	MapSizeX_safari,
	MapSizeY_safari,
	safari_OutRangeCell,
	safari_MapData,
	&room_char_data,
	&fdshop_char_data
};

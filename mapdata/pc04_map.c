//MapEditNH Ver.3.55 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : room.cell
//Part Cell File Name (512-1023) : trade.cell

#define	MapSizeX_pc04	12
#define	MapSizeY_pc04	9

const u16	pc04_OutRangeCell[4]={
0x0201,0x0201,0x0201,0x0201,
};

const u16	pc04_MapData[MapSizeX_pc04*MapSizeY_pc04]={
0x0630,0x0631,0x0637,0x0634,0x0635,0x0618,0x0618,0x0636,0x0637,0x0634,0x0632,0x0633,
0x0638,0x0639,0x063f,0x063c,0x063d,0x0620,0x0620,0x063e,0x063f,0x063c,0x063a,0x063b,
0x0640,0x0641,0x0647,0x0644,0x0645,0x0628,0x0628,0x0646,0x0647,0x0644,0x0642,0x0643,
0x0648,0x3249,0x322e,0x3202,0x3203,0x3204,0x3205,0x3206,0x3207,0x322e,0x324a,0x064b,
0x0650,0x3210,0x3208,0x320a,0x320b,0x320c,0x320d,0x320e,0x320f,0x3208,0x3211,0x0653,
0x0650,0x3251,0x322b,0x3212,0x3213,0x0614,0x0615,0x3216,0x3217,0x322b,0x3252,0x0653,
0x0650,0x3210,0x3208,0x321a,0x321b,0x321c,0x321d,0x321e,0x321f,0x3208,0x3211,0x0653,
0x0658,0x3259,0x3208,0x3208,0x3223,0x3224,0x3225,0x3226,0x3208,0x3208,0x325a,0x065b,
0x0601,0x0601,0x0601,0x0601,0x0601,0x322c,0x322d,0x0601,0x0601,0x0601,0x0601,0x0601,
};

const MapScreenData	pc04_map_data =
{
	MapSizeX_pc04,
	MapSizeY_pc04,
	pc04_OutRangeCell,
	pc04_MapData,
	&room_char_data,
	&trade_char_data
};

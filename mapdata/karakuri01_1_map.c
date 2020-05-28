//MapEditNH Ver.3.44 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : room.cell
//Part Cell File Name (512-1023) : minka.cell

#define	MapSizeX_karakuri01_1	12
#define	MapSizeY_karakuri01_1	8

const u16	karakuri01_1_OutRangeCell[4]={
0x0201,0x0201,0x0201,0x0201,
};

const u16	karakuri01_1_MapData[MapSizeX_karakuri01_1*MapSizeY_karakuri01_1]={
0x0615,0x0615,0x0615,0x0617,0x0612,0x0613,0x0614,0x0615,0x0617,0x0615,0x06be,0x06bf,
0x061d,0x061d,0x061d,0x061f,0x061a,0x361b,0x061c,0x061d,0x061f,0x06a0,0x06c6,0x06c7,
0x3221,0x3221,0x3221,0x3221,0x3221,0x3221,0x3221,0x3221,0x3221,0x32a8,0x32ce,0x32cf,
0x3221,0x3229,0x3229,0x3229,0x3244,0x064e,0x064f,0x3244,0x3229,0x3229,0x3229,0x3229,
0x3319,0x3229,0x3229,0x3229,0x3244,0x0656,0x0657,0x3244,0x3229,0x3229,0x3229,0x331a,
0x3727,0x3229,0x3229,0x3229,0x3229,0x3229,0x3229,0x3229,0x3229,0x3229,0x3229,0x3722,
0x3320,0x3318,0x3318,0x3318,0x3318,0x3318,0x3318,0x3318,0x3318,0x3318,0x3318,0x3318,
0x3323,0x331b,0x331b,0x331b,0x331b,0x3210,0x3211,0x331b,0x331b,0x331b,0x331b,0x331b,
};

const MapScreenData	karakuri01_1_map_data =
{
	MapSizeX_karakuri01_1,
	MapSizeY_karakuri01_1,
	karakuri01_1_OutRangeCell,
	karakuri01_1_MapData,
	&room_char_data,
	&minka_char_data
};

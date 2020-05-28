//MapEditNH Ver.3.55 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : room.cell
//Part Cell File Name (512-1023) : gym_03.cell

#define	MapSizeX_gym03_1	10
#define	MapSizeY_gym03_1	21

const u16	gym03_1_OutRangeCell[4]={
0x0001,0x0001,0x0001,0x0001,
};

const u16	gym03_1_MapData[MapSizeX_gym03_1*MapSizeY_gym03_1]={
0x0401,0x0401,0x0626,0x0614,0x0614,0x0614,0x0614,0x0627,0x0401,0x0401,
0x0401,0x0401,0x061f,0x0611,0x0611,0x0611,0x0611,0x061e,0x0401,0x0401,
0x0401,0x0401,0x061f,0x3619,0x3619,0x3619,0x3619,0x061e,0x0401,0x0401,
0x0401,0x0401,0x061f,0x3201,0x3201,0x3201,0x3201,0x061e,0x0401,0x0401,
0x0401,0x0401,0x061f,0x3201,0x3201,0x3201,0x3201,0x061e,0x0401,0x0401,
0x0401,0x0401,0x061f,0x3201,0x3201,0x3201,0x3201,0x061e,0x0401,0x0401,
0x0614,0x0614,0x0615,0x3201,0x3201,0x3201,0x3201,0x0613,0x0614,0x0614,
0x061c,0x061c,0x061d,0x3210,0x3220,0x3221,0x3210,0x061b,0x061c,0x061c,
0x3202,0x3202,0x3202,0x0640,0x0628,0x0629,0x0618,0x3209,0x3202,0x3202,
0x3205,0x3201,0x3201,0x0648,0x3201,0x3201,0x3201,0x3201,0x3201,0x320b,
0x3210,0x3232,0x3233,0x3650,0x3232,0x3233,0x3210,0x3201,0x3201,0x0613,
0x0618,0x323a,0x323b,0x0643,0x323a,0x323b,0x0640,0x3201,0x3205,0x061b,
0x320d,0x3201,0x3201,0x321a,0x3201,0x3201,0x0648,0x320b,0x320c,0x320e,
0x0615,0x3201,0x3201,0x3251,0x3220,0x3221,0x3650,0x0613,0x0614,0x0614,
0x061d,0x3201,0x3201,0x0618,0x0628,0x0629,0x0618,0x061b,0x061c,0x061c,
0x3202,0x3201,0x3201,0x3201,0x3205,0x3201,0x3201,0x3209,0x3202,0x3202,
0x3201,0x3201,0x3201,0x3201,0x3201,0x3201,0x3201,0x3201,0x3201,0x3201,
0x320f,0x3217,0x3201,0x320a,0x3201,0x3201,0x320a,0x3201,0x3216,0x320f,
0x0401,0x061f,0x3201,0x0612,0x3201,0x3201,0x0612,0x3201,0x061e,0x0401,
0x0401,0x061f,0x3201,0x3202,0x3201,0x3201,0x3202,0x3201,0x061e,0x0401,
0x0401,0x061f,0x3201,0x3201,0x0203,0x0204,0x3201,0x3201,0x061e,0x0401,
};

const MapScreenData	gym03_1_map_data =
{
	MapSizeX_gym03_1,
	MapSizeY_gym03_1,
	gym03_1_OutRangeCell,
	gym03_1_MapData,
	&room_char_data,
	&gym_03_char_data
};

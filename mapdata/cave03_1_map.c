//MapEditNH Ver.3.41 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : field.cell
//Part Cell File Name (512-1023) : field_sea.cell

#define	MapSizeX_cave03_1	20
#define	MapSizeY_cave03_1	10

const u16	cave03_1_OutRangeCell[4]={
0x0213,0x0213,0x0213,0x0213,
};

const u16	cave03_1_MapData[MapSizeX_cave03_1*MapSizeY_cave03_1]={
0x0613,0x0613,0x0613,0x0606,0x061e,0x061e,0x061e,0x061e,0x061e,0x061e,0x061e,0x061e,0x061e,0x061e,0x061e,0x061e,0x0607,0x0613,0x0613,0x0613,
0x0613,0x0613,0x0606,0x061f,0x0613,0x0606,0x061e,0x061e,0x061e,0x061e,0x061e,0x061e,0x061e,0x061e,0x0607,0x0613,0x061d,0x0607,0x0613,0x0613,
0x0613,0x0606,0x061f,0x0606,0x061e,0x061f,0x0613,0x0606,0x061e,0x061e,0x061e,0x0607,0x0613,0x0613,0x061d,0x061e,0x0607,0x061d,0x0607,0x0613,
0x0606,0x061f,0x0606,0x061f,0x0606,0x061e,0x061e,0x061f,0x0613,0x0613,0x0613,0x061d,0x061e,0x061e,0x061e,0x0607,0x061d,0x0607,0x061d,0x0607,
0x0614,0x0606,0x061f,0x0606,0x061f,0x0613,0x0606,0x061e,0x061e,0x061e,0x061e,0x061e,0x0607,0x0613,0x0613,0x061d,0x0607,0x061d,0x0607,0x0612,
0x0614,0x0614,0x0606,0x061f,0x0606,0x061e,0x061c,0x3228,0x3228,0x3228,0x3228,0x3228,0x061a,0x061e,0x0607,0x0613,0x0612,0x0613,0x0612,0x0612,
0x0614,0x0614,0x0614,0x0613,0x0614,0x3228,0x3228,0x3228,0x3228,0x3228,0x3228,0x3228,0x3228,0x3228,0x061a,0x0607,0x061d,0x0607,0x0612,0x0612,
0x0614,0x0614,0x0614,0x0606,0x061c,0x3228,0x3228,0x3228,0x3228,0x3228,0x3228,0x3228,0x3228,0x3228,0x3228,0x061a,0x0607,0x0612,0x0612,0x0612,
0x060b,0x060b,0x060b,0x060b,0x060c,0x3228,0x3228,0x3228,0x3228,0x0205,0x0205,0x3228,0x3228,0x3228,0x3228,0x060a,0x060b,0x060b,0x060b,0x060b,
0x0613,0x0613,0x0613,0x0613,0x060b,0x060b,0x060b,0x060b,0x060b,0x0629,0x0629,0x060b,0x060b,0x060b,0x060b,0x060b,0x0613,0x0613,0x0613,0x0613,
};

const MapScreenData	cave03_1_map_data =
{
	MapSizeX_cave03_1,
	MapSizeY_cave03_1,
	cave03_1_OutRangeCell,
	cave03_1_MapData,
	&field_char_data,
	&field_sea_char_data
};

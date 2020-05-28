//MapEditNH Ver.3.55 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : room.cell
//Part Cell File Name (512-1023) : minka.cell

#define	MapSizeX_minka06_2	12
#define	MapSizeY_minka06_2	9

const u16	minka06_2_OutRangeCell[4]={
0x0001,0x0001,0x0001,0x0001,
};

const u16	minka06_2_MapData[MapSizeX_minka06_2*MapSizeY_minka06_2]={
0x0605,0x0605,0x0602,0x0603,0x0604,0x0605,0x0605,0x0605,0x0605,0x0605,0x0605,0x0605,
0x0290,0x060d,0x060a,0x020b,0x060c,0x060d,0x060d,0x060d,0x060d,0x060d,0x060d,0x0290,
0x3698,0x3224,0x3224,0x3224,0x3224,0x3224,0x3224,0x3224,0x3224,0x3224,0x3224,0x3698,
0x3239,0x3223,0x3223,0x3223,0x3223,0x3223,0x3223,0x3223,0x3223,0x3223,0x3223,0x3223,
0x3239,0x3223,0x3223,0x3223,0x3235,0x3236,0x3236,0x3237,0x3223,0x3223,0x3223,0x3223,
0x3239,0x3223,0x3223,0x3223,0x323d,0x323e,0x323e,0x323f,0x3223,0x3223,0x3223,0x3223,
0x3239,0x3223,0x3223,0x3223,0x3245,0x3246,0x3246,0x3247,0x3223,0x3223,0x3223,0x3223,
0x3291,0x3223,0x3223,0x3223,0x3223,0x3223,0x3223,0x3223,0x3223,0x3223,0x3223,0x3222,
0x0699,0x3223,0x3223,0x3223,0x3223,0x3223,0x3223,0x3223,0x3223,0x3223,0x3223,0x062a,
};

const MapScreenData	minka06_2_map_data =
{
	MapSizeX_minka06_2,
	MapSizeY_minka06_2,
	minka06_2_OutRangeCell,
	minka06_2_MapData,
	&room_char_data,
	&minka_char_data
};

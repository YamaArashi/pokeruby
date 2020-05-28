//MapEditNH Ver.3.55 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : room.cell
//Part Cell File Name (512-1023) : minka.cell

#define	MapSizeX_safari_room	10
#define	MapSizeY_safari_room	9

const u16	safari_room_OutRangeCell[4]={
0x0001,0x0001,0x0001,0x0001,
};

const u16	safari_room_MapData[MapSizeX_safari_room*MapSizeY_safari_room]={
0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,
0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,0x0401,
0x0605,0x0605,0x0605,0x0607,0x0605,0x0605,0x0607,0x0605,0x0605,0x0605,
0x060d,0x060d,0x060d,0x060f,0x060d,0x060d,0x060f,0x060d,0x060d,0x060d,
0x3224,0x3224,0x3224,0x3224,0x3224,0x3224,0x3224,0x3224,0x3224,0x3224,
0x3239,0x3223,0x3234,0x36e8,0x36ea,0x323c,0x3223,0x3223,0x3223,0x3223,
0x3239,0x3223,0x3234,0x36f0,0x36f2,0x323c,0x3223,0x3223,0x3223,0x3223,
0x3239,0x3223,0x3223,0x3223,0x3223,0x3223,0x3223,0x3223,0x3223,0x3223,
0x3239,0x3223,0x3223,0x0208,0x0209,0x3223,0x3223,0x3223,0x3223,0x3223,
};

const MapScreenData	safari_room_map_data =
{
	MapSizeX_safari_room,
	MapSizeY_safari_room,
	safari_room_OutRangeCell,
	safari_room_MapData,
	&room_char_data,
	&minka_char_data
};

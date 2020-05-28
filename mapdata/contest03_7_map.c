//MapEditNH Ver.3.48 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : room.cell
//Part Cell File Name (512-1023) : hall.cell

#define	MapSizeX_contest03_7	1
#define	MapSizeY_contest03_7	1

const u16	contest03_7_OutRangeCell[4]={
0x0201,0x0201,0x0201,0x0201,
};

const u16	contest03_7_MapData[MapSizeX_contest03_7*MapSizeY_contest03_7]={
0x060c,
};

const MapScreenData	contest03_7_map_data =
{
	MapSizeX_contest03_7,
	MapSizeY_contest03_7,
	contest03_7_OutRangeCell,
	contest03_7_MapData,
	&room_char_data,
	&hall_char_data
};

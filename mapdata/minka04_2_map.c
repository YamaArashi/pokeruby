//MapEditNH Ver.3.55 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : room.cell
//Part Cell File Name (512-1023) : minka.cell

#define	MapSizeX_minka04_2	8
#define	MapSizeY_minka04_2	6

const u16	minka04_2_OutRangeCell[4]={
0x0201,0x0201,0x0201,0x0201,
};

const u16	minka04_2_MapData[MapSizeX_minka04_2*MapSizeY_minka04_2]={
0x07c8,0x07c9,0x07c9,0x07be,0x07bf,0x07c9,0x07cb,0x07ca,
0x07d0,0x07e3,0x07e4,0x07be,0x07bf,0x07d1,0x061e,0x07d2,
0x33d8,0x37eb,0x37ec,0x07be,0x07bf,0x33db,0x33d3,0x33da,
0x33d9,0x33d9,0x33dc,0x07c6,0x07c7,0x33db,0x33d9,0x33d9,
0x33d9,0x33d9,0x33d9,0x33d9,0x33d9,0x33d9,0x33d9,0x33d9,
0x37cc,0x33d9,0x33d9,0x03d4,0x03d5,0x33d9,0x33d9,0x37cd,
};

const MapScreenData	minka04_2_map_data =
{
	MapSizeX_minka04_2,
	MapSizeY_minka04_2,
	minka04_2_OutRangeCell,
	minka04_2_MapData,
	&room_char_data,
	&minka_char_data
};

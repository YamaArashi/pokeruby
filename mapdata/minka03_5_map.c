//MapEditNH Ver.3.51 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : room.cell
//Part Cell File Name (512-1023) : minka.cell

#define	MapSizeX_minka03_5	14
#define	MapSizeY_minka03_5	9

const u16	minka03_5_OutRangeCell[4]={
0x0201,0x0201,0x0201,0x0201,
};

const u16	minka03_5_MapData[MapSizeX_minka03_5*MapSizeY_minka03_5]={
0x0728,0x0729,0x075a,0x0729,0x072a,0x06d7,0x0766,0x0767,0x0739,0x0738,0x0739,0x0738,0x0738,0x0738,
0x0730,0x020b,0x0762,0x0219,0x0732,0x0700,0x076e,0x076f,0x0741,0x0740,0x0741,0x0740,0x0743,0x0743,
0x332b,0x332b,0x332b,0x332b,0x332b,0x0700,0x3376,0x3377,0x332b,0x332b,0x332b,0x332b,0x374e,0x374e,
0x332b,0x332c,0x332c,0x332c,0x332c,0x0700,0x332b,0x332c,0x332c,0x332c,0x332c,0x332c,0x3768,0x3769,
0x332b,0x332c,0x332c,0x332c,0x332c,0x0700,0x332b,0x332c,0x332c,0x332c,0x332c,0x3344,0x3770,0x3771,
0x332b,0x332c,0x332c,0x332c,0x332c,0x0700,0x332b,0x332c,0x329d,0x331e,0x331e,0x331e,0x331e,0x331e,
0x332b,0x332c,0x332c,0x332c,0x332c,0x06df,0x332b,0x332c,0x069e,0x0738,0x0738,0x0738,0x0738,0x0738,
0x332b,0x332c,0x332c,0x332c,0x332c,0x06e7,0x332b,0x332c,0x069f,0x0740,0x0740,0x0740,0x0740,0x0740,
0x332b,0x332c,0x332c,0x332c,0x332c,0x332b,0x332b,0x332c,0x332b,0x332b,0x332b,0x332b,0x332b,0x332b,
};

const MapScreenData	minka03_5_map_data =
{
	MapSizeX_minka03_5,
	MapSizeY_minka03_5,
	minka03_5_OutRangeCell,
	minka03_5_MapData,
	&room_char_data,
	&minka_char_data
};

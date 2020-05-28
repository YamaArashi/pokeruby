//MapEditNH Ver.3.44 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : room.cell
//Part Cell File Name (512-1023) : minka.cell

#define	MapSizeX_kaseki01_1	10
#define	MapSizeY_kaseki01_1	8

const u16	kaseki01_1_OutRangeCell[4]={
0x0201,0x0201,0x0201,0x0201,
};

const u16	kaseki01_1_MapData[MapSizeX_kaseki01_1*MapSizeY_kaseki01_1]={
0x06b1,0x06b2,0x0615,0x06ed,0x06ee,0x06ef,0x0615,0x0615,0x0615,0x0616,
0x06b9,0x06ba,0x061d,0x06f5,0x02f6,0x36f7,0x061d,0x0716,0x0717,0x061e,
0x32c1,0x32c2,0x3221,0x32fd,0x32fe,0x3306,0x3307,0x06ae,0x06af,0x3240,
0x3221,0x3229,0x3229,0x3229,0x3229,0x370e,0x370f,0x32b6,0x32b7,0x32d6,
0x3221,0x064e,0x064f,0x3244,0x3229,0x32d6,0x32d6,0x3229,0x3229,0x3229,
0x3259,0x0656,0x0657,0x3229,0x3229,0x3229,0x3229,0x3229,0x3229,0x3229,
0x3320,0x3318,0x3318,0x3318,0x3318,0x3318,0x3318,0x3318,0x3318,0x3318,
0x3323,0x331b,0x331b,0x331b,0x0210,0x0211,0x331b,0x331b,0x331b,0x331b,
};

const MapScreenData	kaseki01_1_map_data =
{
	MapSizeX_kaseki01_1,
	MapSizeY_kaseki01_1,
	kaseki01_1_OutRangeCell,
	kaseki01_1_MapData,
	&room_char_data,
	&minka_char_data
};

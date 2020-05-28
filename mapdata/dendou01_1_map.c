//MapEditNH Ver.3.55 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : room.cell
//Part Cell File Name (512-1023) : trade.cell

#define	MapSizeX_dendou01_1	15
#define	MapSizeY_dendou01_1	17

const u16	dendou01_1_OutRangeCell[4]={
0x0001,0x0001,0x0001,0x0001,
};

const u16	dendou01_1_MapData[MapSizeX_dendou01_1*MapSizeY_dendou01_1]={
0x06cc,0x06cd,0x06f4,0x06f5,0x06f4,0x06d0,0x06d1,0x06d1,0x06d2,0x06d3,0x06f4,0x06f5,0x06f4,0x06ce,0x06cf,
0x06d4,0x06d5,0x06fc,0x06fd,0x06fc,0x06d8,0x06d9,0x06d9,0x06da,0x06db,0x06fc,0x06fd,0x06fc,0x06d6,0x06d7,
0x06dc,0x06dd,0x32fe,0x32fe,0x32fe,0x06e0,0x06e1,0x06e1,0x06e2,0x06e3,0x32fe,0x32fe,0x32fe,0x06de,0x06df,
0x06e4,0x32e5,0x32f6,0x32f6,0x32f6,0x06e8,0x06e9,0x06ea,0x06f0,0x06eb,0x32f6,0x32f6,0x32f6,0x32e6,0x06e7,
0x06e4,0x32e5,0x32f6,0x32f6,0x32f6,0x32f6,0x06f1,0x06f2,0x06f3,0x32f6,0x32f6,0x32f6,0x32f6,0x32e6,0x06e7,
0x06e4,0x32e5,0x32f6,0x32f6,0x32f6,0x32f6,0x32f9,0x32fa,0x32fb,0x32f6,0x32f6,0x32f6,0x32f6,0x32e6,0x06e7,
0x06e4,0x32e5,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32e6,0x06e7,
0x06e4,0x32e5,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32e6,0x06e7,
0x06e4,0x32e5,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32e6,0x06e7,
0x06e4,0x32e5,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32e6,0x06e7,
0x06e4,0x32e5,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32e6,0x06e7,
0x06e4,0x32e5,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32e6,0x06e7,
0x06e4,0x32e5,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32e6,0x06e7,
0x06e4,0x32e5,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32e6,0x06e7,
0x06e4,0x32e5,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32e6,0x06e7,
0x06ec,0x32ed,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32f6,0x32ee,0x06ef,
0x0601,0x0601,0x0601,0x0601,0x0601,0x36ff,0x32f8,0x32f8,0x32f8,0x36f7,0x0601,0x0601,0x0601,0x0601,0x0601,
};

const MapScreenData	dendou01_1_map_data =
{
	MapSizeX_dendou01_1,
	MapSizeY_dendou01_1,
	dendou01_1_OutRangeCell,
	dendou01_1_MapData,
	&room_char_data,
	&trade_char_data
};

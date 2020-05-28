//MapEditNH Ver.3.55 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : field.cell
//Part Cell File Name (512-1023) : shipyard.cell

#define	MapSizeX_r122dun01_4	13
#define	MapSizeY_r122dun01_4	13

const u16	r122dun01_4_OutRangeCell[4]={
0x0201,0x0201,0x0201,0x0201,
};

const u16	r122dun01_4_MapData[MapSizeX_r122dun01_4*MapSizeY_r122dun01_4]={
0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x06e4,0x06ef,0x06b3,0x06b4,0x06b5,0x06ea,
0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x06ec,0x06f7,0x06bb,0x32bc,0x06bd,0x06eb,
0x06ef,0x06ef,0x06ef,0x06ef,0x06ef,0x06ef,0x071f,0x0726,0x0726,0x32e8,0x32e7,0x32e9,0x0726,
0x06f7,0x06f7,0x06f7,0x06f7,0x06f7,0x06f7,0x0727,0x0726,0x06ee,0x32e6,0x32e6,0x32e6,0x06ee,
0x06ef,0x06c3,0x06c4,0x06c5,0x06ef,0x06ef,0x06ef,0x06ef,0x06ea,0x32de,0x30cf,0x30cf,0x06e4,
0x06f7,0x06cb,0x32cc,0x06cd,0x06f7,0x06f7,0x06f7,0x06f7,0x06eb,0x32de,0x30cf,0x30cf,0x06ec,
0x0726,0x32e8,0x32e7,0x32e9,0x0726,0x0726,0x0726,0x0726,0x0726,0x32e7,0x32e7,0x32e7,0x0726,
0x0726,0x32e6,0x32e6,0x32e6,0x06ee,0x06ee,0x06ee,0x06ee,0x06ee,0x32e6,0x32e6,0x32e6,0x32e6,
0x32e7,0x32e6,0x32e6,0x32e6,0x32e6,0x32e6,0x32e6,0x32e6,0x32e6,0x32e6,0x32e6,0x32e6,0x06ee,
0x06ee,0x06ee,0x06ee,0x06ee,0x06ee,0x06ee,0x06ee,0x06ee,0x06ee,0x32e6,0x32e6,0x32e6,0x06ee,
0x0726,0x32e6,0x32e6,0x36ed,0x32e6,0x32e6,0x06ee,0x06ee,0x06ee,0x33f2,0x32e6,0x32e6,0x32e6,
0x0726,0x32e6,0x32e6,0x32e6,0x32e6,0x32e6,0x06ee,0x06ee,0x06ee,0x06ee,0x06ee,0x06ee,0x06ee,
0x0726,0x32e6,0x33f2,0x32e6,0x32e6,0x32e6,0x32e6,0x32e6,0x32e6,0x32e6,0x32e6,0x32e6,0x32e6,
};

const MapScreenData	r122dun01_4_map_data =
{
	MapSizeX_r122dun01_4,
	MapSizeY_r122dun01_4,
	r122dun01_4_OutRangeCell,
	r122dun01_4_MapData,
	&field_char_data,
	&shipyard_char_data
};

//MapEditNH Ver.3.50 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : field.cell
//Part Cell File Name (512-1023) : cave.cell

#define	MapSizeX_w128dun01_7	20
#define	MapSizeY_w128dun01_7	20

const u16	w128dun01_7_OutRangeCell[4]={
0x02f1,0x02f1,0x02f1,0x02f1,
};

const u16	w128dun01_7_MapData[MapSizeX_w128dun01_7*MapSizeY_w128dun01_7]={
0x06f1,0x06eb,0x06f9,0x070e,0x06fe,0x06ff,0x06f9,0x06f9,0x06f9,0x06f9,0x06f9,0x06ec,0x06f1,0x06f1,0x06f1,0x06f1,0x06f1,0x06f1,0x06f1,0x06f1,
0x06f1,0x06f2,0x06eb,0x0716,0x3306,0x0707,0x06f9,0x06f9,0x06f9,0x06f9,0x06ec,0x06f0,0x06f1,0x06f1,0x0689,0x0691,0x0691,0x0691,0x0681,0x06f1,
0x06f1,0x06f2,0x06f2,0x3201,0x3201,0x3201,0x3201,0x3201,0x3201,0x3201,0x06f0,0x06f0,0x06f1,0x06f1,0x068a,0x0693,0x0693,0x0693,0x0688,0x06f1,
0x06f1,0x06f2,0x06f2,0x3201,0x3201,0x3201,0x3201,0x3201,0x3201,0x3201,0x06f0,0x06f0,0x06f1,0x06f1,0x068a,0x0693,0x0693,0x0693,0x0688,0x06f1,
0x06f1,0x06f3,0x06f3,0x06e9,0x06e9,0x06e9,0x06ea,0x3201,0x3201,0x3201,0x06f0,0x06f0,0x06f1,0x06f1,0x06f3,0x06f3,0x0682,0x0693,0x0688,0x06f1,
0x0689,0x0691,0x0681,0x06f1,0x06f1,0x06f1,0x06f2,0x06ea,0x3201,0x3201,0x06f0,0x06f8,0x06f9,0x06f9,0x06f9,0x06ec,0x068a,0x0693,0x0688,0x06f1,
0x068a,0x0693,0x0688,0x06f1,0x06eb,0x06f9,0x06fa,0x06f2,0x3201,0x3201,0x06f8,0x06f9,0x06f9,0x06f9,0x06ec,0x06f0,0x06f3,0x06f3,0x06f3,0x06f1,
0x06f3,0x06f3,0x06f3,0x06f1,0x06f2,0x06eb,0x06f9,0x06fa,0x3201,0x3201,0x3201,0x3201,0x3201,0x3201,0x06f0,0x06f0,0x06f1,0x06f1,0x06f1,0x06f1,
0x06f1,0x06eb,0x06f9,0x06f9,0x06fa,0x06f2,0x3201,0x3201,0x3201,0x3201,0x3201,0x3201,0x3201,0x3201,0x06f0,0x06f8,0x06f9,0x06f9,0x06f9,0x06ec,
0x06f1,0x06f2,0x06eb,0x06f9,0x06f9,0x06fa,0x3201,0x3201,0x3201,0x06e8,0x06e9,0x06ea,0x3201,0x3201,0x06f8,0x06f9,0x06f9,0x06f9,0x06ec,0x06f0,
0x06f1,0x06f2,0x06f2,0x3201,0x3201,0x3201,0x3201,0x3201,0x06e8,0x06f0,0x06f1,0x06f2,0x06ea,0x3201,0x3201,0x3201,0x3201,0x3201,0x06f0,0x06f0,
0x06f1,0x06f2,0x06f2,0x3201,0x3201,0x3201,0x3201,0x3201,0x06f0,0x06f0,0x06f1,0x06f2,0x06f2,0x3201,0x3201,0x3201,0x3201,0x3201,0x06f0,0x06f0,
0x06f1,0x06f2,0x06f2,0x3201,0x3201,0x06e8,0x06e9,0x06ea,0x06f0,0x06f0,0x06f1,0x06f2,0x06f2,0x3201,0x3201,0x3207,0x3201,0x3201,0x06f0,0x06f0,
0x06f1,0x06f2,0x06f2,0x3201,0x3201,0x06f0,0x0611,0x06f2,0x06f0,0x06f0,0x06f1,0x06f3,0x06f3,0x06e9,0x06e5,0x06e6,0x06e7,0x06e9,0x06f3,0x06f3,
0x06f1,0x06f2,0x06f2,0x3201,0x06e8,0x06f3,0x0611,0x06f2,0x06f0,0x06f8,0x06f9,0x06ec,0x06f1,0x06f1,0x06f1,0x06f1,0x0689,0x0691,0x0691,0x0681,
0x06f1,0x06f2,0x06f2,0x3201,0x06f8,0x06f9,0x06f9,0x06fa,0x06f8,0x06f9,0x06ec,0x06f0,0x06f1,0x06f1,0x06f1,0x0689,0x0692,0x0693,0x0693,0x0688,
0x06f1,0x06f2,0x06f2,0x3201,0x3201,0x3201,0x3201,0x3201,0x3201,0x3201,0x06f0,0x06f0,0x06f1,0x0689,0x0691,0x0692,0x0693,0x0693,0x0693,0x0688,
0x06f1,0x06f2,0x06f2,0x3201,0x3201,0x3201,0x3201,0x3207,0x3201,0x3201,0x06f0,0x06f0,0x06f1,0x068a,0x0693,0x0693,0x0693,0x0693,0x0680,0x06f3,
0x06f1,0x06f3,0x06f3,0x06e9,0x06e9,0x06e9,0x06e5,0x06e6,0x06e7,0x06e9,0x06f3,0x06f3,0x06f1,0x06f3,0x0682,0x0693,0x0680,0x06f3,0x06f3,0x06f1,
0x06f1,0x06f1,0x06f1,0x06f1,0x06f1,0x06f1,0x06f1,0x06f1,0x06f1,0x06f1,0x06f1,0x06f1,0x06f1,0x06f1,0x06f3,0x06f3,0x06f3,0x06f1,0x06f1,0x06f1,
};

const MapScreenData	w128dun01_7_map_data =
{
	MapSizeX_w128dun01_7,
	MapSizeY_w128dun01_7,
	w128dun01_7_OutRangeCell,
	w128dun01_7_MapData,
	&field_char_data,
	&cave_char_data
};

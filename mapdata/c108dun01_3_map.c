//MapEditNH Ver.3.50 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : field.cell
//Part Cell File Name (512-1023) : cave.cell

#define	MapSizeX_c108dun01_3	23
#define	MapSizeY_c108dun01_3	23

const u16	c108dun01_3_OutRangeCell[4]={
0x0333,0x0333,0x0333,0x0333,
};

const u16	c108dun01_3_MapData[MapSizeX_c108dun01_3*MapSizeY_c108dun01_3]={
0x0733,0x0733,0x071c,0x0729,0x0729,0x0729,0x0729,0x0729,0x0729,0x0729,0x0729,0x0729,0x0729,0x0729,0x0729,0x0729,0x0729,0x0729,0x0729,0x071d,0x0733,0x0733,0x0733,
0x0733,0x0733,0x0722,0x0733,0x0733,0x071c,0x0729,0x0729,0x0729,0x071d,0x0733,0x0733,0x0733,0x0733,0x071c,0x0729,0x0729,0x0729,0x071d,0x0720,0x0733,0x0733,0x0733,
0x0733,0x0733,0x0722,0x0733,0x0733,0x0722,0x0733,0x0733,0x0733,0x0728,0x0729,0x0729,0x0729,0x0729,0x072a,0x0733,0x0733,0x0733,0x0720,0x0728,0x071d,0x0733,0x0733,
0x071c,0x0729,0x072a,0x0733,0x0733,0x0722,0x0733,0x071c,0x0729,0x0729,0x0729,0x0729,0x0729,0x0729,0x0729,0x0729,0x071d,0x0733,0x0728,0x071d,0x0720,0x0733,0x0733,
0x0722,0x0733,0x0733,0x071c,0x0729,0x072a,0x0733,0x0722,0x071c,0x0729,0x0729,0x0729,0x0729,0x0729,0x0729,0x071d,0x0728,0x071d,0x0733,0x0720,0x0720,0x0733,0x0733,
0x0722,0x0733,0x0733,0x0722,0x0733,0x0733,0x0733,0x0722,0x0722,0x331b,0x331b,0x331b,0x331b,0x333c,0x331b,0x0728,0x071d,0x0720,0x0733,0x0720,0x0720,0x0733,0x0733,
0x0722,0x0733,0x071c,0x072a,0x0733,0x0733,0x0733,0x0722,0x0722,0x331b,0x331b,0x331b,0x331b,0x331b,0x331b,0x331b,0x0720,0x0720,0x0733,0x0720,0x0720,0x0733,0x0733,
0x0722,0x0733,0x0722,0x0733,0x0733,0x0733,0x0733,0x0725,0x0725,0x071a,0x331b,0x331b,0x331b,0x331b,0x331b,0x331b,0x0720,0x0720,0x0733,0x0720,0x0720,0x0733,0x0733,
0x0722,0x0733,0x0722,0x0733,0x0733,0x0733,0x0733,0x0733,0x0733,0x0725,0x0732,0x071a,0x331b,0x331b,0x331b,0x331b,0x0720,0x0720,0x0733,0x0720,0x0720,0x0733,0x0733,
0x0722,0x071c,0x072a,0x071c,0x0729,0x0729,0x0729,0x071d,0x0733,0x0733,0x0733,0x0725,0x071a,0x331b,0x331b,0x331b,0x0720,0x0720,0x070f,0x0732,0x0720,0x0733,0x0733,
0x0722,0x0722,0x0733,0x0722,0x071c,0x0729,0x071d,0x0728,0x071d,0x0733,0x0733,0x0733,0x0722,0x071a,0x331b,0x331b,0x0720,0x0720,0x0720,0x0733,0x0720,0x0733,0x0733,
0x0722,0x0722,0x0733,0x0722,0x0722,0x333d,0x0728,0x071d,0x0720,0x0733,0x0733,0x0733,0x0722,0x0722,0x331b,0x331b,0x0720,0x0720,0x0720,0x0733,0x0720,0x0733,0x0733,
0x0722,0x0722,0x0733,0x0722,0x0722,0x331b,0x331b,0x0720,0x0720,0x0733,0x0733,0x071c,0x072a,0x0722,0x331b,0x331b,0x0720,0x0720,0x0720,0x0733,0x0720,0x0733,0x0733,
0x0722,0x0722,0x0733,0x0722,0x0722,0x331b,0x331b,0x0720,0x0728,0x0729,0x0729,0x072a,0x071c,0x072a,0x331b,0x331b,0x0720,0x0720,0x0720,0x0733,0x0720,0x0733,0x0733,
0x0722,0x0722,0x0733,0x0722,0x0722,0x331b,0x331b,0x0728,0x0729,0x0729,0x0729,0x0729,0x072a,0x331b,0x331b,0x331b,0x0720,0x0720,0x0720,0x0733,0x0720,0x0733,0x0733,
0x0722,0x0722,0x0733,0x0722,0x0722,0x331b,0x331b,0x331b,0x331b,0x331b,0x331b,0x331b,0x331b,0x331b,0x331b,0x331b,0x0720,0x0720,0x0728,0x071d,0x0720,0x0733,0x0733,
0x0722,0x0722,0x0733,0x0722,0x0725,0x071a,0x331b,0x331b,0x331b,0x331b,0x331b,0x331b,0x331b,0x331b,0x331b,0x0718,0x0725,0x0720,0x0733,0x0720,0x0720,0x0733,0x0733,
0x0722,0x0722,0x0733,0x0722,0x0733,0x0725,0x071a,0x331b,0x331b,0x331b,0x331b,0x331b,0x331b,0x331b,0x0718,0x0725,0x0733,0x0720,0x0733,0x0720,0x0720,0x0733,0x0733,
0x0722,0x0722,0x0733,0x0725,0x0717,0x0733,0x0725,0x0732,0x0732,0x0732,0x0732,0x0732,0x0732,0x0732,0x0725,0x070f,0x0732,0x0725,0x0733,0x0720,0x0720,0x0733,0x0733,
0x0722,0x0725,0x0717,0x0733,0x0725,0x0732,0x0732,0x0732,0x0732,0x0732,0x0732,0x0732,0x0732,0x0732,0x0732,0x0725,0x0733,0x070f,0x0732,0x0725,0x0720,0x0733,0x0733,
0x0722,0x0733,0x0725,0x0732,0x0717,0x0733,0x0733,0x070f,0x0732,0x0732,0x0732,0x0732,0x0732,0x0732,0x0717,0x0733,0x0733,0x0720,0x0733,0x0733,0x0720,0x0733,0x0733,
0x0725,0x0717,0x0733,0x0733,0x0725,0x0732,0x0732,0x0725,0x0733,0x0733,0x0733,0x0733,0x0733,0x0733,0x0725,0x0732,0x0732,0x0725,0x070f,0x0732,0x0725,0x0733,0x0733,
0x0733,0x0725,0x0732,0x0732,0x0332,0x0732,0x0732,0x0732,0x0732,0x0732,0x0732,0x0732,0x0732,0x0732,0x0732,0x0732,0x0732,0x0732,0x0725,0x0733,0x0733,0x0733,0x0733,
};

const MapScreenData	c108dun01_3_map_data =
{
	MapSizeX_c108dun01_3,
	MapSizeY_c108dun01_3,
	c108dun01_3_OutRangeCell,
	c108dun01_3_MapData,
	&field_char_data,
	&cave_char_data
};

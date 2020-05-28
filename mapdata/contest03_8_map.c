//MapEditNH Ver.3.48 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : field.cell
//Part Cell File Name (512-1023) : hall.cell

#define	MapSizeX_contest03_8	15
#define	MapSizeY_contest03_8	11

const u16	contest03_8_OutRangeCell[4]={
0x0201,0x0201,0x0201,0x0201,
};

const u16	contest03_8_MapData[MapSizeX_contest03_8*MapSizeY_contest03_8]={
0x0260,0x0260,0x0260,0x0260,0x0260,0x0260,0x0260,0x0260,0x0260,0x0260,0x0260,0x0260,0x0260,0x0260,0x0260,
0x060c,0x060d,0x060d,0x060d,0x060d,0x060d,0x060d,0x060d,0x060d,0x060d,0x060d,0x060d,0x060d,0x060d,0x060e,
0x0624,0x3225,0x3225,0x3225,0x3225,0x3225,0x3225,0x3225,0x3225,0x3225,0x3225,0x3225,0x3225,0x3225,0x0626,
0x0624,0x3225,0x3225,0x0668,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x066a,0x3225,0x3225,0x0626,
0x0624,0x3225,0x3225,0x0670,0x3271,0x3271,0x3271,0x3271,0x3271,0x326f,0x3271,0x0672,0x3225,0x3225,0x0626,
0x0624,0x3225,0x3225,0x0670,0x3271,0x3271,0x3271,0x3291,0x3271,0x3677,0x3271,0x0672,0x3225,0x3225,0x0626,
0x0624,0x3225,0x3225,0x0670,0x3271,0x3271,0x3271,0x3299,0x3271,0x3271,0x3271,0x0672,0x3225,0x3225,0x0626,
0x0624,0x3225,0x3225,0x0670,0x3271,0x3271,0x3271,0x3271,0x3271,0x3271,0x3271,0x0672,0x3225,0x3225,0x0626,
0x0624,0x3225,0x3225,0x0678,0x0679,0x0679,0x327b,0x327c,0x327d,0x0679,0x0679,0x067a,0x3225,0x3225,0x0626,
0x0614,0x3215,0x3215,0x3215,0x3215,0x3215,0x3283,0x3284,0x3285,0x3215,0x3215,0x3215,0x3215,0x3215,0x0616,
0x061c,0x061d,0x061d,0x061d,0x061d,0x3619,0x3283,0x3284,0x3285,0x3619,0x061d,0x061d,0x061d,0x061d,0x061e,
};

const MapScreenData	contest03_8_map_data =
{
	MapSizeX_contest03_8,
	MapSizeY_contest03_8,
	contest03_8_OutRangeCell,
	contest03_8_MapData,
	&field_char_data,
	&hall_char_data
};

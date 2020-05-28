//MapEditNH Ver.3.53 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : base.cell
//Part Cell File Name (512-1023) : himits.cell

#define	MapSizeX_h_kusa_02	15
#define	MapSizeY_h_kusa_02	7

const u16	h_kusa_02_OutRangeCell[4]={
0x0208,0x0208,0x0208,0x0208,
};

const u16	h_kusa_02_MapData[MapSizeX_h_kusa_02*MapSizeY_h_kusa_02]={
0x0601,0x0602,0x0602,0x0602,0x0602,0x0602,0x0602,0x0602,0x0602,0x0602,0x0602,0x0602,0x0602,0x0603,0x0610,
0x0609,0x3620,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x060d,0x0603,
0x0609,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320e,0x060b,
0x0609,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x060b,
0x0609,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x060b,
0x0611,0x0612,0x0612,0x0612,0x0607,0x320a,0x320a,0x3204,0x320a,0x320a,0x320a,0x320a,0x320a,0x0605,0x0613,
0x0610,0x0610,0x0610,0x0610,0x0611,0x0612,0x0612,0x060c,0x0612,0x0612,0x0612,0x0612,0x0612,0x0613,0x0610,
};

const MapScreenData	h_kusa_02_map_data =
{
	MapSizeX_h_kusa_02,
	MapSizeY_h_kusa_02,
	h_kusa_02_OutRangeCell,
	h_kusa_02_MapData,
	&base_char_data,
	&h_kusa_char_data
};

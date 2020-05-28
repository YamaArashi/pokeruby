//MapEditNH Ver.3.53 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : base.cell
//Part Cell File Name (512-1023) : himits.cell

#define	MapSizeX_h_kinoue_01	11
#define	MapSizeY_h_kinoue_01	9

const u16	h_kinoue_01_OutRangeCell[4]={
0x0208,0x0208,0x0208,0x0208,
};

const u16	h_kinoue_01_MapData[MapSizeX_h_kinoue_01*MapSizeY_h_kinoue_01]={
0x0610,0x0610,0x0601,0x0602,0x0602,0x0602,0x0602,0x0602,0x0602,0x0602,0x0603,
0x0601,0x0602,0x060f,0x320a,0x320a,0x320e,0x320a,0x320a,0x320a,0x320a,0x060b,
0x0609,0x320a,0x3620,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x060b,
0x0609,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x060b,
0x0609,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x060b,
0x0609,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x060b,
0x0609,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x320a,0x3605,0x0613,
0x0611,0x0607,0x320a,0x320a,0x320a,0x3204,0x320a,0x320a,0x320a,0x060b,0x0610,
0x0610,0x0611,0x0612,0x0612,0x0612,0x060c,0x0612,0x0612,0x0612,0x0613,0x0610,
};

const MapScreenData	h_kinoue_01_map_data =
{
	MapSizeX_h_kinoue_01,
	MapSizeY_h_kinoue_01,
	h_kinoue_01_OutRangeCell,
	h_kinoue_01_MapData,
	&base_char_data,
	&h_kinoue_char_data
};

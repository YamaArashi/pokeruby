//MapEditNH Ver.3.55 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : field.cell
//Part Cell File Name (512-1023) : field_3.cell

#define	MapSizeX_town103	20
#define	MapSizeY_town103	20

const u16	town103_OutRangeCell[4]={
0x0243,0x0243,0x0243,0x0243,
};

const u16	town103_MapData[MapSizeX_town103*MapSizeY_town103]={
0x0643,0x0611,0x0612,0x320c,0x320c,0x320d,0x3124,0x3124,0x3124,0x3124,0x3124,0x1125,0x1170,0x157a,0x0643,0x0643,0x0643,0x3239,0x0643,0x3239,
0x0643,0x0613,0x0614,0x0614,0x0614,0x0615,0x3124,0x3124,0x3124,0x3124,0x3124,0x1125,0x1170,0x157a,0x0643,0x063a,0x0643,0x0643,0x0643,0x0643,
0x063a,0x060e,0x061f,0x061d,0x061e,0x060f,0x3124,0x3124,0x3124,0x3124,0x3124,0x1125,0x1170,0x157a,0x0643,0x3239,0x0643,0x0643,0x063a,0x0643,
0x3239,0x0616,0x0627,0x0625,0x0626,0x0617,0x3124,0x3124,0x3124,0x3124,0x3124,0x1125,0x1170,0x357a,0x0643,0x0643,0x063a,0x0643,0x3239,0x063a,
0x0643,0x3124,0x0403,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3239,0x3239,0x1125,0x1170,0x057a,0x0643,0x0643,0x3239,0x0643,0x0643,0x3239,
0x063a,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x320b,0x320c,0x0612,0x0618,0x1125,0x1170,0x057a,0x063a,0x063a,0x063a,0x0643,0x0643,0x0643,
0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0613,0x0614,0x0614,0x0615,0x1125,0x1170,0x1582,0x1479,0x1479,0x1489,0x063a,0x063a,0x063a,
0x3124,0x3203,0x3204,0x3205,0x3206,0x3124,0x3124,0x060e,0x061d,0x061e,0x060f,0x1125,0x1170,0x1170,0x1170,0x1170,0x1582,0x1479,0x1479,0x1479,
0x3124,0x0450,0x0451,0x0452,0x0453,0x3124,0x3124,0x0616,0x0625,0x0626,0x0617,0x1125,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x3124,0x0458,0x0459,0x045a,0x045b,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3228,0x3229,0x3229,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x3124,0x0609,0x0461,0x0462,0x060a,0x3124,0x3124,0x3124,0x3124,0x3124,0x0403,0x0630,0x0631,0x0631,0x111b,0x311c,0x311c,0x311c,0x311c,0x311c,
0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x313e,0x311c,0x311c,0x313d,0x3124,0x320b,0x320c,0x320c,0x320d,
0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0613,0x0614,0x0614,0x0615,
0x3124,0x3124,0x3124,0x3124,0x3124,0x321a,0x321b,0x321b,0x321b,0x321b,0x321c,0x3124,0x3124,0x3124,0x3124,0x3124,0x060e,0x061d,0x061e,0x060f,
0x3239,0x3124,0x3124,0x3124,0x3124,0x0622,0x0623,0x0623,0x0623,0x0623,0x0624,0x3124,0x3124,0x3124,0x3124,0x3124,0x0616,0x0625,0x0626,0x0617,
0x0643,0x3124,0x3124,0x3124,0x3124,0x062b,0x062c,0x062d,0x05b3,0x062e,0x062f,0x3208,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x04e2,0x3239,
0x0643,0x3124,0x3124,0x3124,0x3124,0x0633,0x0634,0x0635,0x05c5,0x0636,0x0637,0x0610,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x0643,
0x063a,0x3239,0x3124,0x3124,0x3124,0x323b,0x323c,0x063d,0x05cd,0x063e,0x323f,0x3124,0x3124,0x3124,0x3124,0x3124,0x3239,0x3239,0x3239,0x063a,
0x3239,0x0643,0x3239,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x3124,0x34e2,0x3239,0x3239,0x063a,0x0643,0x0643,0x04e2,
0x0643,0x0643,0x0643,0x3239,0x3239,0x3239,0x3239,0x3239,0x3239,0x3239,0x3239,0x3239,0x3239,0x3239,0x0643,0x0643,0x3239,0x0643,0x0643,0x3239,
};

const MapScreenData	town103_map_data =
{
	MapSizeX_town103,
	MapSizeY_town103,
	town103_OutRangeCell,
	town103_MapData,
	&field_char_data,
	&field_3_char_data
};

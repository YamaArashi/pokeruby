//MapEditNH Ver.3.55 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : room.cell
//Part Cell File Name (512-1023) : uminoie.cell

#define	MapSizeX_uminoie	15
#define	MapSizeY_uminoie	10

const u16	uminoie_OutRangeCell[4]={
0x0001,0x0001,0x0001,0x0001,
};

const u16	uminoie_MapData[MapSizeX_uminoie*MapSizeY_uminoie]={
0x0601,0x0602,0x0602,0x0604,0x0605,0x062e,0x062f,0x0602,0x0602,0x0602,0x0604,0x0605,0x0602,0x0602,0x0603,
0x0609,0x0606,0x0607,0x060c,0x060d,0x0636,0x0637,0x061f,0x060a,0x060a,0x060c,0x060d,0x0606,0x0607,0x060b,
0x3211,0x060e,0x060f,0x321e,0x321a,0x321a,0x3212,0x0627,0x321e,0x321a,0x321a,0x321a,0x060e,0x060f,0x3213,
0x3222,0x322c,0x322c,0x322d,0x3224,0x3224,0x322c,0x322c,0x322d,0x3224,0x3224,0x3224,0x322c,0x322c,0x3226,
0x0620,0x0619,0x3225,0x0618,0x0610,0x0619,0x3225,0x3225,0x0618,0x0610,0x0619,0x3225,0x3225,0x0618,0x0621,
0x3214,0x321a,0x322a,0x321a,0x321a,0x321a,0x322a,0x322a,0x321a,0x321a,0x321a,0x322a,0x322a,0x321a,0x3215,
0x0620,0x0619,0x3224,0x0618,0x0610,0x0619,0x3224,0x3224,0x0618,0x0610,0x0619,0x3224,0x3224,0x0618,0x0621,
0x321c,0x321b,0x3225,0x321b,0x321b,0x321b,0x3225,0x3225,0x321b,0x321b,0x321b,0x3225,0x3225,0x321b,0x321d,
0x0620,0x0619,0x322a,0x322a,0x322a,0x322a,0x322a,0x322a,0x322a,0x322a,0x322a,0x322a,0x322a,0x0618,0x0621,
0x321c,0x321b,0x3225,0x3225,0x3225,0x3225,0x0216,0x0217,0x3225,0x3225,0x3225,0x3225,0x3225,0x321b,0x321d,
};

const MapScreenData	uminoie_map_data =
{
	MapSizeX_uminoie,
	MapSizeY_uminoie,
	uminoie_OutRangeCell,
	uminoie_MapData,
	&room_char_data,
	&uminoie_char_data
};

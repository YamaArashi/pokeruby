//MapEditNH Ver.3.55 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : field.cell
//Part Cell File Name (512-1023) : shipyard.cell

#define	MapSizeX_c106dun01_b1	51
#define	MapSizeY_c106dun01_b1	24

const u16	c106dun01_b1_OutRangeCell[4]={
0x0201,0x0201,0x0201,0x0201,
};

const u16	c106dun01_b1_MapData[MapSizeX_c106dun01_b1*MapSizeY_c106dun01_b1]={
0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0611,0x06e0,0x06e0,0x06e0,0x06c3,0x06c4,0x06c5,0x0611,0x06e0,0x06e0,0x06c3,0x06c4,0x06c5,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x0611,0x06e0,0x06e0,0x06b3,0x06b4,0x06b5,0x06e0,0x06e0,0x0611,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0611,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x0611,
0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0609,0x0630,0x0631,0x0621,0x06cb,0x32cc,0x06cd,0x060a,0x0631,0x0631,0x06cb,0x32cc,0x06cd,0x0621,0x07d8,0x07d9,0x07d8,0x07d9,0x060a,0x0621,0x0621,0x06bb,0x32bc,0x06bd,0x0621,0x0621,0x060a,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x060a,0x07d8,0x07d9,0x0621,0x0621,0x0621,0x07d8,0x07d9,0x07d8,0x07d9,0x060a,
0x0611,0x06e0,0x06c3,0x06c4,0x06c5,0x0653,0x0654,0x0610,0x3238,0x3239,0x3229,0x32c6,0x3229,0x32c7,0x060a,0x3239,0x3239,0x32c6,0x3229,0x32c7,0x3229,0x07da,0x07db,0x07da,0x07db,0x060a,0x0627,0x3229,0x32c6,0x3229,0x32c7,0x3229,0x0627,0x060a,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x060a,0x07da,0x07db,0x3229,0x3229,0x3229,0x07da,0x07db,0x07da,0x07db,0x060a,
0x060a,0x0621,0x06cb,0x32cc,0x06cd,0x065b,0x065c,0x0620,0x3229,0x3228,0x3228,0x3228,0x3228,0x3228,0x060a,0x3229,0x3228,0x3228,0x3228,0x3228,0x3228,0x07dc,0x37dd,0x07da,0x07db,0x060a,0x062f,0x32a1,0x3228,0x3228,0x3228,0x3228,0x062f,0x060a,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x060a,0x07dc,0x37dd,0x32a1,0x3228,0x32df,0x07dc,0x37dd,0x07da,0x07db,0x060a,
0x060a,0x3229,0x32c6,0x3229,0x32c7,0x0663,0x0664,0x3213,0x3229,0x3228,0x3228,0x3228,0x3228,0x3228,0x060a,0x3229,0x3228,0x3228,0x3228,0x3228,0x32df,0x322a,0x322a,0x07dc,0x37dd,0x060a,0x3229,0x32df,0x3228,0x3228,0x3228,0x32df,0x3228,0x060a,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x060a,0x3229,0x322a,0x32a9,0x3228,0x3228,0x322a,0x322a,0x07dc,0x37dd,0x060a,
0x060a,0x3229,0x3228,0x3228,0x3228,0x326b,0x326c,0x32a1,0x3228,0x3228,0x3228,0x3228,0x3228,0x3228,0x0609,0x320b,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x0609,0x320b,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x0609,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x060a,0x3229,0x32df,0x3228,0x3228,0x32df,0x3228,0x3228,0x32df,0x3228,0x060a,
0x060a,0x3229,0x3228,0x3228,0x3228,0x3202,0x3241,0x3242,0x3202,0x3202,0x3202,0x3228,0x3228,0x3228,0x0611,0x06e0,0x06e0,0x06d5,0x06d4,0x06d5,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x0611,0x06e0,0x06e0,0x06e0,0x062b,0x062c,0x062d,0x062e,0x0611,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x060a,0x0686,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x065e,0x060a,
0x060a,0x3229,0x3228,0x3228,0x3228,0x0605,0x0649,0x064a,0x3202,0x3202,0x3202,0x3228,0x3228,0x3228,0x060a,0x07e3,0x07e3,0x0624,0x0623,0x0624,0x0621,0x0621,0x0621,0x060e,0x060f,0x060a,0x0630,0x0630,0x0631,0x0633,0x0634,0x0635,0x0636,0x060a,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x060a,0x0660,0x32ae,0x32a7,0x32a7,0x32a7,0x32a7,0x32a7,0x32a7,0x06a6,0x060a,
0x060a,0x3229,0x3228,0x3228,0x3228,0x3202,0x321d,0x3202,0x3241,0x3242,0x3202,0x3228,0x3228,0x3228,0x060a,0x07ea,0x07ea,0x33e6,0x37f3,0x37f4,0x33e6,0x33f5,0x33e6,0x3616,0x3617,0x060a,0x3238,0x3238,0x3239,0x063b,0x063c,0x063d,0x063e,0x060a,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x060a,0x0668,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x06ac,0x060a,
0x060a,0x3229,0x3228,0x3228,0x3228,0x3202,0x3202,0x3202,0x0649,0x064a,0x0605,0x3228,0x3228,0x3228,0x060a,0x3381,0x3380,0x33e5,0x37c3,0x37c5,0x33e5,0x33fd,0x33e5,0x33e5,0x33e5,0x060a,0x3229,0x3336,0x3228,0x0643,0x0644,0x0645,0x0646,0x060a,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x060a,0x3229,0x32df,0x3228,0x3228,0x32df,0x3228,0x3228,0x32df,0x3228,0x060a,
0x060a,0x3229,0x3228,0x3228,0x3228,0x3202,0x3202,0x3202,0x321d,0x3202,0x3202,0x3228,0x3228,0x3228,0x060a,0x3381,0x3380,0x33e5,0x33fb,0x33fc,0x33e5,0x33fa,0x33e5,0x32df,0x33e5,0x060a,0x3229,0x3228,0x3228,0x064b,0x064c,0x064d,0x064e,0x060a,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x060a,0x0686,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x065e,0x060a,
0x0609,0x320b,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x0609,0x33ee,0x33ed,0x33ed,0x33ed,0x33ed,0x33ed,0x33ed,0x33ed,0x33ed,0x33ed,0x0609,0x3229,0x3228,0x3228,0x3228,0x0655,0x0656,0x3229,0x060a,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x060a,0x0660,0x32ae,0x32a7,0x32a7,0x32a7,0x32a7,0x32a7,0x32a7,0x06a6,0x060a,
0x0611,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x0610,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x0611,0x3229,0x32df,0x3228,0x3228,0x3228,0x3228,0x3228,0x060a,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x060a,0x0668,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x06ac,0x060a,
0x060a,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0620,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0609,0x320b,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x0609,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x060a,0x3229,0x32df,0x3228,0x3228,0x32df,0x3228,0x3228,0x32df,0x3228,0x060a,
0x060a,0x3229,0x3229,0x3229,0x3229,0x3229,0x3229,0x3229,0x3229,0x3229,0x3229,0x3229,0x3229,0x3229,0x3213,0x3229,0x3203,0x3203,0x3203,0x3203,0x3203,0x3203,0x3203,0x3203,0x33e0,0x0610,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x0611,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x060a,0x0686,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x065e,0x060a,
0x060a,0x3229,0x3228,0x32df,0x3228,0x3228,0x3228,0x3228,0x3228,0x3228,0x3228,0x3228,0x3228,0x3228,0x3228,0x3228,0x33e9,0x060c,0x060d,0x3202,0x3202,0x3202,0x07f0,0x07f1,0x37e1,0x0620,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x060a,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x060a,0x0660,0x32ae,0x32a7,0x32a7,0x32a7,0x32a7,0x32a7,0x32a7,0x06a6,0x060a,
0x060a,0x0686,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x065e,0x07e8,0x0614,0x0615,0x3202,0x3202,0x321d,0x07f8,0x07f9,0x07e8,0x3344,0x3203,0x3203,0x3203,0x3203,0x3203,0x3229,0x3229,0x060a,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x060a,0x0668,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x06ac,0x060a,
0x060a,0x0660,0x32ae,0x32a7,0x32a7,0x32a7,0x32a7,0x32a7,0x32a7,0x32a7,0x32a7,0x32a7,0x32a7,0x32a7,0x32a7,0x06a6,0x3202,0x3202,0x321d,0x3202,0x3202,0x3202,0x3202,0x321d,0x3202,0x3202,0x3202,0x3202,0x3202,0x3202,0x3202,0x3228,0x3228,0x060a,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x060a,0x3229,0x32df,0x3228,0x3228,0x32df,0x3228,0x3228,0x32df,0x3228,0x060a,
0x060a,0x0660,0x32af,0x314f,0x314f,0x314f,0x314f,0x314f,0x314f,0x314f,0x314f,0x314f,0x314f,0x314f,0x314f,0x06a4,0x3202,0x3241,0x3242,0x3202,0x3202,0x3202,0x3241,0x3242,0x33e9,0x33e9,0x3202,0x3202,0x3202,0x3202,0x3202,0x3228,0x3228,0x060a,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0609,0x320b,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x0609,
0x060a,0x0668,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x0669,0x06ac,0x3202,0x0649,0x064a,0x3202,0x3202,0x3202,0x0649,0x064a,0x07e8,0x07e8,0x3202,0x3202,0x3202,0x3202,0x3202,0x3228,0x32df,0x060a,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0610,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x0610,
0x060a,0x3229,0x322a,0x32df,0x322a,0x322a,0x322a,0x322a,0x322a,0x322a,0x322a,0x322a,0x322a,0x322a,0x322a,0x322a,0x3202,0x321d,0x3202,0x3202,0x3202,0x3202,0x3202,0x321d,0x3202,0x3202,0x3202,0x3202,0x3202,0x3202,0x3202,0x3228,0x3228,0x060a,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0620,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0620,
0x0609,0x320b,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x3259,0x0609,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,
0x0610,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x06e0,0x0610,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,
0x0620,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0621,0x0620,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,0x0601,
};

const MapScreenData	c106dun01_b1_map_data =
{
	MapSizeX_c106dun01_b1,
	MapSizeY_c106dun01_b1,
	c106dun01_b1_OutRangeCell,
	c106dun01_b1_MapData,
	&field_char_data,
	&shipyard_char_data
};

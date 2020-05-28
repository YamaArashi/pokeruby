//MapEditNH Ver.3.51 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : field.cell
//Part Cell File Name (512-1023) : limcave.cell

#define	MapSizeX_r115dun01_4	11
#define	MapSizeY_r115dun01_4	18

const u16	r115dun01_4_OutRangeCell[4]={
0x0201,0x0201,0x0201,0x0201,
};

const u16	r115dun01_4_MapData[MapSizeX_r115dun01_4*MapSizeY_r115dun01_4]={
0x0601,0x063e,0x063e,0x063e,0x063e,0x063e,0x063e,0x063e,0x063e,0x063e,0x0601,
0x0634,0x0613,0x0631,0x0631,0x0631,0x0631,0x0631,0x0631,0x0631,0x0614,0x063c,
0x0634,0x062a,0x0613,0x0631,0x0631,0x0631,0x0631,0x0631,0x0614,0x0628,0x063c,
0x0634,0x062a,0x062a,0x3201,0x3201,0x3201,0x3201,0x3201,0x0628,0x0628,0x063c,
0x0634,0x062a,0x062a,0x3201,0x3201,0x3201,0x3201,0x3201,0x0628,0x0628,0x063c,
0x0634,0x062a,0x062a,0x1180,0x1189,0x1189,0x1189,0x1181,0x0628,0x0628,0x063c,
0x0634,0x062a,0x062a,0x1190,0x1170,0x1170,0x1170,0x1192,0x0628,0x0628,0x063c,
0x0634,0x062a,0x062a,0x1190,0x1170,0x1170,0x1170,0x1192,0x0628,0x0628,0x063c,
0x0634,0x062a,0x062a,0x1190,0x1170,0x1170,0x1170,0x1192,0x0628,0x0628,0x063c,
0x0634,0x062a,0x062a,0x1190,0x1170,0x1170,0x1170,0x1192,0x0628,0x0628,0x063c,
0x0634,0x062a,0x062a,0x1190,0x1170,0x1170,0x1170,0x1192,0x0628,0x0628,0x063c,
0x0634,0x062a,0x062a,0x1190,0x1170,0x1170,0x1170,0x1192,0x0628,0x0628,0x063c,
0x0634,0x062a,0x062a,0x1190,0x1170,0x1170,0x1170,0x1192,0x0628,0x0628,0x063c,
0x0634,0x062a,0x062a,0x1190,0x1170,0x1170,0x1170,0x1192,0x0628,0x0628,0x063c,
0x0634,0x062a,0x062a,0x321e,0x321e,0x321e,0x321e,0x321e,0x0628,0x0628,0x063c,
0x0634,0x062a,0x062a,0x3201,0x3201,0x3207,0x3201,0x3201,0x0628,0x0628,0x063c,
0x0634,0x062a,0x0686,0x0686,0x067d,0x067e,0x067f,0x0686,0x0686,0x0628,0x063c,
0x0601,0x0686,0x0686,0x0686,0x0686,0x0686,0x0686,0x0686,0x0686,0x0686,0x0601,
};

const MapScreenData	r115dun01_4_map_data =
{
	MapSizeX_r115dun01_4,
	MapSizeY_r115dun01_4,
	r115dun01_4_OutRangeCell,
	r115dun01_4_MapData,
	&field_char_data,
	&limcave_char_data
};

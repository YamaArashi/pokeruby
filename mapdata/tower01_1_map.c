//MapEditNH Ver.3.55 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : field.cell
//Part Cell File Name (512-1023) : field_3.cell

#define	MapSizeX_tower01_1	29
#define	MapSizeY_tower01_1	30

const u16	tower01_1_OutRangeCell[4]={
0x0170,0x0170,0x0170,0x0170,
};

const u16	tower01_1_MapData[MapSizeX_tower01_1*MapSizeY_tower01_1]={
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0572,0x0680,0x0649,0x064a,0x064a,0x0678,0x0679,0x067a,0x067b,0x0662,0x064a,0x064a,0x0660,0x0681,0x0574,0x3170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x0572,0x0591,0x04be,0x0680,0x0649,0x064a,0x064a,0x0678,0x0679,0x067a,0x067b,0x0662,0x064a,0x064a,0x0660,0x0681,0x04bf,0x0591,0x0574,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x0572,0x0591,0x04be,0x046b,0x30d3,0x0672,0x0649,0x064a,0x064a,0x0678,0x0679,0x067a,0x067b,0x0662,0x064a,0x064a,0x0660,0x0673,0x30d4,0x046d,0x04bf,0x0574,0x1170,0x1170,0x1170,0x1170,
0x1170,0x0572,0x0591,0x04ee,0x046b,0x04be,0x0473,0x3001,0x066a,0x0649,0x064a,0x064a,0x0678,0x0679,0x067a,0x067b,0x0662,0x064a,0x064a,0x0660,0x066b,0x3001,0x30d4,0x046d,0x04bf,0x0574,0x1170,0x1170,0x1170,
0x1178,0x0473,0x0471,0x04ee,0x0473,0x046b,0x30d3,0x3001,0x0648,0x0649,0x064a,0x064a,0x0678,0x0679,0x067a,0x067b,0x0662,0x064a,0x064a,0x0660,0x0661,0x3201,0x3201,0x0475,0x046d,0x04bf,0x0574,0x1170,0x1170,
0x1192,0x0473,0x046b,0x04be,0x0473,0x0473,0x0602,0x0602,0x0648,0x0649,0x064a,0x064a,0x0678,0x0679,0x067a,0x067b,0x0662,0x064a,0x064a,0x0660,0x0661,0x0607,0x0607,0x0475,0x0475,0x0471,0x0475,0x0574,0x1170,
0x1192,0x0473,0x0473,0x0471,0x0473,0x0473,0x0602,0x3001,0x0648,0x0649,0x064a,0x064a,0x064b,0x064c,0x064d,0x064e,0x064f,0x064a,0x064a,0x0660,0x0661,0x3201,0x0607,0x0475,0x0475,0x0471,0x0475,0x0475,0x1179,
0x1192,0x0473,0x0473,0x0471,0x0473,0x0473,0x3001,0x3001,0x0650,0x0651,0x0652,0x0652,0x0653,0x0654,0x0655,0x0656,0x0657,0x0652,0x0652,0x0668,0x0669,0x3201,0x3201,0x0475,0x0475,0x0471,0x0475,0x0475,0x1179,
0x1192,0x0473,0x0473,0x046b,0x04be,0x0473,0x0602,0x3001,0x3258,0x3259,0x325a,0x325a,0x065b,0x065c,0x065d,0x065e,0x065f,0x325a,0x325a,0x3270,0x3271,0x3201,0x0607,0x0475,0x0475,0x0471,0x0475,0x0475,0x1190,
0x1192,0x0473,0x0473,0x0473,0x0471,0x0473,0x3001,0x3001,0x3001,0x3277,0x326f,0x3201,0x3263,0x3264,0x3265,0x3266,0x3267,0x3201,0x3201,0x3201,0x3201,0x3201,0x3201,0x0475,0x0475,0x0471,0x0475,0x0475,0x1190,
0x1192,0x0473,0x0473,0x0473,0x0471,0x0473,0x0602,0x3001,0x3001,0x0602,0x3277,0x326f,0x0607,0x326c,0x326d,0x326e,0x0607,0x3201,0x3201,0x0607,0x3201,0x3201,0x0607,0x0475,0x0475,0x0474,0x047d,0x0475,0x1190,
0x1192,0x0473,0x0473,0x0473,0x0471,0x0473,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3274,0x3275,0x3276,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0474,0x047d,0x0475,0x0475,0x0471,0x0475,0x1190,
0x1192,0x0473,0x0473,0x0473,0x0471,0x047b,0x0489,0x3001,0x3001,0x3001,0x3001,0x3001,0x0602,0x327c,0x327d,0x327e,0x0602,0x3001,0x3001,0x3001,0x3001,0x3001,0x0475,0x0474,0x047d,0x0475,0x0474,0x047d,0x1190,
0x1192,0x0473,0x0473,0x047b,0x0489,0x0471,0x0473,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0403,0x3001,0x3001,0x3001,0x3001,0x0474,0x047d,0x0475,0x0471,0x0475,0x0475,0x1180,0x1198,
0x1192,0x0473,0x047b,0x0489,0x0473,0x0471,0x047b,0x0489,0x0602,0x0602,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0602,0x0602,0x0475,0x0474,0x047d,0x0474,0x047d,0x0475,0x1190,0x1170,
0x1192,0x047b,0x0489,0x0473,0x047b,0x047c,0x0489,0x047b,0x0489,0x0602,0x0602,0x0602,0x3001,0x3001,0x3001,0x3001,0x3001,0x0602,0x0602,0x0602,0x0474,0x047d,0x0475,0x0471,0x0475,0x0471,0x0475,0x1190,0x1170,
0x119a,0x1181,0x0473,0x047b,0x0489,0x0471,0x0473,0x0471,0x047b,0x047c,0x047c,0x047c,0x047c,0x30af,0x30cf,0x30cf,0x047c,0x047c,0x047c,0x047c,0x047d,0x0474,0x047d,0x0471,0x0475,0x0471,0x0475,0x1190,0x1170,
0x1170,0x1192,0x047b,0x0489,0x047b,0x0489,0x047b,0x047c,0x047c,0x04a9,0x04a9,0x04a9,0x04a9,0x30af,0x30cf,0x30cf,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x047d,0x0471,0x0471,0x0475,0x0471,0x0475,0x1190,0x1170,
0x1170,0x119a,0x1181,0x0473,0x0471,0x0473,0x0471,0x0471,0x0471,0x0471,0x0474,0x04a9,0x04a9,0x30af,0x30cf,0x30cf,0x04a9,0x04a9,0x0489,0x0471,0x0471,0x0471,0x0474,0x047c,0x047d,0x0474,0x047d,0x1190,0x1170,
0x1170,0x1170,0x1192,0x0473,0x0471,0x047b,0x047c,0x047c,0x047c,0x047c,0x047d,0x0471,0x045d,0x305e,0x305e,0x305e,0x045f,0x0471,0x047b,0x047c,0x047c,0x047c,0x047d,0x0471,0x0471,0x0475,0x1180,0x1198,0x1170,
0x1170,0x1170,0x1192,0x047b,0x047c,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x047c,0x045d,0x305e,0x305e,0x305e,0x045f,0x047c,0x04a9,0x04a9,0x04a9,0x04a9,0x04a9,0x047c,0x047c,0x047d,0x1190,0x1170,0x1170,
0x1170,0x1170,0x119a,0x1189,0x1189,0x1189,0x1189,0x1189,0x1189,0x1189,0x1189,0x1189,0x045d,0x305e,0x305e,0x305e,0x045f,0x1682,0x1589,0x1589,0x1589,0x1589,0x1589,0x1589,0x1189,0x1189,0x1198,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x045d,0x305e,0x305e,0x305e,0x305e,0x3056,0x3056,0x3056,0x3056,0x3056,0x3056,0x0457,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x045d,0x305e,0x305e,0x305e,0x305e,0x305e,0x305e,0x305e,0x305e,0x305e,0x305e,0x045f,0x1286,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0683,0x0684,0x0684,0x0684,0x0684,0x0684,0x0684,0x3288,0x3289,0x0684,0x0684,0x0685,0x1286,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x128b,0x128c,0x128c,0x128c,0x128c,0x128c,0x128c,0x128c,0x128c,0x128c,0x128c,0x128d,0x1286,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
};

const MapScreenData	tower01_1_map_data =
{
	MapSizeX_tower01_1,
	MapSizeY_tower01_1,
	tower01_1_OutRangeCell,
	tower01_1_MapData,
	&field_char_data,
	&field_3_char_data
};

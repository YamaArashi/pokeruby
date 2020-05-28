//MapEditNH Ver.3.55 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : field.cell
//Part Cell File Name (512-1023) : field_1.cell

#define	MapSizeX_city101	30
#define	MapSizeY_city101	30

const u16	city101_OutRangeCell[4]={
0x01d4,0x01d5,0x01dc,0x01dd,
};

const u16	city101_MapData[MapSizeX_city101*MapSizeY_city101]={
0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,
0x05dc,0x05dd,0x05dc,0x05dd,0x0655,0x064e,0x064d,0x064e,0x064d,0x064e,0x0656,0x05f2,0x05f3,0x05f2,0x05f3,0x05f2,0x05f3,0x05f2,0x05f3,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05dc,0x05dd,0x05dc,0x05dd,
0x05d4,0x05d5,0x05d4,0x05d5,0x0644,0x0408,0x0409,0x0409,0x0409,0x040a,0x0646,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x3001,0x3001,0x3001,0x10b0,0x10b1,0x10b1,0x10b2,0x05d4,0x05d5,0x05d4,0x05d5,
0x05dc,0x05dd,0x05dc,0x05dd,0x064c,0x0410,0x0411,0x0411,0x0411,0x0412,0x064c,0x35e6,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05e4,0x35e7,0x10b0,0x10b1,0x10b1,0x10c0,0x10a1,0x10a1,0x10ba,0x05dc,0x05dd,0x05dc,0x05dd,
0x05d4,0x05d5,0x05d4,0x05d5,0x0654,0x0418,0x040b,0x0419,0x040b,0x041a,0x064c,0x063f,0x05aa,0x05ab,0x05ab,0x05ab,0x05ab,0x05ac,0x063f,0x10b8,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10ba,0x05d4,0x05d5,0x05d4,0x05d5,
0x05dc,0x05dd,0x05dc,0x05dd,0x3004,0x0420,0x0413,0x0421,0x0413,0x0422,0x064c,0x064c,0x05b2,0x05b3,0x05b3,0x05b3,0x05b3,0x05b4,0x064c,0x10b8,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10ba,0x05dc,0x05dd,0x05dc,0x05dd,
0x05d4,0x05d5,0x05d4,0x05d5,0x3004,0x3004,0x3118,0x311a,0x3004,0x3004,0x064c,0x064c,0x05b8,0x05b9,0x05ba,0x05b3,0x05bb,0x05bc,0x064c,0x10b8,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10ba,0x05d4,0x05d5,0x05d4,0x05d5,
0x05dc,0x05dd,0x05dc,0x05dd,0x3004,0x3004,0x3120,0x3122,0x3004,0x3004,0x064c,0x064c,0x05c0,0x05c1,0x05c2,0x05c5,0x05c3,0x05c4,0x064c,0x10b8,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10ba,0x05dc,0x05dd,0x05dc,0x05dd,
0x05d4,0x05d5,0x05d4,0x05d5,0x3001,0x3001,0x3120,0x3122,0x3001,0x323c,0x0666,0x064c,0x31c8,0x31c9,0x05ca,0x05cd,0x05cb,0x31cc,0x064c,0x10b8,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10ba,0x05d4,0x05d5,0x05d4,0x05d5,
0x05dc,0x05dd,0x35e4,0x35e7,0x3001,0x3001,0x3120,0x3122,0x0403,0x0664,0x0665,0x0654,0x3001,0x3001,0x3118,0x3119,0x311a,0x3130,0x0654,0x3002,0x3002,0x3002,0x3002,0x3002,0x3250,0x3251,0x0658,0x0659,0x05dc,0x05dd,
0x05d4,0x05d5,0x3001,0x3001,0x3001,0x3001,0x3120,0x3122,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3120,0x3121,0x3122,0x0531,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0430,0x0431,0x0432,0x0433,0x05d4,0x05d5,
0x35e6,0x35e7,0x3001,0x3001,0x3001,0x3001,0x3120,0x3122,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3120,0x3121,0x3122,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0438,0x0439,0x043a,0x043b,0x05dc,0x05dd,
0x3001,0x3001,0x3118,0x3119,0x3119,0x3119,0x3121,0x3121,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3121,0x3121,0x3122,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x0460,0x0441,0x0442,0x0443,0x05d4,0x05d5,
0x31ce,0x31cf,0x3128,0x3129,0x3129,0x3129,0x3129,0x3252,0x3253,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3121,0x3122,0x3001,0x3001,0x3048,0x3049,0x304a,0x304b,0x3001,0x3001,0x3118,0x311a,0x3001,0x05dc,0x05dd,
0x05d4,0x05d7,0x10b0,0x10b1,0x10b1,0x10b1,0x10b2,0x05d6,0x05d7,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3120,0x3122,0x3001,0x3001,0x0450,0x0451,0x0452,0x0453,0x3001,0x3001,0x3120,0x3122,0x3001,0x05d4,0x05d5,
0x05dc,0x05dd,0x10b8,0x10a1,0x10a1,0x10a1,0x10ba,0x05dc,0x05dd,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3120,0x3122,0x3001,0x3001,0x0458,0x0459,0x045a,0x045b,0x3001,0x3001,0x3120,0x3122,0x3001,0x35e6,0x05e5,
0x05d4,0x05d5,0x10b8,0x10a1,0x10a1,0x10a1,0x10ba,0x05d4,0x05d5,0x3008,0x3009,0x3009,0x300a,0x3001,0x3001,0x3120,0x3122,0x0403,0x3001,0x0460,0x0461,0x0462,0x0463,0x3001,0x3001,0x3120,0x3122,0x3001,0x3001,0x3001,
0x05dc,0x05dd,0x10b8,0x10a1,0x10a1,0x10a1,0x10ba,0x05dc,0x05dd,0x0410,0x0411,0x0411,0x0412,0x3001,0x3001,0x3120,0x3121,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3119,0x3121,0x3121,0x311a,0x3001,0x3001,
0x05d4,0x05d5,0x10b8,0x10a1,0x10a1,0x10a1,0x10ba,0x05d4,0x05d5,0x0418,0x0419,0x040b,0x041a,0x3001,0x3001,0x3120,0x3121,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x3129,0x312a,0x3001,0x3001,
0x05dc,0x05dd,0x10b8,0x10a1,0x10a1,0x10a1,0x10ba,0x35e6,0x35e7,0x0420,0x0421,0x0413,0x0422,0x3001,0x3001,0x3120,0x3122,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x31ce,0x31cf,0x31ce,0x31cf,
0x05d4,0x05d5,0x10b8,0x10a1,0x10a1,0x10a1,0x10ba,0x3001,0x3001,0x3001,0x3201,0x3001,0x3001,0x3001,0x3001,0x3120,0x3122,0x3001,0x323c,0x323d,0x323d,0x323d,0x323d,0x323d,0x323d,0x323e,0x05d6,0x05d5,0x05d4,0x05d5,
0x05dc,0x05dd,0x10b8,0x10a1,0x10a1,0x10a1,0x10ba,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3120,0x3122,0x3001,0x0644,0x0408,0x0409,0x0409,0x040a,0x0645,0x0645,0x0646,0x05dc,0x05dd,0x05dc,0x05dd,
0x05d4,0x05d5,0x10b8,0x10a1,0x10a1,0x10a1,0x10ba,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3120,0x3122,0x3001,0x064c,0x0410,0x0411,0x0411,0x0412,0x0407,0x0407,0x064c,0x05d4,0x05d5,0x05d4,0x05d5,
0x05dc,0x05dd,0x10b8,0x10a1,0x10a1,0x10a1,0x10c2,0x10b1,0x10b1,0x10b1,0x10b1,0x10b2,0x31ce,0x31cf,0x3001,0x3120,0x3122,0x3001,0x0654,0x0418,0x0419,0x040b,0x041a,0x0407,0x0407,0x064c,0x05dc,0x05dd,0x05dc,0x05dd,
0x05d4,0x05d5,0x10b8,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10ba,0x05d6,0x05d7,0x3004,0x3120,0x3122,0x3004,0x3001,0x0420,0x0421,0x0413,0x0422,0x3004,0x3004,0x064c,0x05d4,0x05d5,0x05d4,0x05d5,
0x05dc,0x05dd,0x10b8,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10ba,0x05dc,0x05dd,0x3001,0x3120,0x3121,0x3119,0x3119,0x3119,0x3119,0x311a,0x3001,0x3004,0x3004,0x064c,0x05dc,0x05dd,0x05dc,0x05dd,
0x05d4,0x05d5,0x10b8,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10a1,0x10ba,0x05d4,0x05d5,0x3004,0x3128,0x3129,0x3129,0x3129,0x3129,0x3129,0x312a,0x3001,0x3001,0x3001,0x0654,0x05d4,0x05d5,0x05d4,0x05d5,
0x05dc,0x05dd,0x10b8,0x10a1,0x10a1,0x11fe,0x11ff,0x11fe,0x11ff,0x11fe,0x11ff,0x10ba,0x05dc,0x05dd,0x31ce,0x31cf,0x31ce,0x31cf,0x31ce,0x31cf,0x31ce,0x31cf,0x31ce,0x31cf,0x31ce,0x31cf,0x05dc,0x05dd,0x05dc,0x05dd,
0x05d4,0x05d5,0x3002,0x3002,0x3002,0x05fc,0x05fd,0x05fc,0x05fd,0x05fc,0x05fd,0x3002,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,
0x05dc,0x05dd,0x31ce,0x31cf,0x31ce,0x05f3,0x05f2,0x05f3,0x05f2,0x05f3,0x05f2,0x31cf,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,
};

const MapScreenData	city101_map_data =
{
	MapSizeX_city101,
	MapSizeY_city101,
	city101_OutRangeCell,
	city101_MapData,
	&field_char_data,
	&field_1_char_data
};

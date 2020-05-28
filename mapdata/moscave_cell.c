//MapEditNH Ver.3.51 *.cell -> C sourse Convert.
//Part Cell Data File (512-1023)
//Full Char File Name (0-511)    : field.sch
//Part Char File Name (512-1023) : moscave.sch

#define	moscave_Max	83

const u16	moscave_CellChrData[moscave_Max*8]={
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x624b,0x624c,0x625b,0x625c,0x1000,0x1000,0x1000,0x1000,
0x6203,0x6204,0x6213,0x6214,0x1000,0x1000,0x1000,0x1000,
0x6203,0x6204,0x6213,0x6214,0x6247,0x6248,0x6257,0x6258,
0x6203,0x6204,0x6213,0x6214,0x6249,0x624a,0x6259,0x625a,
0x621e,0x621e,0x621e,0x621e,0x6201,0x6202,0x6211,0x6212,
0x621e,0x621e,0x621e,0x621e,0x6207,0x6208,0x6217,0x6218,
0x6203,0x6204,0x6214,0x6213,0x1000,0x1000,0x1000,0x1000,
0x624b,0x624c,0x625b,0x625c,0x1000,0x6220,0x6220,0x6632,
0x624b,0x624c,0x625b,0x625c,0x6221,0x6221,0x6231,0x6231,
0x624b,0x624c,0x625b,0x625c,0x6222,0x1000,0x6232,0x6222,
0x622e,0x622e,0x622e,0x6223,0x1000,0x1000,0x1000,0x1000,
0x622e,0x622e,0x6224,0x6225,0x1000,0x1000,0x1000,0x1000,
0x622e,0x622e,0x6226,0x622e,0x1000,0x1000,0x1000,0x1000,
0x6203,0x6204,0x6213,0x6214,0x620b,0x620c,0x621b,0x621c,
0x622e,0x622e,0x622e,0x622e,0x620b,0x620c,0x621b,0x621c,
0x624b,0x624c,0x625b,0x625c,0x6632,0x6632,0x6632,0x6632,
0x621e,0x621e,0x621e,0x621e,0x1000,0x1000,0x1000,0x1000,
0x624b,0x624c,0x625b,0x625c,0x6232,0x6232,0x6232,0x6232,
0x622e,0x6233,0x622e,0x6243,0x1000,0x1000,0x1000,0x1000,
0x6234,0x6235,0x6244,0x6245,0x1000,0x1000,0x1000,0x1000,
0x6236,0x622e,0x6246,0x622e,0x1000,0x1000,0x1000,0x1000,
0x6203,0x6204,0x6213,0x6214,0x622b,0x622c,0x623b,0x623c,
0x6203,0x6204,0x6213,0x6214,0x622b,0x622c,0x623b,0x623c,
0x624b,0x624c,0x625b,0x625c,0x6632,0x6240,0x6240,0x6241,
0x624b,0x624c,0x625b,0x625c,0x6241,0x6241,0x6241,0x6241,
0x624b,0x624c,0x625b,0x625c,0x6242,0x6232,0x6241,0x6242,
0x621e,0x621e,0x621e,0x621e,0x6232,0x6241,0x6232,0x6232,
0x621e,0x6632,0x6632,0x621e,0x6241,0x6632,0x6632,0x6632,
0x6229,0x622e,0x6229,0x622e,0x1000,0x1000,0x1000,0x1000,
0x622e,0x622a,0x622e,0x622a,0x1000,0x1000,0x1000,0x1000,
0x6205,0x6206,0x6215,0x6216,0x1000,0x1000,0x1000,0x1000,
0x621e,0x621e,0x621e,0x621e,0x1000,0x6220,0x6220,0x6632,
0x621e,0x621e,0x621e,0x621e,0x6221,0x6221,0x6231,0x6231,
0x621e,0x621e,0x621e,0x621e,0x6222,0x1000,0x6232,0x6222,
0x6221,0x6221,0x6231,0x6231,0x1000,0x6220,0x6220,0x6632,
0x6221,0x6221,0x6231,0x6231,0x6222,0x1000,0x621f,0x6222,
0x621d,0x621d,0x621d,0x621d,0x1000,0x6220,0x6220,0x6632,
0x621f,0x621f,0x621f,0x621f,0x6222,0x1000,0x621f,0x6222,
0x6209,0x620a,0x6219,0x621a,0x1000,0x1000,0x1000,0x1000,
0x6203,0x6204,0x6213,0x6214,0x1000,0x6220,0x6220,0x6632,
0x6203,0x6204,0x6213,0x6214,0x6221,0x6221,0x6231,0x6231,
0x6203,0x6204,0x621e,0x6214,0x6222,0x1000,0x6232,0x6222,
0x620d,0x620e,0x621d,0x621e,0x1000,0x1000,0x1000,0x1000,
0x620e,0x620f,0x621e,0x621f,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x6227,0x6228,0x6237,0x6238,0x1000,0x1000,0x1000,0x1000,
0x621e,0x621e,0x621e,0x621e,0x1000,0x6220,0x6220,0x6632,
0x621e,0x621e,0x621e,0x621e,0x6221,0x6221,0x6231,0x6231,
0x621e,0x621e,0x621e,0x621e,0x6222,0x1000,0x6232,0x6222,
0x621e,0x621e,0x621e,0x621e,0x6220,0x6221,0x6230,0x6231,
0x621e,0x621e,0x621e,0x621e,0x6221,0x6222,0x6231,0x6232,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x621e,0x621e,0x621e,0x621e,0x6230,0x1000,0x6230,0x1000,
0x621e,0x621e,0x621e,0x621e,0x1000,0x6232,0x1000,0x6232,
0x621d,0x6203,0x621d,0x6213,0x1000,0x1000,0x1000,0x1000,
0x6204,0x621f,0x6214,0x621f,0x1000,0x1000,0x1000,0x1000,
0x621e,0x621e,0x621e,0x621e,0x1000,0x1000,0x6241,0x6241,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x621e,0x621e,0x621e,0x621e,0x6230,0x1000,0x6240,0x6241,
0x621e,0x621e,0x621e,0x621e,0x1000,0x6232,0x6241,0x6242,
0x621d,0x6203,0x622d,0x622e,0x1000,0x1000,0x1000,0x1000,
0x6204,0x621f,0x622e,0x622f,0x1000,0x1000,0x1000,0x1000,
0x6203,0x6204,0x622e,0x622e,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x621e,0x621e,0x621e,0x6231,0x1000,0x1000,0x1000,0x6242,
0x621e,0x621e,0x6231,0x621e,0x6200,0x1000,0x6240,0x1000,
0x6203,0x6204,0x6213,0x621f,0x1000,0x1000,0x1000,0x1000,
0x6203,0x6204,0x621d,0x6214,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x6221,0x6250,0x621e,0x621e,0x1000,0x1000,0x1000,0x1000,
0x6251,0x6252,0x621e,0x621e,0x1000,0x1000,0x1000,0x1000,
0x6253,0x6221,0x621e,0x621e,0x1000,0x1000,0x1000,0x1000,
};

const u16	moscave_CellAtbData[moscave_Max]={
0x0000,0x0008,0x0008,0x1000,0x1000,0x1000,0x1000,0x0065,
0x1000,0x1008,0x1000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x1000,0x1008,0x1000,0x0000,0x0061,0x0000,0x1061,0x1061,
0x1000,0x1000,0x1000,0x1000,0x1000,0x0000,0x0000,0x0008,
0x1000,0x1032,0x1000,0x1000,0x1000,0x1000,0x1000,0x0061,
0x0000,0x0032,0x0000,0x0000,0x0000,0x0000,0x0000,0x0066,
0x0000,0x0032,0x0000,0x1000,0x1000,0x0000,0x0000,0x0000,
0x1039,0x1038,0x0039,0x0038,0x103b,0x0000,0x0000,0x0000,
0x103f,0x103e,0x003f,0x003e,0x003b,0x0000,0x0000,0x0000,
0x1000,0x1000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,
};

//MapEditNH Ver.3.55 *.cell -> C sourse Convert.
//Part Cell Data File (512-1023)
//Full Char File Name (0-511)    : field.sch
//Part Char File Name (512-1023) : shipyard.sch

#define	shipyard_Max	510

const u16	shipyard_CellChrData[shipyard_Max*8]={
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0xb201,0xb201,0xb201,0xb201,0x1000,0x1000,0x1000,0x1000,
0x8294,0x8295,0x8294,0x8295,0x1000,0x1000,0x1000,0x1000,
0x8284,0x8285,0x8284,0x8285,0x1000,0x1000,0x1000,0x1000,
0x8284,0x8285,0x8294,0x8295,0x1000,0x1000,0x1000,0x1000,
0x8294,0x8295,0x8294,0x8295,0x62d6,0x62d7,0x62e6,0x62e7,
0x6202,0x6203,0x6212,0x6213,0x1000,0x1000,0x1000,0x1000,
0x6204,0x6205,0x6214,0x6215,0x1000,0x1000,0x1000,0x1000,
0x8294,0x8295,0x8294,0x8295,0x1000,0x1000,0x620e,0x620f,
0x6220,0x6221,0x6220,0x6221,0x1000,0x1000,0x620e,0x620f,
0x6220,0x6221,0x6220,0x6221,0x1000,0x1000,0x1000,0x1000,
0x7320,0x7321,0x7330,0x7331,0x1000,0x1000,0x622e,0x622e,
0x8294,0x8295,0x8294,0x8295,0x6280,0x6281,0x6290,0x6291,
0x8294,0x8295,0x8294,0x8295,0x6282,0x6283,0x6292,0x6293,
0x6324,0x6324,0x6334,0x6334,0x1000,0x1000,0x62c0,0x62c1,
0x6324,0x6324,0x6334,0x6334,0x1000,0x1000,0x62c2,0x62c3,
0x621e,0x621f,0x6312,0x6313,0x1000,0x1000,0x1000,0x1000,
0x621e,0x621f,0x6210,0x6211,0x1000,0x1000,0x1000,0x1000,
0x8284,0x8285,0x8294,0x8295,0x6325,0x6326,0x1000,0x1000,
0x7320,0x7321,0x7330,0x7331,0x6325,0x6326,0x1000,0x1000,
0x8284,0x8285,0x8284,0x8285,0x62a0,0x62a1,0x62b0,0x62b1,
0x8284,0x8285,0x8284,0x8285,0x62a2,0x62a3,0x62b2,0x62b3,
0x8294,0x8295,0x8294,0x8295,0x62d0,0x62d1,0x62e0,0x62e1,
0x8294,0x8295,0x8294,0x8295,0x62d2,0x62d3,0x62e2,0x62e3,
0x6302,0x6303,0x6312,0x6313,0x1000,0x1000,0x1000,0x1000,
0x8294,0x8295,0x8294,0x8295,0x6307,0x6307,0x6314,0x6314,
0x6307,0x6307,0x6314,0x6314,0x724e,0x724f,0x725e,0x725f,
0x6307,0x6307,0x6314,0x6314,0x1000,0x1000,0x62a4,0x62a5,
0x6307,0x6307,0x6314,0x6314,0x1000,0x1000,0x62a6,0x62a7,
0x8294,0x8295,0x8294,0x8295,0x6286,0x6287,0x6296,0x6297,
0x7300,0x7301,0x7310,0x7311,0x1000,0x1000,0x620e,0x620f,
0x7320,0x7321,0x7330,0x7331,0x726c,0x726c,0x727c,0x727c,
0x6322,0x6323,0x6332,0x6333,0x1000,0x1000,0x1000,0x1000,
0x6324,0x6324,0x6334,0x6334,0x1000,0x1000,0x1000,0x1000,
0x6324,0x6324,0x6334,0x6334,0x726e,0x726f,0x1000,0x1000,
0x6324,0x6324,0x6334,0x6334,0x62b4,0x62b5,0x1000,0x1000,
0x6324,0x6324,0x6334,0x6334,0x62b6,0x62b7,0x1000,0x1000,
0x8284,0x8285,0x8294,0x8295,0x6286,0x6287,0x6296,0x6297,
0x7320,0x7321,0x7330,0x7331,0x1000,0x1000,0x620e,0x620f,
0x7320,0x7321,0x7330,0x7331,0x727c,0x727c,0x727c,0x727c,
0x7300,0x7301,0x7310,0x7311,0x1000,0x1000,0x1000,0x1000,
0x7320,0x7321,0x7330,0x7331,0x1000,0x1000,0x1000,0x1000,
0x7320,0x7321,0x7310,0x7311,0x1000,0x1000,0x1000,0x1000,
0x623e,0x623e,0x6314,0x6314,0x1000,0x1000,0x6206,0x6207,
0x623e,0x623e,0x6314,0x6314,0x1000,0x1000,0x6208,0x6209,
0x623e,0x623e,0x6314,0x6314,0x1000,0x1000,0x6609,0x6608,
0x623e,0x623e,0x6314,0x6314,0x1000,0x1000,0x6607,0x6606,
0x7320,0x7321,0x7330,0x7331,0x727c,0x727c,0x728c,0x728c,
0x6324,0x6324,0x6334,0x6334,0x6222,0x6223,0x6232,0x6233,
0x6324,0x6324,0x6334,0x6334,0x6224,0x6225,0x6234,0x6235,
0x6324,0x6324,0x6334,0x6334,0x62c4,0x62c5,0x62d4,0x62d5,
0x6324,0x6324,0x6334,0x6334,0x6216,0x6217,0x6226,0x6227,
0x6324,0x6324,0x6334,0x6334,0x6218,0x6219,0x6228,0x6229,
0x6324,0x6324,0x6334,0x6334,0x6619,0x6618,0x6629,0x6628,
0x6324,0x6324,0x6334,0x6334,0x6617,0x6616,0x6627,0x6626,
0x7320,0x7321,0x7330,0x7331,0x728c,0x728c,0x728c,0x728c,
0x7320,0x7321,0x7330,0x7331,0x6242,0x6243,0x1000,0x1000,
0x7320,0x7321,0x7330,0x7331,0x6244,0x6245,0x1000,0x1000,
0x7320,0x7321,0x7330,0x7331,0x62e4,0x62e5,0x1000,0x1000,
0x7320,0x7321,0x7330,0x7331,0x6236,0x6237,0x6246,0x6247,
0x7320,0x7321,0x7330,0x7331,0x6238,0x6239,0x6248,0x6249,
0x7320,0x7321,0x7330,0x7331,0x6639,0x6638,0x6649,0x6648,
0x7320,0x7321,0x7330,0x7331,0x6637,0x6636,0x6647,0x6646,
0x6304,0x6304,0x6314,0x6314,0x726a,0x726b,0x727a,0x727b,
0x8294,0x8295,0x8294,0x8295,0x1000,0x1000,0x6250,0x6251,
0x8294,0x8295,0x8294,0x8295,0x1000,0x1000,0x6253,0x6254,
0x8294,0x8295,0x8294,0x8295,0x1000,0x1000,0x6251,0x6252,
0x7320,0x7321,0x7330,0x7331,0x6256,0x6257,0x6266,0x6267,
0x7320,0x7321,0x7330,0x7331,0x6258,0x6259,0x6268,0x6269,
0x7320,0x7321,0x7330,0x7331,0x6659,0x6658,0x6669,0x6668,
0x7320,0x7321,0x7330,0x7331,0x6657,0x6656,0x6667,0x6666,
0x6324,0x6324,0x6334,0x6334,0x728a,0x728b,0x729a,0x729b,
0x8294,0x8295,0x8284,0x8285,0x6260,0x6261,0x6270,0x6271,
0x8294,0x8295,0x8284,0x8285,0x6263,0x6264,0x6273,0x6274,
0x8294,0x8295,0x8284,0x8285,0x6261,0x6262,0x6271,0x6272,
0x7320,0x7321,0x7330,0x7331,0x6276,0x6277,0x1000,0x1000,
0x7320,0x7321,0x7330,0x7331,0x6278,0x6279,0x6288,0x6289,
0x7320,0x7321,0x7330,0x7331,0x6679,0x6678,0x6689,0x6688,
0x7320,0x7321,0x7330,0x7331,0x6677,0x6676,0x1000,0x1000,
0x7320,0x7321,0x7330,0x7331,0x728a,0x728b,0x729a,0x729b,
0x8294,0x8295,0x8294,0x8295,0x628d,0x628e,0x629d,0x629e,
0x8294,0x8295,0x8294,0x8295,0x628e,0x628e,0x629e,0x629e,
0x8294,0x8295,0x8294,0x8295,0x628e,0x628f,0x629e,0x629f,
0x6307,0x6307,0x6314,0x6314,0x1000,0x1000,0x1000,0x620b,
0x6307,0x6307,0x6314,0x6314,0x1000,0x1000,0x620c,0x1000,
0x7320,0x7321,0x7330,0x7331,0x6298,0x6299,0x62a8,0x62a9,
0x7320,0x7321,0x7330,0x7331,0x6699,0x6698,0x66a9,0x66a8,
0x7300,0x7301,0x7310,0x7311,0x728a,0x728b,0x729a,0x729b,
0x8294,0x6324,0x8294,0x6334,0x62ad,0x1000,0x62ad,0x1000,
0x7300,0x7301,0x7310,0x7311,0x1000,0x1000,0x622e,0x622e,
0x6324,0x8295,0x6334,0x8295,0x1000,0x62af,0x1000,0x62af,
0x6324,0x6324,0x6334,0x6334,0x621a,0x621b,0x622a,0x622b,
0x6324,0x6324,0x6334,0x6334,0x621c,0x621d,0x622c,0x622d,
0x7300,0x7301,0x7330,0x7331,0x628d,0x628e,0x629d,0x629e,
0x7300,0x7301,0x7330,0x7331,0x628e,0x628f,0x629e,0x629f,
0x7300,0x7301,0x7310,0x7311,0x728a,0x728b,0x729a,0x729b,
0x7320,0x7321,0x7330,0x7331,0x62ad,0x1000,0x62ad,0x62ae,
0x7305,0x7306,0x7315,0x7316,0x1000,0x1000,0x1000,0x1000,
0x7300,0x7301,0x7310,0x7311,0x1000,0x62af,0x62ae,0x62af,
0x7320,0x7321,0x7330,0x7331,0x623a,0x623b,0x624a,0x624b,
0x7320,0x7321,0x7330,0x7331,0x623c,0x623d,0x624c,0x624d,
0x7300,0x7301,0x7330,0x7331,0x628d,0x628e,0x62de,0x629e,
0x7300,0x7301,0x7330,0x7331,0x628e,0x628f,0x629e,0x62df,
0x41c6,0x41c7,0x41c7,0x41c6,0x0000,0x0000,0x0000,0x0000,
0x8294,0x7321,0x8294,0x7331,0x62bd,0x62be,0x62cd,0x62ce,
0x7300,0x7301,0x7330,0x7331,0x62be,0x62be,0x62ce,0x62ce,
0x7320,0x8295,0x7330,0x8295,0x62be,0x62bf,0x62ce,0x62cf,
0x7320,0x7321,0x7330,0x7331,0x625a,0x625b,0x1000,0x1000,
0x7320,0x7321,0x7330,0x7331,0x625c,0x625d,0x1000,0x1000,
0x7300,0x7301,0x7310,0x7311,0x3042,0x3043,0x3052,0x3053,
0x7300,0x7301,0x7310,0x7311,0x1040,0x3041,0x3050,0x3051,
0x7300,0x7301,0x7310,0x7311,0x3044,0x1045,0x3054,0x3055,
0x7300,0x7301,0x7330,0x7331,0x628d,0x628e,0x629d,0x629e,
0x7300,0x7301,0x7330,0x7331,0x628e,0x628f,0x629e,0x629f,
0x3082,0x3083,0x3098,0x3099,0x1000,0x1000,0x6206,0x6207,
0x3082,0x3083,0x3098,0x3099,0x1000,0x1000,0x6208,0x6209,
0x3082,0x3083,0x3098,0x3099,0x1000,0x1000,0x6609,0x6608,
0x3082,0x3083,0x3098,0x3099,0x1000,0x1000,0x6607,0x6606,
0x7320,0x7321,0x7330,0x7331,0x3060,0x3061,0x3070,0x3071,
0x7320,0x7321,0x7330,0x7331,0x3064,0x3065,0x3074,0x3075,
0x7300,0x7321,0x7330,0x7331,0x62bd,0x628f,0x62cd,0x62ce,
0x7300,0x7301,0x7330,0x7331,0x628d,0x62bf,0x62ce,0x62cf,
0x3097,0x3098,0x3092,0x3093,0x6216,0x6217,0x6226,0x6227,
0x3097,0x3098,0x3092,0x3093,0x6218,0x6219,0x6228,0x6229,
0x3097,0x3098,0x3092,0x3093,0x6619,0x6618,0x6629,0x6628,
0x3097,0x3098,0x3092,0x3093,0x6617,0x6616,0x6627,0x6626,
0x7320,0x7321,0x7330,0x7331,0x3080,0x3081,0x3090,0x3091,
0x7320,0x7321,0x7330,0x7331,0x3084,0x3085,0x3094,0x3095,
0x3082,0x3083,0x3098,0x3099,0x620a,0x620b,0x621a,0x621b,
0x3082,0x3083,0x3098,0x3099,0x620c,0x620d,0x621c,0x621d,
0x7300,0x7301,0x7310,0x7311,0x620a,0x620b,0x621a,0x621b,
0x7300,0x7301,0x7310,0x7311,0x620c,0x620d,0x621c,0x621d,
0x7320,0x7321,0x7330,0x7331,0x62d6,0x62d7,0x62e6,0x62e7,
0x7320,0x7321,0x7330,0x7331,0x6286,0x6287,0x6296,0x6297,
0x7320,0x7321,0x7330,0x7331,0x628d,0x628e,0x629d,0x629e,
0x7320,0x7321,0x7330,0x7331,0x628e,0x628f,0x629e,0x629f,
0x3097,0x3098,0x3092,0x3093,0x622a,0x622b,0x623a,0x623b,
0x3097,0x3098,0x3092,0x3093,0x622c,0x622d,0x623c,0x623d,
0x7320,0x7321,0x7330,0x7331,0x620a,0x620b,0x621a,0x621b,
0x7320,0x7321,0x7330,0x7331,0x620c,0x620d,0x621c,0x621d,
0x7320,0x7301,0x7330,0x7311,0x1000,0x1000,0x620e,0x620f,
0x7320,0x7321,0x7330,0x7331,0x1000,0x62ad,0x1000,0x62ad,
0x7320,0x7321,0x7330,0x7331,0x628d,0x628e,0x62de,0x629e,
0x7320,0x7321,0x7330,0x7331,0x628e,0x628f,0x629e,0x62df,
0x7320,0x7321,0x7330,0x7331,0x624a,0x624b,0x625a,0x625b,
0x7320,0x7321,0x7330,0x7331,0x624c,0x624d,0x625c,0x625d,
0x7300,0x7321,0x7310,0x7331,0x1040,0x3041,0x3050,0x3051,
0x7320,0x7301,0x7330,0x7311,0x3044,0x1045,0x3054,0x3055,
0x7300,0x7301,0x7330,0x7331,0x1040,0x3041,0x3050,0x3051,
0x7300,0x7301,0x7310,0x7311,0x628d,0x628f,0x62de,0x629f,
0x7300,0x7301,0x7310,0x7311,0x628d,0x628f,0x629d,0x62df,
0x7320,0x7321,0x7330,0x7331,0x628e,0x628e,0x629e,0x629e,
0x7300,0x7301,0x7310,0x7331,0x1000,0x1000,0x1000,0x1000,
0x7300,0x7301,0x7330,0x7311,0x1000,0x1000,0x1000,0x1000,
0x3062,0x3063,0x3072,0x3073,0x1000,0x1000,0x1000,0x1000,
0x8284,0x8285,0x8284,0x8285,0x1000,0x1000,0x1000,0x1000,
0x7320,0x7321,0x7330,0x7331,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x7300,0x7301,0x7310,0x7311,
0x6302,0x6303,0x6312,0x6313,0x629e,0x629e,0x1000,0x1000,
0x6304,0x6304,0x6314,0x6314,0x629e,0x629e,0x1000,0x1000,
0x7300,0x7321,0x7310,0x7331,0x1000,0x1000,0x1000,0x1000,
0x7320,0x7301,0x7330,0x7311,0x1000,0x1000,0x1000,0x1000,
0x7320,0x7321,0x7330,0x7331,0x628d,0x628e,0x629d,0x629e,
0x7320,0x7321,0x7330,0x7331,0x628e,0x628f,0x629e,0x629f,
0x7300,0x8295,0x7310,0x8295,0x1000,0x62af,0x1000,0x62af,
0x7320,0x7301,0x7330,0x7311,0x7320,0x7301,0x7330,0x7311,
0x7320,0x7321,0x7310,0x7311,0x1000,0x62ad,0x1000,0x62ad,
0x41c8,0x41c9,0x41cd,0x41cc,0x1000,0x1000,0x1000,0x1000,
0x7300,0x7321,0x7310,0x7311,0x1000,0x1000,0x1000,0x1000,
0x7320,0x7301,0x7310,0x7311,0x1000,0x1000,0x1000,0x1000,
0x7320,0x7321,0x7330,0x7331,0x62bd,0x628f,0x62cd,0x62ce,
0x7320,0x7321,0x7330,0x7331,0x628d,0x62bf,0x62ce,0x62cf,
0x7300,0x8295,0x7330,0x7331,0x62be,0x62bf,0x62ce,0x62cf,
0x7320,0x7301,0x7310,0x7311,0x7320,0x7301,0x7310,0x7311,
0x41c8,0x41c9,0x41c9,0x41cc,0x1000,0x1000,0x1000,0x1000,
0x41c8,0x41cd,0x41c9,0x41cc,0x1000,0x1000,0x1000,0x1000,
0x7320,0x7321,0x7310,0x7331,0x1000,0x1000,0x1000,0x1000,
0x7320,0x7321,0x7330,0x7311,0x1000,0x1000,0x1000,0x1000,
0x6314,0x6314,0x6314,0x6314,0x1000,0x1000,0x1000,0x1000,
0x6302,0x6307,0x6312,0x6329,0x1000,0x1000,0x1000,0x6317,
0x6307,0x6307,0x6329,0x6329,0x1000,0x1000,0x6317,0x6317,
0x6307,0x6303,0x6329,0x6313,0x1000,0x1000,0x6317,0x1000,
0x8284,0x8285,0x8294,0x8295,0x6325,0x1000,0x1000,0x1000,
0x8284,0x8285,0x8294,0x8295,0x1000,0x6326,0x1000,0x1000,
0x831c,0x831d,0x832c,0x832d,0x6222,0x6223,0x6232,0x6233,
0x831c,0x831d,0x832c,0x832d,0x6224,0x6225,0x6234,0x6235,
0x831c,0x831d,0x832c,0x832d,0x62c4,0x62c5,0x62d4,0x62d5,
0x6322,0x6327,0x6332,0x6337,0x1000,0x1000,0x1000,0x1000,
0x6328,0x6328,0x6338,0x6338,0x1000,0x1000,0x1000,0x1000,
0x6328,0x6323,0x6338,0x6333,0x1000,0x1000,0x1000,0x1000,
0x7320,0x7321,0x7310,0x7311,0x6325,0x1000,0x1000,0x1000,
0x7320,0x7321,0x7310,0x7311,0x1000,0x6326,0x1000,0x1000,
0x833c,0x833d,0x8284,0x8285,0x6242,0x6243,0x1000,0x1000,
0x833c,0x833d,0x8284,0x8285,0x6244,0x6245,0x1000,0x1000,
0x833c,0x833d,0x8284,0x8285,0x62e4,0x62e5,0x1000,0x1000,
0x6302,0x6307,0x6312,0x6329,0x1000,0x1000,0x1000,0x6317,
0x6307,0x6307,0x6329,0x6329,0x1000,0x1000,0x6317,0x6317,
0x6307,0x6303,0x6329,0x6313,0x1000,0x1000,0x6317,0x1000,
0x7320,0x7321,0x7330,0x7331,0x6325,0x1000,0x1000,0x1000,
0x7320,0x7321,0x7330,0x7331,0x1000,0x6326,0x1000,0x1000,
0x3048,0x3340,0x3053,0x3072,0x1000,0x1000,0x1000,0x1000,
0x3341,0x3342,0x3073,0x3072,0x1000,0x1000,0x1000,0x1000,
0x3343,0x3049,0x3073,0x3052,0x1000,0x1000,0x1000,0x1000,
0x6322,0x6329,0x6332,0x6739,0x1000,0x1000,0x1000,0x1000,
0x6329,0x6329,0x6319,0x6319,0x1000,0x1000,0x1000,0x1000,
0x6329,0x6323,0x6339,0x6333,0x1000,0x1000,0x1000,0x1000,
0x30b8,0x30b9,0x30b8,0x30b9,0x1000,0x1000,0x1000,0x1000,
0x30b9,0x30b9,0x30b9,0x30b9,0x1000,0x1000,0x1000,0x1000,
0x623e,0x623e,0x6314,0x6314,0x1000,0x1000,0x6206,0x6207,
0x623e,0x623e,0x6314,0x6314,0x1000,0x1000,0x6208,0x6209,
0x623e,0x623e,0x6314,0x6314,0x1000,0x1000,0x6609,0x6608,
0x623e,0x623e,0x6314,0x6314,0x1000,0x1000,0x6607,0x6606,
0x623e,0x623e,0x6314,0x6314,0x1000,0x1000,0x62a4,0x62a5,
0x623e,0x623e,0x6314,0x6314,0x1000,0x1000,0x62a6,0x62a7,
0x623e,0x623e,0x6314,0x6314,0x1000,0x1000,0x1000,0x620b,
0x623e,0x623e,0x6314,0x6314,0x1000,0x1000,0x620c,0x1000,
0xb201,0xb201,0xb201,0xb201,0x1000,0x1000,0x622e,0x622e,
0x6220,0x6221,0x6210,0x6211,0x621e,0x621f,0x620e,0x620f,
0x830a,0x830b,0x831a,0x831b,0x1000,0x1000,0x1000,0x1000,
0xb201,0xb201,0xb201,0xb201,0x830c,0x830d,0x831c,0x831d,
0x830a,0x830b,0x831a,0x831b,0x830c,0x830d,0x831c,0x831d,
0x639a,0x679a,0x63aa,0x67aa,0x52cb,0x52cc,0x52db,0x52dc,
0x30b8,0x30b9,0x30b8,0x30b9,0x1000,0x1000,0x1000,0x1000,
0x830a,0x830b,0x831a,0x831b,0x620b,0x660b,0x6a0b,0x6e0b,
0x623e,0x623e,0x6314,0x6314,0x1000,0x1000,0x6206,0x1000,
0xb201,0xb201,0xb201,0xb201,0x1000,0x1000,0x620e,0x620f,
0x832a,0x832b,0x833a,0x833b,0x1000,0x1000,0x1000,0x1000,
0x832c,0x832d,0x833c,0x833d,0x1000,0x1000,0x1000,0x1000,
0x9b58,0x9356,0x9348,0x9346,0x1800,0x1000,0x1000,0x1000,
0x639b,0x679b,0x63ab,0x67ab,0x52eb,0x52ec,0x52fb,0x52fc,
0x9374,0x9375,0x9374,0x9376,0x1000,0x1000,0x1000,0x1000,
0x9384,0x9385,0x9384,0x9386,0x1000,0x1000,0x1000,0x1000,
0x9384,0x9385,0x9384,0x9386,0x6325,0x1000,0x1000,0x1000,
0x9384,0x9385,0x9384,0x9386,0x1000,0x6326,0x1000,0x1000,
0x9356,0x9b58,0x9346,0x9348,0x1000,0x1800,0x1000,0x1000,
0x9346,0x9348,0x9356,0x9358,0x1000,0x1000,0x1000,0x1000,
0x9348,0x9346,0x9358,0x9356,0x1000,0x1000,0x1000,0x1000,
0x9374,0x9375,0x9384,0x9386,0x5368,0x5369,0x5378,0x5379,
0x9374,0x9375,0x9384,0x9386,0x9368,0x9369,0x9378,0x9379,
0x9356,0x9356,0x9346,0x9346,0x1000,0x1000,0x1000,0x1000,
0x630e,0x630f,0x630f,0x630e,0x1000,0x1000,0x1000,0x1000,
0x631e,0x631f,0x631f,0x631e,0x1000,0x1000,0x1000,0x1000,
0x631e,0x631f,0x632f,0x632e,0x6325,0x6326,0x1000,0x1000,
0x631e,0x631f,0x632f,0x632e,0x1000,0x1000,0x1000,0x1000,
0x632e,0x632f,0x631f,0x631e,0x733e,0x733f,0x734e,0x734f,
0x632e,0x632f,0x631f,0x631e,0x773f,0x773e,0x774f,0x774e,
0x632e,0x632f,0x630f,0x630e,0x1000,0x1000,0x1000,0x1000,
0x9346,0x9346,0x9356,0x9356,0x1000,0x1000,0x1000,0x1000,
0x6307,0x6307,0x6314,0x6314,0x1000,0x1000,0x9352,0x9353,
0x6372,0x6373,0x6382,0x6383,0x1000,0x1000,0x1000,0x1000,
0x6329,0x6329,0x632f,0x632e,0x6350,0x6351,0x6360,0x6361,
0x631e,0x631f,0x631f,0x631e,0x62d6,0x62d7,0x62e6,0x62e7,
0x639a,0x679a,0x63aa,0x67aa,0x0000,0x0000,0x9250,0x9251,
0x639a,0x679a,0x63aa,0x67aa,0x0000,0x0000,0x9251,0x9251,
0x639a,0x679a,0x63aa,0x67aa,0x0000,0x0000,0x9251,0x9252,
0x639a,0x679a,0x63aa,0x67aa,0x0000,0x0000,0x9791,0x9790,
0x6324,0x6324,0x6334,0x6334,0x9362,0x9363,0x1000,0x1000,
0x632e,0x632f,0x630f,0x630e,0x1000,0x1000,0x1000,0x1000,
0x630e,0x630f,0x630f,0x630e,0x6370,0x6371,0x6380,0x6381,
0x6329,0x6329,0x632f,0x632e,0x62ce,0x62ce,0x92c8,0x92c9,
0x639a,0x679a,0x63ab,0x67ab,0x9260,0x9261,0x9260,0x9261,
0x639a,0x679a,0x63ab,0x67ab,0x9261,0x9261,0x9261,0x9261,
0x639a,0x679a,0x63ab,0x67ab,0x9261,0x9262,0x9261,0x9262,
0x639a,0x679a,0x63ab,0x67ab,0x97a1,0x97a0,0x97b1,0x97b0,
0x632e,0x632f,0x630f,0x630e,0x1000,0x1000,0x628e,0x628e,
0x632e,0x632f,0x630f,0x630e,0x1000,0x1000,0x628e,0x628f,
0x632e,0x632f,0x630f,0x630e,0x1000,0x1000,0x628d,0x628e,
0x630e,0x630f,0x630f,0x630e,0x92d8,0x92d9,0x92e8,0x92e9,
0x639b,0x679b,0x63aa,0x67aa,0x9270,0x9271,0x1000,0x1000,
0x639b,0x679b,0x63aa,0x67aa,0x9271,0x9271,0x1000,0x1000,
0x639b,0x679b,0x63aa,0x67aa,0x9271,0x9272,0x1000,0x1000,
0x9357,0x9356,0x9347,0x9346,0x1000,0x1000,0x1000,0x1000,
0x630e,0x630f,0x6329,0x6329,0x62ce,0x62ce,0x1000,0x1000,
0x630e,0x630f,0x6329,0x6329,0x629e,0x629f,0x1000,0x62af,
0x630e,0x630f,0x6329,0x6329,0x629d,0x629e,0x62ad,0x1000,
0x630e,0x630f,0x630f,0x630e,0x92f8,0x92f9,0x92c8,0x92c9,
0x6302,0x6307,0x6312,0x6317,0x1000,0x1000,0x1000,0x1000,
0x6307,0x6307,0x6317,0x6317,0x1000,0x1000,0x1000,0x1000,
0x6307,0x6303,0x6317,0x6313,0x1000,0x1000,0x1000,0x1000,
0x9347,0x9346,0x9357,0x9356,0x1000,0x1000,0x1000,0x1000,
0x6329,0x6329,0x6329,0x6329,0x1000,0x1000,0x62be,0x62be,
0x6329,0x6329,0x6329,0x6329,0x1000,0x62af,0x62be,0x62bf,
0x6329,0x6329,0x6329,0x6329,0x62ad,0x62ae,0x62bd,0x62be,
0x630e,0x630f,0x630f,0x630e,0x92d8,0x92d9,0x92e8,0x92e9,
0x6322,0x6b17,0x6332,0x831c,0x1000,0x830c,0x1000,0x38fe,
0x6b17,0x6b17,0x831c,0x831c,0x830d,0x830c,0x38fe,0x38fe,
0x6b17,0x6323,0x831c,0x6333,0x830d,0x1000,0x38fe,0x1000,
0x9356,0x9359,0x9346,0x9349,0x1000,0x1000,0x1000,0x1000,
0x6329,0x6329,0x632f,0x632e,0x62ce,0x62ce,0x1000,0x1000,
0x6329,0x6329,0x632f,0x632e,0x62ce,0x62cf,0x1000,0x1000,
0x6329,0x6329,0x632f,0x632e,0x62cd,0x62ce,0x1000,0x1000,
0x630e,0x630f,0x630f,0x630e,0x92f8,0x92f9,0x1000,0x1000,
0x2002,0x2003,0x2003,0x2002,0x7368,0x7369,0x7378,0x7379,
0x2002,0x2003,0x2003,0x2002,0x9368,0x9369,0x9378,0x9379,
0x9384,0x9385,0x9384,0x9386,0x9368,0x9369,0x9378,0x9379,
0x9346,0x9349,0x9356,0x9359,0x1000,0x1000,0x1000,0x1000,
0x6327,0x6328,0x6337,0x6338,0x1000,0x1000,0x1000,0x1000,
0x6328,0x6328,0x6338,0x6338,0x1000,0x1000,0x1000,0x1000,
0x2002,0x2003,0x2003,0x2002,0xa2f4,0xa2f5,0xa2f6,0xa2f7,
0x2003,0x2002,0x2002,0x2003,0xa2f0,0xa2f1,0xa2f2,0xa2f3,
0x2002,0x2003,0x2003,0x2002,0xa39e,0xa39f,0xa3ae,0xa3af,
0x2002,0x2003,0x2003,0x2002,0xa3bc,0xa3bd,0xa3cc,0xa3cd,
0x2002,0x2003,0x2003,0x2002,0xa3be,0xa3bf,0xa3ce,0xa3cf,
0x2002,0x21da,0x21db,0x21dc,0x0000,0x0000,0x0000,0x0000,
0x6327,0x6328,0x6337,0x6338,0x1000,0x1000,0x1000,0x1000,
0x6328,0x6328,0x6338,0x6338,0x1000,0x1000,0x1000,0x1000,
0x21dd,0x21dd,0x21dd,0x21dd,0x0000,0x0000,0x0000,0x0000,
0x7320,0x7321,0x7310,0x7311,0x6325,0x6326,0x1000,0x1000,
0x41c0,0x41c1,0x41c1,0x41c0,0x6325,0x6326,0x0000,0x0000,
0x7320,0x7321,0x7330,0x7331,0x726a,0x726b,0x727a,0x727b,
0x7300,0x7301,0x7310,0x7311,0x6286,0x6287,0x6296,0x6297,
0x21dc,0x21dd,0x21dc,0x21dd,0x0000,0x0000,0x0000,0x0000,
0x21dd,0x21dd,0x21dc,0x21dc,0x0000,0x0000,0x0000,0x0000,
0x21da,0x21db,0x2003,0x2002,0x0000,0x0000,0x0000,0x0000,
0x21dd,0x21dd,0x21dc,0x21dc,0x3060,0x3061,0x3070,0x3071,
0x21dd,0x21db,0x21dd,0x2002,0x3060,0x3061,0x3070,0x3071,
0x21da,0x21db,0x2003,0x2002,0x3080,0x3081,0x3090,0x3091,
0x21dd,0x21dd,0x21dd,0x21dd,0x3064,0x3065,0x3074,0x3075,
0x21da,0x2003,0x21dc,0x21db,0x0000,0x0000,0x0000,0x0000,
0x21dd,0x21dc,0x21dd,0x21dc,0x0000,0x0000,0x0000,0x0000,
0x21da,0x21db,0x21dc,0x21dc,0x0000,0x0000,0x0000,0x0000,
0x111e,0x111e,0x111e,0x111e,0x0000,0x3041,0x3050,0x3051,
0x111e,0x111e,0x111e,0x111e,0x3042,0x3043,0x3052,0x3053,
0x111e,0x111e,0x111e,0x111e,0x3044,0x0000,0x3054,0x3055,
0x8284,0x8285,0x8284,0x8285,0x6325,0x6326,0x1000,0x1000,
0x7300,0x7301,0x7310,0x7311,0x1000,0x1000,0x622e,0x622e,
0x631e,0x631f,0x632f,0x632e,0x62dd,0x628e,0x62ed,0x629e,
0x631f,0x631f,0x631f,0x631f,0x62ad,0x1000,0x62ad,0x62ae,
0x639a,0x679a,0x63aa,0x67aa,0x0000,0x0000,0x9390,0x9391,
0x73b4,0x73b4,0x73c4,0x73c4,0x0000,0x0000,0x9392,0x9393,
0x73b5,0x73b6,0x73c4,0x73c4,0x0000,0x0000,0x9793,0x9393,
0x73b4,0x73b4,0x73c4,0x73c4,0x0000,0x0000,0x9793,0x9792,
0x8294,0x8295,0x8294,0x8295,0x0000,0x0000,0x622e,0x622e,
0x8284,0x8285,0x8284,0x8285,0x628d,0x628e,0x629d,0x629e,
0x8284,0x8285,0x8284,0x8285,0x628e,0x628e,0x629e,0x629e,
0x8284,0x8285,0x8284,0x8285,0x628e,0x628f,0x629e,0x629f,
0x639b,0x679b,0x63ab,0x67ab,0x93a0,0x93a1,0x93b0,0x93b1,
0x639b,0x679b,0x63ab,0x67ab,0x93a2,0x93a3,0x93b2,0x93b3,
0x639b,0x679b,0x63ab,0x67ab,0x97a3,0x93a3,0x93b3,0x93b3,
0x639b,0x679b,0x63ab,0x67ab,0x97a3,0x97a2,0x97b3,0x97b2,
0x8294,0x8295,0x8294,0x8295,0x623e,0x623e,0x833c,0x833c,
0x631e,0x631f,0x632f,0x632e,0x628d,0x628e,0x62de,0x629e,
0x631e,0x631f,0x632f,0x632e,0x628e,0x628e,0x629e,0x629e,
0x631e,0x631f,0x632f,0x632e,0x628e,0x628f,0x629e,0x62df,
0x8294,0x8295,0x8294,0x8295,0x92c8,0x92c9,0x92d8,0x92d9,
0x7314,0x7314,0x7324,0x7324,0x1000,0x1000,0x1000,0x1000,
0x7314,0x7314,0x7324,0x7324,0x9352,0x9353,0x9362,0x9363,
0x632f,0x632e,0x632f,0x632e,0x1000,0x1000,0x1000,0x1000,
0x7294,0x7295,0x7294,0x7295,0x7307,0x7307,0x7314,0x7314,
0x7324,0x7324,0x7334,0x7334,0x7000,0x7000,0x7000,0x7000,
0x7307,0x7307,0x7314,0x7314,0x1000,0x1000,0x9352,0x9353,
0x7324,0x7324,0x7334,0x7334,0x9362,0x9363,0x1000,0x1000,
0x7294,0x7295,0x7294,0x7295,0x723e,0x723e,0x7314,0x7314,
0x630e,0x630f,0x630f,0x630e,0x6286,0x6287,0x6296,0x6297,
0x630e,0x630f,0x630f,0x630e,0x1000,0x1000,0x6250,0x6251,
0x630e,0x630f,0x630f,0x630e,0x1000,0x1000,0x6253,0x6254,
0x630e,0x630f,0x630f,0x630e,0x1000,0x1000,0x6251,0x6252,
0x631e,0x631e,0x631f,0x630e,0x1000,0x1000,0x1000,0x1000,
0x631e,0x631e,0x630f,0x630e,0x1000,0x1000,0x1000,0x1000,
0x631e,0x630f,0x630f,0x630e,0x1000,0x1000,0x1000,0x1000,
0x630e,0x630f,0x630f,0x630e,0x635c,0x635d,0x636c,0x636d,
0x630e,0x630f,0x630f,0x630e,0x635e,0x635f,0x636e,0x636f,
0x630e,0x630f,0x631f,0x631f,0x6260,0x6261,0x6270,0x6271,
0x630e,0x630f,0x631f,0x631f,0x6263,0x6264,0x6273,0x6274,
0x630e,0x630f,0x631f,0x631f,0x6261,0x6262,0x6271,0x6272,
0x631e,0x630f,0x631f,0x630e,0x1000,0x1000,0x1000,0x1000,
0x631e,0x631f,0x630f,0x630e,0x6325,0x1000,0x1000,0x1000,
0x631e,0x631f,0x630f,0x630e,0x1000,0x6326,0x1000,0x1000,
0x631f,0x631f,0x631f,0x631f,0x637c,0x637d,0x62b0,0x62b1,
0x631f,0x631f,0x631f,0x631f,0x637e,0x637f,0x62b2,0x62b3,
0x631e,0x631f,0x631f,0x631e,0x6325,0x6326,0x1000,0x1000,
0x630e,0x630f,0x630f,0x630e,0x628e,0x628e,0x629e,0x629e,
0x630e,0x630f,0x630f,0x630e,0x628e,0x628f,0x629e,0x62df,
0x631e,0x631f,0x631f,0x631e,0x6242,0x6243,0x1000,0x1000,
0x631e,0x631f,0x631f,0x631e,0x6244,0x6245,0x1000,0x1000,
0x631e,0x631f,0x631f,0x631e,0x62e4,0x62e5,0x1000,0x1000,
0x872d,0x872c,0x873d,0x873c,0x1400,0x1400,0x1400,0x1400,
0x832c,0x832c,0x833c,0x833c,0x1000,0x1000,0x1000,0x1000,
0x832c,0x832d,0x833c,0x833d,0x1000,0x1000,0x1000,0x1000,
0x7320,0x7301,0x7330,0x7311,0x1000,0x1000,0x620e,0x620f,
0x8295,0x8295,0x6314,0x6314,0x6307,0x6307,0x6206,0x6207,
0x8295,0x8295,0x6314,0x6314,0x6307,0x6307,0x6208,0x6209,
0x8295,0x8295,0x6314,0x6314,0x6307,0x6307,0x6609,0x6608,
0x8295,0x8295,0x6314,0x6314,0x6307,0x6307,0x6607,0x6606,
0x639a,0x679a,0x63aa,0x67aa,0x0000,0x0000,0x0000,0x0000,
0x639b,0x679b,0x63ab,0x67ab,0x0000,0x0000,0x0000,0x0000,
0x639b,0x679b,0x63ab,0x67aa,0x0000,0x0000,0x0000,0x0000,
0x639b,0x679b,0x63aa,0x67aa,0x0000,0x0000,0x0000,0x0000,
0x639b,0x679a,0x63ab,0x67aa,0x0000,0x0000,0x0000,0x0000,
0x639b,0x679a,0x63aa,0x67aa,0x0000,0x0000,0x7000,0x7000,
0x639b,0x679b,0x63ab,0x67ab,0x7000,0x7000,0x774b,0x734a,
0x639a,0x679a,0x63aa,0x67aa,0x7000,0x7000,0x734a,0x734b,
0x7394,0x7394,0x73a4,0x73a4,0x0000,0x0000,0x0000,0x0000,
0x7395,0x7396,0x73a5,0x73a6,0x0000,0x0000,0x0000,0x0000,
0x7394,0x7394,0x73a4,0x8397,0x0000,0x0000,0x0000,0x0000,
0x7394,0x7394,0x8398,0x8398,0x0000,0x0000,0x0000,0x0000,
0x7394,0x7394,0x8399,0x73a4,0x0000,0x0000,0x0000,0x0000,
0x639a,0x679a,0x63aa,0x67aa,0x7000,0x7000,0x734a,0x734a,
0xa3ac,0xa34c,0x63ab,0x67ab,0x0000,0x0000,0xa39c,0xa389,
0xa34c,0xa3ad,0x63ab,0x67ab,0x0000,0x0000,0xa389,0xa39d,
0x73b4,0x73b4,0x73c4,0x73c4,0x0000,0x0000,0x0000,0x0000,
0x73b5,0x73b6,0x73c4,0x73c4,0x0000,0x0000,0x0000,0x0000,
0x73b4,0x83a7,0x73c4,0x83b7,0x0000,0x0000,0x0000,0x0000,
0x83a8,0x83a8,0x83b8,0x83b8,0x0000,0x0000,0x0000,0x0000,
0x83a9,0x73b4,0x83b9,0x73c4,0x0000,0x0000,0x0000,0x0000,
0x73b4,0x83ba,0x73c4,0x83ca,0x0000,0x0000,0x0000,0x0000,
0x83bb,0x87bb,0x83cb,0x87cb,0x0000,0x0000,0x0000,0x0000,
0x87ba,0x73b4,0x87ca,0x73c4,0x0000,0x0000,0x0000,0x0000,
0xb201,0xb201,0xb201,0xb201,0x0000,0x77c6,0x0000,0x77c6,
0xb201,0xb201,0xb201,0xb201,0x73c6,0x0000,0x73c6,0x0000,
0xb201,0xb201,0xb201,0xb201,0x0000,0x77c5,0x0000,0x77c6,
0xb201,0xb201,0xb201,0xb201,0x73c5,0x0000,0x73c6,0x0000,
0xa34c,0xa34c,0x63ab,0x67ab,0x0000,0x0000,0xa389,0xa389,
0x639a,0x679a,0x63aa,0x67aa,0x62d6,0x62d7,0x62e6,0x62e7,
0x639a,0x679a,0x63aa,0x67aa,0x73b4,0x73b4,0x73c4,0x73c4,
0x639a,0x679a,0x63aa,0x67aa,0x0000,0x0000,0x7394,0x7394,
0x7394,0x7394,0x73a4,0x73a4,0x0000,0x77c7,0x0000,0x0000,
0x7394,0x7394,0x73a4,0x73a4,0x73c7,0x0000,0x0000,0x0000,
0x639a,0x679a,0x63aa,0x67aa,0x1000,0x1000,0x6250,0x6251,
0x639a,0x679a,0x63aa,0x67aa,0x1000,0x1000,0x6253,0x6254,
0x639a,0x679a,0x63aa,0x67aa,0x1000,0x1000,0x6251,0x6252,
0x639a,0x679a,0x63ab,0x67ab,0x635c,0x635d,0x636c,0x636d,
0x639a,0x679a,0x63ab,0x67ab,0x635d,0x6283,0x636d,0x6293,
0x639a,0x679a,0x63aa,0x67aa,0x6286,0x6287,0x6296,0x6297,
0x639b,0x679b,0x63aa,0x67aa,0x93c0,0x93c1,0x0400,0x0400,
0x639b,0x679b,0x63aa,0x67aa,0x97c1,0x97c0,0x0000,0x0000,
0x639a,0x679a,0x63ab,0x67ab,0x6260,0x6261,0x6270,0x6271,
0x639a,0x679a,0x63ab,0x67ab,0x6263,0x6264,0x6273,0x6274,
0x639a,0x679a,0x63ab,0x67ab,0x6261,0x6262,0x6271,0x6272,
0x639b,0x679b,0x63ab,0x67ab,0x637c,0x637d,0x62b0,0x62b1,
0x639b,0x679b,0x63ab,0x67ab,0x62a1,0x62a3,0x62b2,0x62b3,
0x639b,0x679b,0x63aa,0x67aa,0x6286,0x6287,0x6296,0x6297,
0x9374,0x9375,0x9374,0x9376,0x3058,0x3059,0x3068,0x3069,
0x9384,0x9385,0x9384,0x9386,0x3058,0x3059,0x3068,0x3069,
0x6324,0x6324,0x6324,0x6324,0x1000,0x1000,0x1000,0x1000,
0x6307,0x6303,0x6329,0x6313,0x6325,0x6326,0x6317,0x1000,
0x8294,0x8295,0x8294,0x8295,0x6751,0x6750,0x6761,0x6760,
0x8284,0x8285,0x8284,0x8285,0x6771,0x6770,0x6781,0x6780,
0x6324,0x6324,0x6324,0x6324,0x1000,0x1000,0x9352,0x9353,
0x6324,0x6324,0x6324,0x6324,0x9362,0x9363,0x0000,0x0000,
0x639a,0x679a,0x63aa,0x67aa,0x0000,0x0000,0xa36a,0xa36b,
0x639a,0x679a,0x63aa,0x67aa,0x0000,0x0000,0xa36b,0xa36b,
0x639a,0x679a,0x63aa,0x67aa,0x0000,0x0000,0xa36b,0xa367,
0x639a,0x679a,0x63aa,0x67aa,0xa38a,0xa38b,0xa38a,0xa38b,
0x639a,0x679a,0x63aa,0x67aa,0xa38b,0xa38b,0xa38b,0xa38b,
0x639a,0x679a,0x63aa,0x67aa,0xa38b,0xa387,0xa38b,0xa387,
0x639b,0x679b,0x63aa,0x67aa,0xa39c,0xa389,0x0000,0x0000,
0x639b,0x679b,0x63aa,0x67aa,0xa389,0xa39d,0x0000,0x0000,
0x639a,0x679a,0x63aa,0x67aa,0xa37a,0xa37b,0xa38a,0xa38b,
0x639a,0x679a,0x63aa,0x67aa,0xa37b,0xa37b,0xa38b,0xa38b,
0x639a,0x679a,0x63aa,0x67aa,0xa37b,0xa377,0xa38b,0xa387,
0x639a,0x679a,0x63aa,0x67aa,0xa38a,0xa38b,0xa38e,0xa388,
0x639a,0x679a,0x63aa,0x67aa,0xa38b,0xa38b,0xa388,0xa388,
0x639a,0x679a,0x63aa,0x67aa,0xa38b,0xa387,0xa388,0xa38f,
0x639b,0x679b,0x63aa,0x67aa,0xa389,0xa389,0x0000,0x0000,
0x3108,0x3118,0x3118,0x3108,0x0000,0x0000,0x0000,0x0000,
0x73d0,0x73d1,0x73e0,0x73e1,0x0000,0x0000,0x0000,0x0000,
0x7324,0x7324,0x7324,0x7324,0x1000,0x1000,0x1000,0x1000,
0x9324,0x9324,0x9334,0x9334,0x1000,0x1000,0x1000,0x1000,
0x7324,0x7324,0x9314,0x9314,0x1000,0x1000,0x1000,0x1000,
0x7324,0x7397,0x7324,0x7b97,0x1000,0x0000,0x1000,0x0000,
0x7398,0x7399,0x7b98,0x7b99,0x0000,0x0000,0x0000,0x0000,
0x3108,0x3118,0x3118,0x3108,0x6325,0x1000,0x0000,0x0000,
0x3108,0x3118,0x3118,0x3108,0x1000,0x6326,0x0000,0x0000,
0x3108,0x3118,0x3118,0x3108,0x0000,0x0000,0x0000,0x0000,
0x3108,0x3340,0x3053,0x3072,0x3042,0x1000,0x1000,0x1000,
0x3341,0x3342,0x3073,0x3072,0x1000,0x1000,0x1000,0x1000,
0x3343,0x3118,0x3073,0x3052,0x1000,0x3043,0x1000,0x1000,
0x3108,0x3118,0x3118,0x3108,0x3060,0x3061,0x3070,0x3071,
0x3108,0x3118,0x3118,0x3108,0x3064,0x3065,0x3074,0x3075,
0x3108,0x3118,0x3118,0x3108,0x3042,0x3043,0x3052,0x3053,
0x9384,0x9385,0x9384,0x9385,0x5368,0x5369,0x5378,0x5379,
0x7300,0x7301,0x7310,0x7311,0xb3d3,0xb3d4,0xb3e3,0xb3e4,
0x7300,0x7301,0x7310,0x7311,0xb7d4,0xb7d3,0xb7e4,0xb7e3,
0xb3e3,0xb3e4,0x7310,0x7311,0xb3d3,0xb3d4,0xb3e3,0xb3e4,
0xb7e4,0xb7e3,0x7310,0x7311,0xb7d4,0xb7d3,0xb7e4,0xb7e3,
0x7320,0x7321,0x7330,0x7331,0xb3f3,0xb3f4,0xb3f1,0xb3f2,
0x7320,0x7321,0x7330,0x7331,0xb7f4,0xb7f3,0xb7f2,0xb7f1,
0x628e,0x628e,0x7310,0x7311,0xb3d3,0xb3d4,0xb3e3,0xb3e4,
0x628e,0x628e,0x7310,0x7311,0xb7d4,0xb7d3,0xb7e4,0xb7e3,
0x8284,0x8285,0x8284,0x8285,0x0000,0x0000,0x53d5,0x53d6,
0x53e5,0x53e6,0x53f5,0x53f6,0x0000,0x0000,0x53d5,0x53d6,
0x7320,0x7321,0x7330,0x7331,0x1040,0x3041,0x3050,0x3051,
0x6324,0x6324,0x6334,0x6334,0x52cb,0x52cc,0x52db,0x52dc,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x73a4,0x73a4,0x73a4,0x73a4,0x0000,0x0000,0x0000,0x0000,
0x73c8,0x73c8,0x73c8,0x73c8,0x0000,0x0000,0x0000,0x0000,
0x7300,0x7301,0xb3e3,0xb3e4,0xb3d3,0xb3d4,0x622e,0x622e,
0x8284,0x8285,0x8284,0x8285,0x53e5,0x53e6,0x53f5,0x53f6,
0x8294,0x8295,0x8294,0x8295,0x0000,0x0000,0x53d5,0x53d6,
0x639b,0x679b,0x6b9b,0x6f9b,0x52eb,0x52ec,0x52fb,0x52fc,
0x73c8,0x73c8,0x73c8,0x73c8,0x52eb,0x52ec,0x52fb,0x52fc,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x73a4,0x73a4,0x73a4,0x73a4,0x0000,0x0000,0x622e,0x622e,
0x73c8,0x73c8,0x73c8,0x73c8,0x0000,0x0000,0x622e,0x622e,
0x7300,0x7301,0xb7e4,0xb7e3,0xb7d4,0xb7d3,0x622e,0x622e,
0x8294,0x8295,0x8294,0x8295,0x635c,0x635e,0x636c,0x636d,
0x8294,0x8295,0x8294,0x8295,0x635d,0x635f,0x6291,0x6293,
0x73da,0x73db,0x73ea,0x73eb,0x0000,0x0000,0x0000,0x0000,
0x73c8,0x73c8,0x73c8,0x73c8,0xa36a,0xa36b,0xa37a,0xa37b,
0x73c8,0x73c8,0x73c8,0x73c8,0xa36b,0xa367,0xa37b,0xa377,
0x73c8,0x73c8,0x73c8,0x73c8,0x0000,0x0000,0x9791,0x9790,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x8284,0x8285,0x8284,0x8285,0x637c,0x637d,0x62b0,0x62b1,
0x8284,0x8285,0x8284,0x8285,0x62a1,0x62a3,0x62b2,0x62b3,
0x73c8,0x73c8,0x73a4,0x73a4,0x97c1,0x97c0,0x0000,0x0000,
0x73c8,0x73c8,0x73a4,0x73a4,0xa39c,0xa389,0x0000,0x0000,
0x73c8,0x73c8,0x73a4,0x73a4,0xa389,0xa39d,0x0000,0x0000,
0x73c8,0x73c8,0x73c8,0x73c8,0x97a1,0x97a0,0x97b1,0x97b0,
};

const u16	shipyard_CellAtbData[shipyard_Max]={
0x0000,0x0000,0x0000,0x0000,0x0000,0x10e4,0x0065,0x0065,
0x0000,0x0000,0x0000,0x0000,0x10e6,0x10e6,0x1000,0x1000,
0x0000,0x0000,0x1000,0x1000,0x10e6,0x10e6,0x1000,0x1000,
0x0000,0x1080,0x1000,0x1000,0x1000,0x1000,0x0000,0x0000,
0x0000,0x1000,0x1000,0x1000,0x1000,0x1000,0x0000,0x1000,
0x0000,0x0000,0x0000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x0000,
0x0000,0x0000,0x0000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x0000,0x1000,0x1000,0x1000,0x1000,0x1000,0x0000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x106d,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x0000,0x0000,0x10e4,0x1000,0x1000,0x1000,
0x1000,0x1000,0x0000,0x0000,0x0000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x0000,0x0000,0x0065,0x006e,0x006e,0x0000,0x1000,0x1000,
0x0000,0x0000,0x1000,0x1000,0x1000,0x0000,0x1000,0x1012,
0x0000,0x0000,0x1000,0x1000,0x1000,0x0000,0x1012,0x1012,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x0000,0x0060,0x0000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x0000,0x0000,0x0000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x0000,0x0060,0x0000,0x0065,0x0065,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1067,
0x1000,0x1000,0x0000,0x0000,0x1000,0x1000,0x0008,0x0008,
0x1008,0x1008,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x0000,0x0000,0x1000,0x0000,0x1000,0x1000,0x0000,0x1000,
0x1000,0x0000,0x1000,0x10e4,0x0000,0x0000,0x0000,0x1030,
0x1000,0x0000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1030,
0x0000,0x0000,0x0000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x0064,0x0064,0x1000,0x1000,0x1000,0x1000,0x1000,0x0000,
0x0065,0x0065,0x0000,0x1000,0x0017,0x0000,0x1000,0x0000,
0x0000,0x0000,0x1000,0x1000,0x1000,0x1000,0x0000,0x0000,
0x0000,0x1010,0x1010,0x1010,0x1000,0x0008,0x1000,0x1000,
0x1031,0x1000,0x1000,0x1000,0x0000,0x1000,0x1000,0x1000,
0x1031,0x1000,0x1000,0x1000,0x1080,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x0000,0x1080,0x1000,0x1000,0x1000,
0x1080,0x1000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x10e6,0x10e6,0x1000,0x1000,0x1000,0x0000,0x1000,0x1000,
0x10e6,0x10e6,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x0000,0x0000,0x0000,0x0000,0x1000,0x1000,0x1000,0x1000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1080,0x1080,
0x0000,0x0000,0x0000,0x0060,0x0000,0x0000,0x0060,0x0000,
0x1000,0x1000,0x1000,0x1000,0x1080,0x10e4,0x1000,0x1000,
0x1000,0x1000,0x0000,0x0000,0x0000,0x10e6,0x10e6,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x10e6,0x10e6,0x1000,
0x1000,0x1000,0x0000,0x0000,0x1000,0x1000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x0065,
0x0000,0x1000,0x1000,0x0000,0x0000,0x0000,0x1008,0x1008,
0x0008,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x0000,0x0000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x0000,0x1000,0x1000,0x1000,0x0000,0x0000,0x0000,0x1000,
0x1000,0x0000,0x1000,0x1000,0x0000,0x0000,0x0000,0x1000,
0x10e6,0x10e6,0x000f,0x1000,0x1000,0x1030,0x0000,0x0000,
0x10e6,0x10e6,0x1000,0x1000,0x1000,0x1030,
};

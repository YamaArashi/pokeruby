//MapEditNH Ver.3.55 *.cell -> C sourse Convert.
//Part Cell Data File (512-1023)
//Full Char File Name (0-511)    : room.sch
//Part Char File Name (512-1023) : hall.sch

#define	hall_Max	224

const u16	hall_CellChrData[hall_Max*8]={
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0xb201,0xb201,0xb201,0xb201,0x1000,0x1000,0x1000,0x1000,
0x6210,0x6211,0x6210,0x6211,0x1000,0x1000,0x1000,0x1000,
0x6210,0x6210,0x6210,0x6210,0x1000,0x1000,0x1000,0x1000,
0x1009,0x100a,0x1809,0x180a,0x1000,0x1000,0x1800,0x1800,
0x140a,0x1409,0x1c0a,0x1c09,0x1000,0x1000,0x1800,0x1800,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x6621,0x6620,0x6631,0x6630,0x1400,0x1400,0x1400,0x1400,
0x6220,0x6220,0x6230,0x6230,0x1000,0x1000,0x1000,0x1000,
0x6220,0x6221,0x6230,0x6231,0x1000,0x1000,0x1000,0x1000,
0x6611,0x6210,0x6611,0x6210,0x1000,0x1000,0x1000,0x1000,
0x8204,0x8205,0x8214,0x8215,0x630c,0x630d,0x631c,0x633b,
0x8204,0x8205,0x8214,0x8214,0x630d,0x630d,0x631b,0x671b,
0x8605,0x8604,0x8214,0x8614,0x670d,0x670c,0x673b,0x671c,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x9229,0x9218,0x9229,0x9218,0x6240,0x6241,0x1400,0x1400,
0x9218,0x9218,0x9218,0x9218,0x6240,0x6241,0x1000,0x1000,
0x9218,0x9219,0x9218,0x9219,0x6240,0x6241,0x1000,0x1000,
0x9218,0x9218,0x9218,0x9218,0x1000,0x1000,0x1000,0x1000,
0x8204,0x8205,0x8214,0x8215,0x631c,0x632b,0x631c,0x634b,
0x631d,0x631d,0x630b,0x630b,0x631d,0x631d,0x630b,0x630b,
0x8214,0x8604,0x8214,0x8614,0x672b,0x671c,0x674b,0x671c,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x6398,0x6399,0x63a8,0x63a9,0x6378,0x6379,0x6388,0x6389,
0x6612,0x6210,0x6611,0x6210,0x1000,0x1000,0x1000,0x1000,
0x6210,0x6212,0x6210,0x6211,0x1000,0x1000,0x1000,0x1000,
0x8204,0x8205,0x8214,0x8215,0x632c,0x632d,0x633c,0x633d,
0x8204,0x8205,0x8214,0x8215,0x632d,0x632d,0x633d,0x633d,
0x8605,0x8604,0x8615,0x8614,0x672d,0x672c,0x673d,0x673c,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x824c,0x824d,0x825c,0x824a,0x0000,0x0000,0x0000,0x0000,
0x824d,0x824d,0x825a,0x824a,0x0000,0x0000,0x0000,0x0000,
0x824d,0x864c,0x825a,0x865c,0x0000,0x0400,0x0000,0x0400,
0x824a,0x865c,0x825a,0x865c,0x0000,0x0400,0x0000,0x0400,
0x8204,0x8205,0x8204,0x8205,0x631c,0x632b,0x631c,0x632b,
0x631d,0x631d,0x631d,0x631d,0x631d,0x631d,0x631d,0x631d,
0x8214,0x8604,0x8214,0x8604,0x672b,0x671c,0x672b,0x671c,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x825c,0x825a,0x825c,0x824a,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x8248,0x865c,0x8258,0x865c,0x0000,0x0400,0x0000,0x0400,
0x824a,0x865c,0x8258,0x865c,0x0000,0x0400,0x0000,0x0400,
0x9229,0x9218,0x9229,0x9218,0x1400,0x1400,0x1400,0x1400,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x9218,0x9219,0x9218,0x9219,0x1000,0x1000,0x1000,0x1000,
0x6220,0x6220,0x6230,0x6230,0x1000,0x1000,0x1000,0x1000,
0x824e,0x825a,0x825a,0x824a,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x8248,0x864e,0x8258,0x8259,0x0000,0x0400,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x9229,0x9218,0x9228,0x9238,0x1400,0x1400,0x0000,0x0000,
0x9218,0x9218,0x9238,0x9238,0x1000,0x1000,0x0000,0x0000,
0x9218,0x9219,0x9238,0x9239,0x1000,0x1000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x825c,0x825a,0x825c,0x824a,0xa350,0xa351,0xa360,0xa361,
0x8248,0x865c,0x825a,0x865c,0xa751,0xa750,0xa761,0xa760,
0xb201,0xb201,0x9218,0x9218,0x9208,0x9208,0x63a2,0x9386,
0xb201,0xb201,0x9218,0x9218,0x9209,0x9209,0x9387,0x63a2,
0x9218,0x9218,0x7232,0x7233,0x6240,0x6241,0x8354,0x8355,
0x9218,0x9218,0x7233,0x7233,0x6240,0x6241,0x8355,0x8355,
0x9218,0x9218,0x7633,0x7632,0x6240,0x6241,0x8355,0x8754,
0x824a,0x825a,0x825a,0x824a,0x7362,0x7762,0x7372,0x7772,
0x825c,0x825a,0x825c,0x824a,0xa370,0xa371,0xa380,0xa381,
0x824a,0x865c,0x825a,0x865c,0xa771,0xa770,0xa781,0xa780,
0x9218,0x9218,0x9238,0x9238,0x0000,0x9396,0x0000,0x0000,
0x9218,0x9218,0x9238,0x9238,0x9397,0x0000,0x0000,0x0000,
0x7242,0x7243,0x7252,0x7253,0x8364,0x8365,0x8374,0x8375,
0x7243,0x7243,0x7253,0x7253,0x8365,0x8365,0x8375,0x8375,
0x7643,0x7642,0x7653,0x7652,0x8365,0x8764,0x8375,0x8774,
0x824a,0x825a,0x825a,0x824a,0x7382,0x7782,0x6392,0x6792,
0x8248,0x8258,0x8258,0x8248,0xa350,0xa351,0xa360,0xa361,
0x8248,0x8258,0x8258,0x8248,0xa751,0xa750,0xa761,0xa760,
0x8248,0x8258,0x8258,0x8248,0x7362,0x7762,0x7372,0x7772,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xb201,0xb201,0x9238,0x9238,0x9208,0x9209,0x0005,0x0006,
0xb201,0xb201,0x9218,0x9218,0x9208,0x9209,0x9386,0x9387,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x824a,0x825a,0x825a,0x824a,0xa370,0xa371,0xa380,0xa381,
0x824a,0x825a,0x825a,0x824a,0xa771,0xa770,0xa781,0xa780,
0x8248,0x8258,0x8258,0x8248,0x7382,0x7782,0x6392,0x6792,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x9218,0x9218,0x9238,0x9238,0x6378,0x6379,0x6388,0x6389,
0x824a,0x825a,0x825a,0x824a,0x0035,0x0036,0x1000,0x1000,
0x9218,0x9218,0x9238,0x9238,0x9396,0x9397,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x8248,0x8258,0x8258,0x8248,0x1000,0x1000,0x1000,0x1000,
0x8248,0x8258,0x8258,0x8248,0x1000,0x1000,0x1000,0x1000,
0xb201,0xb201,0x9218,0x9218,0x9208,0x9209,0x0000,0x0000,
0xb201,0xb201,0x9219,0x921a,0x9209,0x920a,0x63a0,0x67a0,
0xb201,0xb201,0x921b,0x961b,0x920b,0x960b,0x63a2,0x63a2,
0xb201,0xb201,0x961a,0x9229,0x960a,0x9209,0x63a0,0x67a0,
0x824a,0x825a,0x825a,0x8248,0x1000,0x1000,0x1000,0x1000,
0x824a,0x825a,0x8258,0x8248,0x1000,0x1000,0x1000,0x1000,
0x8248,0x8258,0x8258,0x8248,0x1000,0x1000,0x1000,0x1000,
0x824a,0x825a,0x825a,0x824a,0x1000,0x1000,0x1000,0x1000,
0x9218,0x9218,0x9238,0x9238,0x0000,0x0000,0x0000,0x0000,
0x9219,0x922a,0x9239,0x923a,0x0000,0x0000,0x0000,0x0000,
0x922b,0x962b,0x923b,0x963b,0x0000,0x0000,0x0000,0x0000,
0x962a,0x9229,0x963a,0x9639,0x0000,0x0000,0x0000,0x0000,
0x824a,0x8258,0x825a,0x8248,0x1000,0x1000,0x1000,0x1000,
0x824a,0x8258,0x8258,0x8248,0x1000,0x1000,0x1000,0x1000,
0x630d,0x630d,0x631d,0x733e,0x770e,0x730e,0x731e,0x1000,
0x630d,0x630d,0x733e,0x733e,0x770e,0x730e,0x1000,0x1000,
0x630d,0x630d,0x733e,0x671d,0x770e,0x730e,0x1000,0x731e,
0x733e,0x733e,0xb340,0xb341,0x1000,0x1000,0x1000,0x1000,
0x733e,0x733e,0xb341,0xb341,0x1000,0x1000,0x1000,0x1000,
0x733e,0x733e,0xb341,0xb740,0x1000,0x1000,0x1000,0x1000,
0x9218,0x9218,0x8216,0x8616,0x6240,0x6241,0xb300,0xb301,
0x733e,0x733e,0x733e,0x733e,0x1000,0x1000,0x8260,0x8261,
0x631d,0x733e,0x631d,0x733e,0x732e,0x1000,0x731e,0x1000,
0x733e,0x733e,0x733e,0x733e,0x1000,0x1000,0x1000,0x1000,
0x733e,0x671d,0x733e,0x671d,0x1000,0x732e,0x1000,0x731e,
0xb340,0xb341,0xb340,0xb341,0x1000,0x1000,0x1000,0x1000,
0xb341,0xb341,0xb341,0xb341,0x1000,0x1000,0x1000,0x1000,
0xb341,0xb740,0xb341,0xb740,0x1000,0x1000,0x1000,0x1000,
0x9218,0x9218,0x8216,0x8616,0x6240,0x6241,0x6300,0x6301,
0x733e,0x733e,0x733e,0x733e,0x8270,0x8271,0x1000,0x1000,
0x631d,0x733e,0x630d,0x630d,0x732e,0x1000,0x770e,0x730e,
0x733e,0x733e,0x630d,0x630d,0x1000,0x1000,0x770e,0x730e,
0x733e,0x671d,0x630d,0x630d,0x1000,0x732e,0x770e,0x730e,
0x733e,0x733e,0x6340,0x6341,0x1000,0x1000,0x1000,0x1000,
0x733e,0x733e,0x6341,0x6341,0x1000,0x1000,0x1000,0x1000,
0x733e,0x733e,0x6341,0x6740,0x1000,0x1000,0x1000,0x1000,
0x9218,0x9218,0x8216,0x8616,0x6240,0x6241,0x7300,0x7301,
0x733e,0x733e,0x733e,0x733e,0x1000,0x1000,0x8260,0x8261,
0x8226,0x8626,0x8236,0x8636,0xb310,0xb311,0x1000,0x1000,
0x733e,0x733e,0x733e,0x733e,0x1000,0x1000,0xb302,0xb702,
0x865a,0x864a,0x864a,0x864a,0xa36a,0xa76a,0xa77e,0xa76a,
0x6340,0x6341,0x6340,0x6341,0x1000,0x1000,0x1000,0x1000,
0x6341,0x6341,0x6341,0x6341,0x1000,0x1000,0x1000,0x1000,
0x6341,0x6740,0x6341,0x6740,0x1000,0x1000,0x1000,0x1000,
0x9218,0x9218,0x8216,0x8616,0x6240,0x6241,0x8300,0x8301,
0x733e,0x733e,0x733e,0x733e,0x8270,0x8271,0x1000,0x1000,
0x8226,0x8626,0x8236,0x8636,0x6310,0x6311,0x1000,0x1000,
0x733e,0x733e,0x733e,0x733e,0xb312,0xb712,0x1000,0x1000,
0x865a,0x864a,0x864a,0x865a,0xa78e,0xa78a,0x676d,0x679a,
0x733e,0x733e,0x7340,0x7341,0x1000,0x1000,0x1000,0x1000,
0x733e,0x733e,0x7341,0x7341,0x1000,0x1000,0x1000,0x1000,
0x733e,0x733e,0x7341,0x7740,0x1000,0x1000,0x1000,0x1000,
0x9218,0x9218,0x8216,0x8616,0x6240,0x6241,0x9300,0x9301,
0x733e,0x733e,0x733e,0x733e,0x1000,0x1000,0x8260,0x8261,
0x8226,0x8626,0x8236,0x8636,0x7310,0x7311,0x1000,0x1000,
0x733e,0x733e,0x733e,0x733e,0x1000,0x1000,0x6302,0x6702,
0x733e,0x733e,0x733e,0x733e,0x1000,0x1000,0x9302,0x9702,
0x7340,0x7341,0x7340,0x7341,0x1000,0x1000,0x1000,0x1000,
0x7341,0x7341,0x7341,0x7341,0x1000,0x1000,0x1000,0x1000,
0x7341,0x7740,0x7341,0x7740,0x1000,0x1000,0x1000,0x1000,
0x9218,0x9218,0x8216,0x8616,0x6240,0x6241,0xa300,0xa301,
0x733e,0x733e,0x733e,0x733e,0x8270,0x8271,0x1000,0x1000,
0x8226,0x8626,0x8236,0x8636,0x8310,0x8311,0x1000,0x1000,
0x733e,0x733e,0x733e,0x733e,0x6312,0x6712,0x1000,0x1000,
0x733e,0x733e,0x733e,0x733e,0x9312,0x9712,0x1000,0x1000,
0x733e,0x733e,0x8340,0x8341,0x1000,0x1000,0x1000,0x1000,
0x733e,0x733e,0x8341,0x8341,0x1000,0x1000,0x1000,0x1000,
0x733e,0x733e,0x8341,0x8740,0x1000,0x1000,0x1000,0x1000,
0x824d,0x824d,0x825a,0x824a,0x0000,0x0000,0xa78c,0xa37c,
0x733e,0x733e,0x733e,0x733e,0x1000,0x1000,0x8260,0x8261,
0x8226,0x8626,0x8236,0x8636,0x9310,0x9311,0x1000,0x1000,
0x733e,0x733e,0x733e,0x733e,0x1000,0x1000,0x7302,0x7702,
0x733e,0x733e,0x733e,0x733e,0x1000,0x1000,0xa302,0xa702,
0x8340,0x8341,0x8340,0x8341,0x1000,0x1000,0x1000,0x1000,
0x8341,0x8341,0x8341,0x8341,0x1000,0x1000,0x1000,0x1000,
0x8341,0x8740,0x8341,0x8740,0x1000,0x1000,0x1000,0x1000,
0x824a,0x825a,0x825a,0x824a,0xa78e,0xa38b,0x676d,0x639b,
0x733e,0x733e,0x733e,0x733e,0x8270,0x8271,0x1000,0x1000,
0x8226,0x8626,0x8236,0x8636,0xa310,0xa311,0xa000,0xa000,
0x733e,0x733e,0x733e,0x733e,0x7312,0x7712,0x1000,0x1000,
0x733e,0x733e,0x733e,0x733e,0xa312,0xa712,0x1000,0x1000,
0x733e,0x733e,0x9340,0x9341,0x1000,0x1000,0x1000,0x1000,
0x733e,0x733e,0x9341,0x9341,0x1000,0x1000,0x1000,0x1000,
0x733e,0x733e,0x9341,0x9740,0x1000,0x1000,0x1000,0x1000,
0x824d,0x824d,0x825a,0x824a,0x0000,0x0000,0xa37c,0xa38c,
0x733e,0x733e,0x733e,0x733e,0x1000,0x1000,0x8260,0x8261,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x733e,0x733e,0x733e,0x733e,0x1000,0x1000,0x8302,0x8702,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x9340,0x9341,0x9340,0x9341,0x1000,0x1000,0x1000,0x1000,
0x9341,0x9341,0x9341,0x9341,0x1000,0x1000,0x1000,0x1000,
0x9341,0x9740,0x9341,0x9740,0x1000,0x1000,0x1000,0x1000,
0x824a,0x825a,0x825a,0x824a,0xa38b,0xa38e,0x639b,0x636d,
0x733e,0x733e,0x733e,0x733e,0x8270,0x8271,0x1000,0x1000,
0x824a,0x825a,0x824a,0x824a,0xa36a,0xa76a,0xa36a,0xa37e,
0x733e,0x733e,0x733e,0x733e,0x8312,0x8712,0x1000,0x1000,
0x824d,0x824d,0x825a,0x824a,0x0000,0x0000,0xa78c,0xa37c,
0x733e,0x733e,0xa340,0xa341,0x1000,0x1000,0x1000,0x1000,
0x733e,0x733e,0xa341,0xa341,0x1000,0x1000,0x1000,0x1000,
0x733e,0x733e,0xa341,0xa740,0x1000,0x1000,0x1000,0x1000,
0x8248,0x8258,0x825a,0x8248,0x1000,0x1000,0x1000,0x1000,
0x733e,0x733e,0x733e,0x733e,0x1000,0x1000,0x8260,0x8261,
0x824a,0x825a,0x825a,0x824a,0xa38a,0xa38e,0x639a,0x636d,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x824a,0x825a,0x825a,0x824a,0xa78e,0xa38b,0x639b,0x639b,
0xa340,0xa341,0xa340,0xa341,0x1000,0x1000,0x1000,0x1000,
0xa341,0xa341,0xa341,0xa341,0x1000,0x1000,0x1000,0x1000,
0xa341,0xa740,0xa341,0xa740,0x1000,0x1000,0x1000,0x1000,
0x8259,0x825a,0x8258,0x8248,0x1000,0x1000,0x1000,0x1000,
0x733e,0x733e,0x733e,0x733e,0x8270,0x8271,0x1000,0x1000,
0x9218,0x9218,0x9218,0x9218,0x0000,0x0000,0xa35a,0xa75a,
0x9218,0x9218,0x9238,0x9238,0x8384,0x8784,0x8394,0x8794,
0xb201,0xb201,0x9218,0x9218,0x9208,0x9209,0x63a0,0x67a0,
0xb201,0xb201,0x9218,0x9218,0x9208,0x9209,0x63a2,0x67a2,
0x9218,0x9218,0x9218,0x9218,0x0000,0x0000,0xa35a,0xa75a,
0x824a,0x825a,0x825a,0x824a,0xa38d,0xa78d,0x639b,0x639b,
0x824a,0x825a,0x825a,0x824a,0xa38b,0xa38b,0x639b,0x636d,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x824a,0x825a,0x824a,0x824a,0xa36a,0xa76a,0xa36a,0xa37e,
0x824d,0x824d,0x825a,0x824a,0x0000,0x0000,0xa75c,0xa35c,
0x824d,0x824d,0x825a,0x824a,0x0000,0x0000,0xa39d,0xa77d,
0x824d,0x824d,0x825a,0x824a,0x0000,0x0000,0xa37c,0xa37c,
0x824a,0x825a,0x825a,0x824a,0xa36a,0xa76a,0xa77b,0xa76a,
0x824a,0x825a,0x825a,0x824a,0xa38b,0xa38b,0x676d,0x639b,
0x824a,0x825a,0x825a,0x824a,0xa36a,0xa76a,0xa77b,0xa76a,
0x824d,0x824d,0x825a,0x824a,0x0000,0x0000,0xa37d,0xa77d,
0x824a,0x825a,0x825a,0x824a,0xa38a,0xa38e,0x639a,0x636d,
0x824a,0x825a,0x825a,0x824a,0xa76c,0xa36c,0x0000,0x0000,
0x824a,0x825a,0x825a,0x824a,0xa3ad,0xa78d,0x676d,0x639b,
0x824a,0x825a,0x825a,0x824a,0xa38b,0xa38b,0x639b,0x639b,
0x824a,0x825a,0x825a,0x824a,0xa78b,0xa78a,0x639b,0x679a,
0x824a,0x825a,0x825a,0x824a,0x9358,0x9359,0x9368,0x9369,
0x824a,0x825a,0x825a,0x824a,0xa78b,0xa78a,0x676d,0x679a,
0x824a,0x825a,0x825a,0x824a,0xa38d,0xa78d,0x639b,0x639b,
};

const u16	hall_CellAtbData[hall_Max]={
0x0000,0x0000,0x0000,0x0000,0x0065,0x0065,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1000,0x1000,0x1000,0x0000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x0000,
0x0000,0x1000,0x0000,0x0000,0x1000,0x1000,0x1000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1000,0x1000,0x1000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x1031,0x1030,0x1000,0x1000,0x1000,0x1000,0x1000,0x0000,
0x1031,0x1030,0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,
0x1031,0x1030,0x0000,0x0000,0x0000,0x1000,0x1000,0x0000,
0x1031,0x1030,0x1000,0x0000,0x1000,0x1000,0x1000,0x0000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x0000,0x0000,
0x0000,0x0000,0x1000,0x1000,0x1060,0x1000,0x0000,0x0000,
0x1000,0x1000,0x1000,0x0000,0x0000,0x0000,0x1000,0x0000,
0x1000,0x1000,0x1000,0x0000,0x0000,0x0000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x0000,0x0000,0x0000,0x1000,0x0000,
0x1000,0x1000,0x1080,0x0000,0x0000,0x0000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x0000,0x0000,0x0000,0x1000,0x0000,
0x1000,0x1000,0x1000,0x0000,0x0000,0x0000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x1000,0x1000,0x1000,0x0000,0x0000,0x0000,0x1080,0x1000,
0x1000,0x1000,0x1000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x1000,0x0000,0x0000,0x0000,0x0000,0x1080,0x1000,
0x1080,0x1000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x1000,0x0000,0x1080,0x0000,0x0000,0x0000,0x0000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1080,0x1080,0x0000,
0x1080,0x0000,0x0000,0x0000,0x1080,0x1080,0x1080,0x0000,
0x1000,0x1080,0x1080,0x1080,0x1000,0x1000,0x1000,0x1080,
};

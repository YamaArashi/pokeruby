//MapEditNH Ver.3.55 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : field.cell
//Part Cell File Name (512-1023) : field_3.cell

#define	MapSizeX_road105	40
#define	MapSizeY_road105	80

const u16	road105_OutRangeCell[4]={
0x0170,0x0170,0x0170,0x0170,
};

const u16	road105_MapData[MapSizeX_road105*MapSizeY_road105]={
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x057a,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x057a,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x0576,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x057a,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,
0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x057a,0x05e6,0x05e5,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,
0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x0576,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x0576,0x1170,0x1170,0x1170,0x0582,0x0479,0x0489,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,
0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x0576,0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x05e6,0x05e5,0x05dc,0x05dd,0x05dc,0x05dd,
0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x1576,0x1170,0x1170,0x1170,0x0582,0x0479,0x0489,0x05d4,0x05d5,0x05d4,0x05d5,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x0576,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x157e,0x1170,0x0572,0x1574,0x1170,0x1170,0x057a,0x05e6,0x05e5,0x05e4,0x05e5,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0572,0x14b4,0x157c,0x1170,0x1170,0x0582,0x0479,0x0479,0x0479,0x0479,
0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x1071,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x0558,0x0559,0x0550,0x0551,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1550,0x1551,0x1170,0x057a,0x1071,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x0558,0x0559,0x0550,0x0551,0x0558,0x0559,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1558,0x1559,0x1170,0x057a,0x1071,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x1071,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1550,0x1551,0x1170,0x0572,0x14b4,0x1071,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1558,0x1559,0x1170,0x057a,0x1071,0x1474,0x1584,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x0550,0x0551,0x1170,0x1170,0x1170,0x0575,0x0576,0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x0576,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x1071,0x157c,0x1170,0x0572,0x1574,0x1170,0x1170,0x1170,0x1170,0x1170,
0x0558,0x0559,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x0558,0x0559,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x1071,0x157c,0x0572,0x14b4,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x0572,0x057b,0x0574,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x1474,0x1584,0x057a,0x1071,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x0572,0x0473,0x0471,0x0475,0x0574,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x157c,0x1170,0x0582,0x1479,0x1584,0x1170,0x1170,0x1170,0x1170,0x1170,
0x0550,0x0551,0x1170,0x0575,0x0576,0x1170,0x111b,0x0488,0x047b,0x0464,0x047d,0x048a,0x111d,0x1170,0x0575,0x0576,0x0558,0x0559,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x0558,0x0559,0x1170,0x057d,0x057e,0x1170,0x1123,0x0490,0x0479,0x00a7,0x0491,0x0492,0x1125,0x1170,0x057d,0x057e,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1550,0x1551,0x0582,0x1584,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1123,0x3124,0x3124,0x3124,0x3124,0x3124,0x1125,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1558,0x1559,0x1170,0x1170,0x0575,0x0576,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x112b,0x1145,0x3124,0x3124,0x3124,0x1146,0x112d,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x157d,0x157e,0x0572,0x1574,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x0550,0x0551,0x1170,0x1170,0x0575,0x0576,0x112b,0x112c,0x112c,0x112c,0x112d,0x0575,0x0576,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x0576,0x1170,0x0572,0x14b4,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x0558,0x0559,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x057a,0x1071,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,
0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x1071,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,
0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x1071,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1550,0x1551,0x0572,0x14b4,0x1071,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1558,0x1559,0x057a,0x1071,0x1071,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x1493,0x1494,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1550,0x1551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x1473,0x1475,0x157c,0x1575,0x1576,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1558,0x1559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x1473,0x1475,0x157c,0x157d,0x157e,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x0576,0x1170,0x1170,0x057a,0x1473,0x1475,0x14b4,0x1574,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x057a,0x1473,0x14b4,0x1494,0x157c,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x1473,0x1071,0x1475,0x157c,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x0575,0x0576,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x1473,0x1071,0x1475,0x157c,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x0576,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0572,0x14b4,0x1473,0x1071,0x1475,0x157c,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x1493,0x14b4,0x1474,0x149c,0x157c,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x0576,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x0576,0x057a,0x1473,0x1071,0x1475,0x1474,0x1584,0x1170,0x1170,0x1170,0x1170,
0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x057a,0x1473,0x1071,0x1475,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x0576,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x149b,0x0489,0x1475,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x0575,0x0576,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0582,0x0489,0x1473,0x1475,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1219,0x1219,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x149b,0x149c,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x0575,0x0576,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x111b,0x0643,0x0643,0x111d,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x1071,0x1474,0x1584,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1123,0x0643,0x0643,0x1125,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x1071,0x157c,0x1170,0x1575,0x1576,0x1170,0x1170,0x1170,
0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x063a,0x0643,0x313e,0x311c,0x111d,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x0576,0x057a,0x1071,0x157c,0x1170,0x157d,0x157e,0x1170,0x1170,0x1170,
0x1170,0x1170,0x0558,0x0559,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x111b,0x311c,0x313d,0x3239,0x0643,0x3124,0x3124,0x1125,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x057a,0x1474,0x1584,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x0575,0x0576,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1123,0x3124,0x3124,0x0643,0x0643,0x3124,0x3124,0x1125,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x3124,0x3239,0x0643,0x0643,0x3239,0x3124,0x1125,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x3124,0x0643,0x063a,0x0643,0x0643,0x3124,0x1125,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0582,0x1584,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x111b,0x313d,0x3124,0x0643,0x3239,0x0643,0x0643,0x3124,0x1125,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x0576,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x0550,0x0551,0x1170,0x1219,0x1219,0x1170,0x1170,0x1170,0x1170,0x1123,0x3124,0x3124,0x0643,0x063a,0x0643,0x063a,0x3124,0x1125,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x0575,0x0576,0x1170,0x1170,0x1170,0x1170,
0x1170,0x0558,0x0559,0x111b,0x0643,0x0643,0x111d,0x1170,0x1170,0x1170,0x1123,0x3124,0x3124,0x0643,0x3239,0x063a,0x3124,0x3124,0x1125,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1550,0x1551,0x1123,0x0643,0x0643,0x1125,0x1170,0x1170,0x1170,0x112b,0x1145,0x3124,0x063a,0x0643,0x3124,0x3124,0x3124,0x1125,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x0572,0x1574,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1558,0x1559,0x1123,0x0643,0x0643,0x313e,0x311c,0x111d,0x1170,0x1170,0x1123,0x3124,0x3124,0x0643,0x3124,0x3124,0x3124,0x1125,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0572,0x14b4,0x157c,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,
0x1575,0x1576,0x1170,0x1123,0x0643,0x0643,0x3239,0x3124,0x1125,0x1170,0x1170,0x1123,0x3124,0x3124,0x063a,0x3124,0x3124,0x3124,0x1125,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0582,0x1479,0x1584,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x157d,0x157e,0x1170,0x1123,0x0643,0x0643,0x0643,0x3124,0x1125,0x1170,0x1170,0x112b,0x1145,0x3124,0x3124,0x3124,0x3124,0x3124,0x1125,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x0575,0x0576,0x1170,0x1170,0x1550,0x1551,
0x1170,0x1575,0x1576,0x1123,0x0643,0x0643,0x0643,0x3124,0x1125,0x1170,0x1170,0x1170,0x1123,0x3124,0x3124,0x3124,0x3124,0x1146,0x112d,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x1558,0x1559,
0x1170,0x157d,0x157e,0x1123,0x063a,0x0643,0x063a,0x1146,0x112d,0x1170,0x1170,0x1170,0x1123,0x3124,0x3124,0x3124,0x3124,0x1125,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0575,0x0576,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1550,0x1551,0x1170,0x112b,0x1145,0x0643,0x3124,0x1125,0x1170,0x1170,0x1170,0x1170,0x1123,0x3124,0x3124,0x3124,0x1146,0x112d,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1558,0x1559,0x1170,0x1170,0x1123,0x063a,0x3124,0x1125,0x1170,0x1170,0x1170,0x1170,0x112b,0x1145,0x3124,0x3124,0x1125,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1575,0x1576,0x0572,0x157b,0x1574,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1575,0x1576,0x1170,0x112b,0x0552,0x0553,0x112d,0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x3124,0x3124,0x1125,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x157d,0x157e,0x057a,0x1071,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x157d,0x157e,0x1550,0x1551,0x0558,0x0559,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x112b,0x112c,0x112c,0x112d,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0572,0x14b4,0x1071,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1558,0x1559,0x1170,0x0550,0x0551,0x1170,0x1170,0x0558,0x0559,0x0550,0x0551,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x1493,0x1494,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x0575,0x0576,0x1170,0x1170,0x0558,0x0559,0x0575,0x0576,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x1473,0x1475,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x0575,0x0576,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x1473,0x1475,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1550,0x1551,0x1170,0x1170,0x1170,0x1170,0x057d,0x057e,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x1473,0x1475,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1558,0x1559,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x111b,0x311c,0x111d,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x149b,0x149c,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1575,0x1576,0x0558,0x0559,0x1170,0x1123,0x3124,0x1125,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x1071,0x1474,0x1584,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x157d,0x157e,0x1170,0x1170,0x1170,0x112b,0x112c,0x112d,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x1071,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1550,0x1551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x1474,0x1584,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1219,0x1219,0x1558,0x1559,0x1170,0x111b,0x311c,0x311c,0x111d,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x111b,0x0643,0x0643,0x111d,0x1170,0x1170,0x1123,0x3124,0x3124,0x1125,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x057a,0x157c,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x0643,0x0643,0x313e,0x311c,0x111d,0x112b,0x1145,0x3124,0x1125,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0582,0x1584,0x1575,0x1576,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x0643,0x0643,0x3239,0x3124,0x1125,0x1170,0x112b,0x112c,0x112d,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x157d,0x157e,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x0643,0x0643,0x0643,0x3124,0x1125,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1575,0x1576,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1123,0x063a,0x0643,0x063a,0x1146,0x112d,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1575,0x1576,0x157d,0x157e,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x112b,0x1145,0x063a,0x3124,0x1125,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x157d,0x157e,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x112b,0x0552,0x0553,0x112d,0x1170,0x1170,0x1550,0x1551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0550,0x0551,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1558,0x1559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x0558,0x0559,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,0x1170,
};

const MapScreenData	road105_map_data =
{
	MapSizeX_road105,
	MapSizeY_road105,
	road105_OutRangeCell,
	road105_MapData,
	&field_char_data,
	&field_3_char_data
};

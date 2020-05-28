//MapEditNH Ver.3.55 *.cell -> C sourse Convert.
//Part Cell Data File (512-1023)
//Full Char File Name (0-511)    : room.sch
//Part Char File Name (512-1023) : karakuri.sch

#define	karakuri_Max	149

const u16	karakuri_CellChrData[karakuri_Max*8]={
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xa210,0xa210,0xa220,0xa220,0x0000,0x0000,0x0000,0x0000,
0xa210,0xa210,0xa220,0xa201,0x0000,0x0000,0x0000,0x0000,
0xa210,0xa210,0xa20a,0xa20a,0x0000,0x0000,0x0000,0x0000,
0xa210,0xa210,0xa204,0xa220,0x0000,0x0000,0x0000,0x0000,
0xa210,0xa210,0xa220,0xa220,0x0000,0x0000,0x6251,0x6651,
0xa210,0xa210,0xa220,0xa220,0xa240,0x0000,0xa250,0x0000,
0xa210,0xa210,0xa220,0xa220,0x0000,0xa240,0x0000,0xa250,
0xa234,0xa233,0xa244,0xa243,0x0000,0x0000,0x0000,0x0000,
0xa220,0xa220,0xa230,0xa230,0x0000,0x0000,0x0000,0x0000,
0xa220,0xa211,0xa230,0xa221,0x0000,0x0000,0x0000,0x0000,
0x621b,0x621b,0x622a,0x622b,0x0000,0x0000,0x0000,0x0000,
0xa214,0xa220,0xa224,0xa230,0x0000,0x0000,0x0000,0x0000,
0xa220,0xa220,0xa230,0xa230,0x6261,0x6661,0x0000,0x0000,
0xa220,0xa220,0xa230,0xa230,0xa250,0x0000,0xa250,0x0000,
0xa220,0xa220,0xa230,0xa230,0x0000,0xa250,0x0000,0xa250,
0xa232,0xa231,0xa242,0xa241,0x0000,0x0000,0x0000,0x0000,
0x8259,0x825a,0x8269,0x826a,0x0000,0x0000,0x0800,0x0800,
0x825b,0x825c,0x826b,0x826c,0x0000,0x0000,0x0800,0x0800,
0xa234,0xa233,0xa244,0xa243,0xa257,0xa258,0xa267,0xa268,
0xa234,0xa233,0xa244,0xa243,0x6255,0x6256,0x6265,0x6266,
0xa232,0xa231,0xa242,0xa241,0x6255,0x6256,0x6265,0x6266,
0xa232,0xa231,0xa242,0xa241,0xa260,0x0000,0x0000,0x0000,
0xa232,0xa231,0xa242,0xa241,0x0000,0xa260,0x0000,0x0000,
0xa234,0xa233,0xa244,0xa243,0x0000,0x0000,0x8205,0x8206,
0xa234,0xa233,0xa244,0xa243,0x0000,0x0000,0x8206,0x8605,
0xa232,0xa231,0xa244,0xa243,0x0000,0x0000,0x8205,0x8605,
0xa234,0xa233,0xa244,0xa243,0x0000,0x0000,0x8205,0x8206,
0xa234,0xa233,0xa244,0xa243,0x0000,0x0000,0x8206,0x8206,
0xa234,0xa233,0xa244,0xa243,0x0000,0x0000,0x8206,0x8605,
0xa234,0xa233,0x8225,0x8227,0x8218,0x8618,0x0000,0x0000,
0x8216,0x8216,0x8226,0x8226,0x0000,0x0000,0x0000,0x0000,
0x8215,0x8217,0x8215,0x8615,0x0000,0x0000,0x0000,0x0000,
0x8617,0x8615,0x8215,0x8615,0x0000,0x0000,0x0000,0x0000,
0x8215,0x8615,0x8215,0x8615,0x0000,0x0000,0x0000,0x0000,
0x8225,0x8226,0x8245,0x8248,0x0000,0x0000,0x0000,0x0000,
0x8226,0x8226,0x8246,0x8246,0x0000,0x0000,0x0000,0x0000,
0x8226,0x8227,0x8248,0x8247,0x0000,0x0000,0x0000,0x0000,
0xa234,0xa233,0xa244,0xa243,0x8218,0x8618,0x8215,0x8615,
0x8236,0x8236,0x8246,0x8246,0x0000,0x0000,0x0000,0x0000,
0x8215,0x8615,0x8215,0x8208,0x0000,0x0000,0x0000,0x0000,
0x8215,0x8615,0x8209,0x8615,0x0000,0x0000,0x0000,0x0000,
0x8225,0x8227,0x8245,0x8247,0x0000,0x0000,0x0000,0x0000,
0x8617,0x8217,0x8215,0x8615,0x0000,0x0000,0x0000,0x0000,
0x8215,0x8615,0x8209,0x8208,0x0000,0x0000,0x0000,0x0000,
0x8215,0x8615,0x8225,0x8227,0x0000,0x0000,0x0000,0x0000,
0x8215,0x8216,0x8225,0x8226,0x0000,0x0000,0x0000,0x0000,
0x8216,0x8615,0x8226,0x8227,0x0000,0x0000,0x0000,0x0000,
0x8225,0x8226,0x8245,0x8246,0x0000,0x0000,0x0000,0x0000,
0x8226,0x8227,0x8246,0x8247,0x0000,0x0000,0x0000,0x0000,
0xa220,0xa220,0xa230,0xa230,0x0000,0x0000,0x8205,0x8206,
0xa220,0xa220,0xa230,0xa230,0x0000,0x0000,0x8206,0x8206,
0xa220,0xa220,0xa230,0xa230,0x0000,0x0000,0x8206,0x8605,
0x8235,0x8237,0x8245,0x8247,0x0000,0x0000,0x0000,0x0000,
0x8235,0x8238,0x8245,0x8246,0x0000,0x0000,0x0000,0x0000,
0x8238,0x8237,0x8246,0x8247,0x0000,0x0000,0x0000,0x0000,
0xa234,0xa233,0xa244,0xa243,0x0000,0x0000,0x7270,0x7271,
0xa234,0xa233,0xa244,0xa243,0x0000,0x0000,0x7671,0x7670,
0x8235,0x8237,0x8245,0x8247,0x72a0,0x76a0,0x72b0,0x76b0,
0xa234,0xa233,0xa244,0xa243,0x0000,0x0000,0x7275,0x7276,
0xa234,0xa233,0xa244,0xa243,0x0000,0x0000,0x7676,0x7675,
0x8235,0x8237,0x8245,0x8247,0x72c0,0x76c0,0x72d0,0x76d0,
0xa234,0xa233,0xa244,0xa243,0x82c7,0x82c8,0x82d7,0x82d8,
0xa234,0xa233,0xa244,0xa243,0x82c9,0x82ca,0x82d9,0x82da,
0x7280,0x7281,0x7290,0x7291,0x0000,0x0000,0x0000,0x0000,
0x7681,0x7680,0x7691,0x7690,0x0000,0x0000,0x0000,0x0000,
0xa232,0xa231,0xa244,0xa243,0x7ab0,0x7eb0,0x7aa0,0x7ea0,
0x7285,0x7286,0x7295,0x7296,0x0000,0x0000,0x0000,0x0000,
0x7686,0x7685,0x7696,0x7695,0x0000,0x0000,0x0000,0x0000,
0xa232,0xa231,0xa244,0xa243,0x7ad0,0x7ed0,0x7ac0,0x7ec0,
0xa234,0xa233,0xa244,0xa243,0x820c,0x820d,0x821c,0x821d,
0xa234,0xa233,0xa244,0xa243,0x820e,0x820f,0x821e,0x821f,
0xa234,0xa233,0xa244,0xa243,0x0000,0x0000,0x7272,0x0000,
0xa234,0xa233,0xa244,0xa243,0x0000,0x0000,0x0000,0x7672,
0x8235,0x8237,0x8245,0x8247,0x72a1,0x72a2,0x72b1,0x72b2,
0xa234,0xa233,0xa244,0xa243,0x0000,0x0000,0x7277,0x0000,
0xa234,0xa233,0xa244,0xa243,0x0000,0x0000,0x7274,0x7677,
0x8235,0x8237,0x8245,0x8247,0x72c1,0x72c2,0x72d1,0x72d2,
0x92eb,0x92ec,0x92eb,0x92ec,0x0000,0x0000,0x0000,0x0000,
0x9aeb,0x9aec,0x9aeb,0x9aec,0x0000,0x0000,0x0000,0x0000,
0xa234,0xa233,0xa244,0xa243,0x7282,0x0000,0x7292,0x0000,
0xa234,0xa233,0xa244,0xa243,0x0000,0x7682,0x0000,0x7692,
0xa232,0xa231,0xa244,0xa243,0x0000,0x0000,0x0000,0x0000,
0xa234,0xa233,0xa244,0xa243,0x7287,0x0000,0x7297,0x0000,
0xa234,0xa233,0xa244,0xa243,0x0000,0x7687,0x7274,0x7697,
0xa232,0xa231,0xa244,0xa243,0x0000,0x0000,0x0000,0x0000,
0x9a6f,0x9e6f,0x9a5f,0x9e5f,0x0800,0x0800,0x92fa,0x92fa,
0xa234,0xa233,0xa244,0xa243,0x0000,0x0000,0x92fa,0x92fa,
0xa234,0xa233,0xa244,0xa243,0x82e0,0x82e1,0x82f0,0x82f1,
0xa234,0xa233,0xa244,0xa243,0x82e2,0x82e3,0x82f2,0x82f3,
0xa232,0xa231,0xa244,0xa243,0x0000,0x0000,0x0000,0x0000,
0x924e,0x924f,0x9a4e,0x9a4f,0x0000,0x0000,0x92fa,0x92fa,
0xa234,0xa233,0xa244,0xa243,0x927c,0x927d,0x928c,0x928d,
0xa234,0xa233,0xa244,0xa243,0x967d,0x967c,0x968d,0x968c,
0x9a6f,0x9e6f,0x9a5f,0x9e5f,0x82c5,0x82c5,0x0000,0x0000,
0xa234,0xa233,0xa244,0xa243,0x82c5,0x82c5,0x0000,0x0000,
0x923e,0x923f,0x9a3e,0x9a3f,0x0000,0x0000,0x0000,0x0000,
0x963f,0x963e,0x9e3f,0x9e3e,0x0400,0x0400,0x0400,0x0400,
0x9a6e,0x9e6e,0x9a5e,0x9e5e,0x0800,0x0800,0x0800,0x0800,
0x925e,0x965e,0x926e,0x966e,0x0000,0x0000,0x0000,0x0000,
0x924e,0x924f,0x9a4e,0x9a4f,0x0000,0x0000,0x0000,0x0000,
0x964f,0x964e,0x9e4f,0x9e4e,0x0400,0x0400,0x0400,0x0400,
0x9a6f,0x9e6f,0x9a5f,0x9e5f,0x0800,0x0800,0x0800,0x0800,
0x925f,0x965f,0x926f,0x966f,0x0000,0x0000,0x0000,0x0000,
0x621b,0x621b,0x621b,0x621b,0x0000,0x0000,0x0000,0x0000,
0x82e6,0x82e7,0x82f6,0x82f7,0x0000,0x0000,0x0000,0x0000,
0x82e8,0x82e9,0x82f8,0x82f9,0x0000,0x0000,0x0000,0x0000,
0x82e4,0x82e5,0x82e5,0x82e4,0x0000,0x0000,0x0000,0x0000,
0x82e4,0x82e5,0x82e5,0x82e4,0x6255,0x6256,0x6265,0x6266,
0x927c,0x927d,0x928c,0x928d,0x0000,0x0000,0x0000,0x0000,
0x967d,0x967c,0x968d,0x968c,0x0400,0x0400,0x0400,0x0400,
0xa210,0xa210,0xa202,0xa202,0x0000,0x0000,0x0000,0x0000,
0xa234,0xa233,0xa244,0xa243,0x82c3,0x82c4,0x82d3,0x82d4,
0xa232,0xa231,0xa244,0xa243,0x0000,0x0000,0x0000,0x0000,
0xa234,0xa233,0xa244,0xa243,0x0000,0x6719,0x0000,0x6719,
0xa234,0xa233,0xa244,0xa243,0x6319,0x0000,0x6319,0x0000,
0xa234,0xa233,0xa244,0xa243,0x0000,0x6719,0x92fa,0x92fa,
0x927e,0x927f,0x928e,0x928f,0x0000,0x0000,0x0000,0x0000,
0x9a4b,0x9a4c,0x9a3b,0x9a3c,0x0000,0x0000,0x0000,0x0000,
0xa212,0xa213,0xa222,0xa223,0x0000,0x0000,0x0000,0x0000,
0xa232,0xa231,0xa242,0xa241,0x82d5,0x82d6,0x0000,0x0000,
0x8216,0x8216,0x8216,0x8216,0x0000,0x0000,0x0000,0x0000,
0x82b3,0x82b4,0x82b3,0x82b4,0x0000,0x0000,0x92fa,0x92fa,
0x963f,0x963e,0x9e3f,0x9e3e,0x0400,0x0400,0x92fa,0x92fa,
0x923e,0x923f,0x9a3e,0x9a3f,0x0000,0x0000,0x92fa,0x92fa,
0xa234,0xa233,0x82ed,0x82ee,0x82c5,0x82c5,0x0000,0x0000,
0xa232,0xa231,0xa244,0xa243,0xa257,0xa258,0xa267,0xa268,
0xa232,0xa231,0xa242,0xa241,0xa257,0xa258,0xa267,0xa268,
0x82aa,0x82ab,0x82b3,0x82b4,0x0000,0x0000,0x0000,0x0000,
0x82ac,0x82a6,0x82bc,0x82b6,0x0000,0x0000,0x0000,0x0000,
0x82a6,0x82a6,0x82b6,0x82b6,0x0000,0x0000,0x0000,0x0000,
0x82a6,0x82ad,0x82b6,0x82bd,0x0000,0x0000,0x0000,0x0000,
0x82a3,0x82a4,0x82b5,0x82b7,0x0000,0x0000,0x0000,0x0000,
0x82fd,0x82fe,0xa242,0xa241,0x0000,0x0000,0x0000,0x0000,
0xa234,0xa233,0xa230,0xa230,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x82b3,0x82b4,0x82b3,0x82b4,0x0000,0x0000,0x0000,0x0000,
0x82a3,0x82a6,0x82b3,0x82b9,0x0000,0x0000,0x0000,0x0000,
0x82a6,0x82a4,0x82cd,0x82b4,0x0000,0x0000,0x0000,0x0000,
0x82a7,0x82b4,0x82cd,0x82b4,0x0000,0x0000,0x0000,0x0000,
0x82b3,0x82dd,0x82b3,0x82b9,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x82b3,0x82b4,0x82ba,0x82bb,0x0000,0x0000,0x0000,0x0000,
0x82b3,0x82dd,0x82b5,0x82b6,0x0000,0x0000,0x0000,0x0000,
0x82a7,0x82b4,0x82b6,0x82b7,0x0000,0x0000,0x0000,0x0000,
0x82a6,0x82a6,0x82cd,0x82b9,0x0000,0x0000,0x0000,0x0000,
0x82a7,0x82dd,0x82b6,0x82b6,0x0000,0x0000,0x0000,0x0000,
};

const u16	karakuri_CellAtbData[karakuri_Max]={
0x0000,0x0000,0x0000,0x0000,0x0000,0x1000,0x1000,0x1000,
0x0000,0x0000,0x0000,0x0060,0x0000,0x1000,0x1000,0x1000,
0x0000,0x0065,0x0065,0x1000,0x10e4,0x10e4,0x1000,0x1000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1000,0x0000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x0000,0x0000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x0000,0x0000,0x0000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x0000,0x0000,
0x0000,0x0000,0x1000,0x0000,0x0000,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x1067,0x1000,
0x1000,0x1000,0x1000,0x1000,0x1000,0x1000,0x0046,0x0047,
0x1000,0x1000,0x0000,0x1000,0x1000,0x0000,0x0046,0x0000,
0x1000,0x1000,0x0000,0x0044,0x0048,0x0048,0x0046,0x0000,
0x0040,0x0041,0x0042,0x0043,0x0044,0x0045,0x0046,0x0047,
0x0000,0x0000,0x0000,0x0048,0x10e4,0x0044,0x0045,0x0000,
0x1000,0x0000,0x0000,0x0000,0x0000,0x0047,0x0046,0x008c,
0x1000,0x0000,0x1000,0x0041,0x0040,0x1000,0x1000,0x1000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x103b,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,
};

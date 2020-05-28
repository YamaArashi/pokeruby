//MapEditNH Ver.3.55 *.map -> C sourse Convert.
//Full Cell File Name (0-511)    : field.cell
//Part Cell File Name (512-1023) : field_2.cell

#define	MapSizeX_city104	40
#define	MapSizeY_city104	60

const u16	city104_OutRangeCell[4]={
0x01d4,0x01d5,0x01dc,0x01dd,
};

const u16	city104_MapData[MapSizeX_city104*MapSizeY_city104]={
0x3550,0x3551,0x3170,0x3170,0x3170,0x3170,0x3170,0x3170,0x3170,0x3170,0x057a,0x05d4,0x05d5,0x05dc,0x05dd,0x05dc,0x05dd,0x05d4,0x35d7,0x3001,0x3001,0x3001,0x3001,0x3001,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x35d4,0x05d5,
0x3558,0x3559,0x3170,0x3170,0x3170,0x0550,0x0551,0x3170,0x3170,0x3170,0x057a,0x05dc,0x35dd,0x05d4,0x05d5,0x05d4,0x05d5,0x05dc,0x35dd,0x3001,0x3001,0x3001,0x3001,0x3001,0x05d4,0x35d5,0x05d4,0x35d5,0x35d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05dc,0x05dd,
0x3170,0x3170,0x3170,0x3170,0x3170,0x0558,0x0559,0x3170,0x3170,0x3170,0x057a,0x05d4,0x05d5,0x05dc,0x05dd,0x05dc,0x05dd,0x05d4,0x05d5,0x3001,0x3001,0x3001,0x3001,0x3001,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x35dd,0x05dc,0x05dd,0x05dc,0x05dd,0x35d4,0x05d5,
0x3170,0x3170,0x3170,0x3170,0x3170,0x3170,0x3170,0x3170,0x3170,0x3170,0x057a,0x35dc,0x35dd,0x05d4,0x35d5,0x05d4,0x05d5,0x05dc,0x35dd,0x3001,0x3001,0x3001,0x3001,0x3001,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x35d4,0x05d5,0x35d4,0x05d5,0x05dc,0x05dd,
0x3170,0x3170,0x3170,0x3170,0x3170,0x3170,0x3170,0x3170,0x3170,0x3170,0x057a,0x05d4,0x05d5,0x05dc,0x05dd,0x05dc,0x05dd,0x05d4,0x05d5,0x3001,0x3001,0x3001,0x3001,0x3001,0x05e6,0x05e5,0x05dc,0x05dd,0x35dc,0x05dd,0x05dc,0x35dd,0x05dc,0x05dd,0x05dc,0x35dd,0x05dc,0x05dd,0x05d4,0x05d5,
0x3170,0x3170,0x3170,0x3170,0x3170,0x3170,0x0575,0x30d3,0x3002,0x3002,0x3002,0x05e6,0x05e5,0x05d4,0x05d5,0x05d4,0x05d5,0x05dc,0x05dd,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05dc,0x05dd,
0x3170,0x3170,0x3550,0x0551,0x3170,0x0575,0x30d3,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x05e4,0x05e5,0x05e4,0x05e5,0x05d4,0x05d5,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x05e6,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05d4,0x05d5,
0x3170,0x3170,0x3558,0x0559,0x3170,0x057a,0x3001,0x0688,0x0689,0x0689,0x068b,0x068c,0x068c,0x068d,0x0689,0x0689,0x068a,0x05e4,0x05e7,0x32e0,0x32e1,0x32e1,0x32e1,0x32e1,0x06be,0x06a7,0x06a7,0x06a7,0x06a7,0x06a7,0x06a7,0x06a7,0x06a7,0x06a7,0x06a7,0x06a7,0x0752,0x3001,0x05e6,0x05e5,
0x3170,0x3170,0x3170,0x3170,0x3170,0x057a,0x071b,0x0690,0x0691,0x0691,0x0693,0x0694,0x0694,0x0695,0x0691,0x0691,0x0692,0x0752,0x32e0,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x0403,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32ea,0x3001,0x3001,0x3001,
0x3170,0x3170,0x3170,0x3170,0x3170,0x057a,0x0718,0x0698,0x0699,0x069a,0x068e,0x068f,0x0696,0x0697,0x069a,0x069a,0x069b,0x06c7,0x32bb,0x32bb,0x32f8,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32fa,0x3001,0x3001,0x3001,
0x3170,0x3170,0x3170,0x3170,0x3170,0x057a,0x0718,0x06a0,0x06a1,0x06a2,0x069c,0x069d,0x069d,0x069e,0x06a2,0x06a2,0x06a3,0x06dc,0x32bb,0x32bb,0x3300,0x305e,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x330a,0x3001,0x3001,0x3001,
0x3550,0x3551,0x3170,0x3170,0x3170,0x057a,0x0718,0x0698,0x0699,0x069a,0x06a4,0x06a5,0x06a5,0x06a6,0x069a,0x069a,0x069b,0x06ec,0x32bd,0x32bb,0x3300,0x3302,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32ea,0x3001,0x3001,0x3001,
0x3558,0x3559,0x3170,0x3170,0x3170,0x057a,0x0718,0x06a0,0x06a1,0x06a2,0x069c,0x069d,0x069d,0x069e,0x06a2,0x06a2,0x06a3,0x06ec,0x32c3,0x32bb,0x3300,0x3302,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32f2,0x31ce,0x31cf,0x3001,
0x3170,0x3170,0x3170,0x3170,0x3170,0x057a,0x0718,0x06a8,0x06a9,0x06a9,0x06a4,0x06a5,0x06a5,0x06a6,0x06aa,0x06aa,0x06ab,0x06ec,0x32c3,0x32bb,0x3300,0x3302,0x32bb,0x32bb,0x06be,0x06a7,0x06a7,0x06a7,0x06a7,0x06a7,0x06a7,0x06a7,0x06a7,0x06a7,0x06a7,0x06a7,0x071a,0x05d6,0x05d7,0x3001,
0x3170,0x3170,0x3170,0x3170,0x3170,0x057a,0x0718,0x06b0,0x06b1,0x06b1,0x06ac,0x06ad,0x06ad,0x06ae,0x06b2,0x06b2,0x06b3,0x06ec,0x32c3,0x32bb,0x3300,0x3302,0x32bb,0x32bb,0x36c6,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x0719,0x05e6,0x05f2,0x31cf,
0x3170,0x3170,0x3170,0x3170,0x3170,0x057a,0x0718,0x32c4,0x32c3,0x32c3,0x06b4,0x02b5,0x02b5,0x06b6,0x32c3,0x32c3,0x32c3,0x06ec,0x32c3,0x3212,0x3300,0x3302,0x3212,0x32bb,0x36ca,0x32cb,0x32cb,0x32cb,0x32cb,0x32db,0x32bb,0x3224,0x3225,0x3225,0x3225,0x3226,0x0719,0x3001,0x05d4,0x05d7,
0x3170,0x3170,0x3170,0x3170,0x3170,0x057a,0x0718,0x32bb,0x3213,0x32c3,0x32c3,0x32c3,0x32c3,0x32c3,0x32c3,0x3213,0x32c3,0x06ec,0x32c3,0x061a,0x3300,0x3302,0x061a,0x32bb,0x05b2,0x05b3,0x05b3,0x05b3,0x05b3,0x05b4,0x32bb,0x0636,0x063e,0x063e,0x063e,0x0637,0x0719,0x31ce,0x05f3,0x05e5,
0x3170,0x3170,0x3170,0x3170,0x3170,0x057a,0x0718,0x32bb,0x061a,0x32bb,0x32bb,0x32c4,0x32c3,0x32c3,0x32c3,0x061b,0x32bb,0x06c7,0x32bb,0x32bb,0x3300,0x3302,0x32bb,0x32bb,0x06c8,0x05b9,0x05ba,0x05b3,0x05bb,0x06c9,0x32bb,0x062c,0x062d,0x062d,0x062d,0x062e,0x0719,0x05d6,0x05d5,0x3001,
0x3170,0x3170,0x3170,0x3170,0x0575,0x30d3,0x0718,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x06c7,0x32bb,0x32bb,0x3300,0x3302,0x32bb,0x32cc,0x06d0,0x05c1,0x05c2,0x05c5,0x05c3,0x06d1,0x32bb,0x0614,0x0642,0x0617,0x0642,0x0616,0x0719,0x05e6,0x05f2,0x31cf,
0x3170,0x3170,0x3170,0x3170,0x057a,0x3001,0x0718,0x32bb,0x32bb,0x3212,0x32bb,0x32bb,0x32bb,0x32bb,0x3212,0x32bb,0x06be,0x06d5,0x32bb,0x32bb,0x3300,0x3302,0x32bb,0x06d4,0x32d8,0x32d9,0x06d2,0x05cd,0x06d3,0x32da,0x32bb,0x061c,0x061d,0x061f,0x061d,0x061e,0x0719,0x3001,0x05d4,0x05d5,
0x3170,0x3170,0x3170,0x3170,0x057a,0x3001,0x0718,0x32bb,0x32bb,0x061a,0x32bb,0x32bb,0x32bb,0x32bb,0x061a,0x32bb,0x32bb,0x0403,0x32bb,0x32bb,0x3300,0x3302,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x0719,0x31ce,0x05f3,0x05e5,
0x3170,0x3170,0x3170,0x3170,0x057a,0x3001,0x0718,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32f8,0x32f9,0x305e,0x305e,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32fa,0x32bb,0x0719,0x05d6,0x05d5,0x3001,
0x3170,0x3170,0x3170,0x3170,0x057a,0x3001,0x0718,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x3308,0x3309,0x305e,0x305e,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x330a,0x32bb,0x0719,0x05e6,0x05f2,0x31cf,
0x3170,0x3170,0x3170,0x0575,0x30d3,0x3001,0x072d,0x06fc,0x06fc,0x06fc,0x06fc,0x06fc,0x06fc,0x06fc,0x06fc,0x06fc,0x06fc,0x06bf,0x32bb,0x3212,0x3300,0x3302,0x3212,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x0719,0x3001,0x05d4,0x05d5,
0x3170,0x3170,0x3170,0x057a,0x3001,0x3001,0x0718,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x061a,0x3300,0x3302,0x061a,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x3224,0x3225,0x3225,0x3225,0x3226,0x32bb,0x32bb,0x32bb,0x0719,0x31ce,0x05f3,0x05e5,
0x3170,0x3170,0x3170,0x057a,0x31ce,0x31cf,0x0718,0x32bb,0x32bb,0x3220,0x3221,0x3221,0x3221,0x3221,0x3221,0x3221,0x3222,0x3223,0x32bb,0x32bb,0x3300,0x3302,0x32bb,0x32bb,0x06be,0x06fc,0x06fc,0x06fc,0x0636,0x063e,0x063e,0x063e,0x0637,0x06a7,0x06a7,0x06a7,0x071a,0x05d6,0x05d5,0x3001,
0x3170,0x3170,0x3170,0x057a,0x05d6,0x35d7,0x0718,0x32bb,0x32bb,0x0628,0x0629,0x0629,0x0629,0x0629,0x0629,0x0629,0x062a,0x062b,0x32bb,0x32bb,0x3300,0x3302,0x32bb,0x32e2,0x06de,0x3001,0x31ce,0x31cf,0x062c,0x062d,0x062d,0x062d,0x062e,0x32f1,0x32f1,0x32bb,0x0719,0x05e6,0x05f2,0x31cf,
0x3170,0x3170,0x0575,0x30d3,0x05dc,0x05dd,0x0718,0x32bb,0x32bb,0x0630,0x0631,0x0631,0x0631,0x0631,0x0631,0x0631,0x0631,0x0633,0x32bd,0x32bb,0x3300,0x3302,0x32bb,0x32e2,0x06de,0x3004,0x05d6,0x05d7,0x0614,0x0642,0x0617,0x0642,0x0616,0x3004,0x3004,0x32e8,0x0719,0x3001,0x05d4,0x05d5,
0x3170,0x3170,0x057a,0x3001,0x05d4,0x35d5,0x0718,0x32bb,0x32bb,0x0638,0x063a,0x0639,0x063a,0x0639,0x063a,0x0639,0x063a,0x063b,0x32c3,0x32bb,0x3300,0x3302,0x32bb,0x32e2,0x06de,0x3004,0x05e6,0x05e7,0x061c,0x061d,0x061f,0x061d,0x061e,0x3004,0x3004,0x32e8,0x0719,0x31ce,0x05f3,0x05e5,
0x3170,0x3170,0x057a,0x3001,0x05dc,0x05dd,0x0718,0x32bb,0x32bb,0x0638,0x063a,0x0639,0x0639,0x0627,0x0639,0x0639,0x063a,0x063b,0x32c3,0x32bb,0x3300,0x3302,0x32bb,0x32e2,0x06de,0x3001,0x3004,0x3004,0x3001,0x3001,0x3001,0x3001,0x3001,0x3004,0x3004,0x32e8,0x0719,0x05d6,0x05d5,0x3001,
0x3170,0x0575,0x30d3,0x3001,0x05d4,0x35d5,0x0718,0x32bb,0x32bb,0x0640,0x0641,0x0641,0x0641,0x062f,0x0641,0x0641,0x0641,0x0643,0x32c3,0x3212,0x3300,0x3302,0x3212,0x32bb,0x0620,0x3221,0x3221,0x3221,0x3221,0x3222,0x3223,0x3001,0x3001,0x3001,0x32e0,0x32bb,0x0719,0x05e6,0x05f2,0x31cf,
0x3170,0x057a,0x31ce,0x31cf,0x05dc,0x05dd,0x0718,0x32bb,0x32bb,0x32c4,0x32c3,0x32c3,0x32c3,0x32c3,0x32c3,0x32c3,0x32c3,0x32c3,0x32c3,0x061a,0x3300,0x3302,0x061a,0x32bb,0x0628,0x0629,0x0629,0x0629,0x0629,0x062a,0x062b,0x3001,0x3001,0x32e0,0x06cd,0x06a7,0x071a,0x3001,0x05d4,0x05d5,
0x3170,0x057a,0x05d6,0x35d5,0x05d4,0x35d5,0x0718,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x3300,0x3302,0x32bb,0x32bb,0x0630,0x0631,0x0631,0x0631,0x0631,0x0631,0x0633,0x32e1,0x32e1,0x32bb,0x32bb,0x32bb,0x0719,0x31ce,0x05f3,0x05e5,
0x3170,0x057a,0x05dc,0x05dd,0x05dc,0x05dd,0x0718,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x3300,0x3302,0x32bb,0x32bb,0x0638,0x063a,0x063a,0x0627,0x063a,0x063a,0x063b,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x0719,0x05d6,0x05d5,0x3001,
0x3002,0x3002,0x05d4,0x35d5,0x05d4,0x35d5,0x0718,0x3220,0x3221,0x3221,0x3222,0x3223,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x3300,0x3302,0x32bb,0x32bb,0x0640,0x0641,0x0641,0x062f,0x0641,0x0641,0x0643,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x0719,0x05e6,0x05f2,0x31cf,
0x31ce,0x31cf,0x05dc,0x05dd,0x05dc,0x05dd,0x0718,0x0628,0x0629,0x0629,0x062a,0x062b,0x32bb,0x32bb,0x32bb,0x3256,0x325e,0x325f,0x3257,0x32bb,0x3300,0x3302,0x32bb,0x32bb,0x32bb,0x0403,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x0719,0x3001,0x05d4,0x05d5,
0x05d4,0x35d5,0x05d4,0x35d5,0x05d4,0x35d5,0x0718,0x0630,0x0631,0x0631,0x0631,0x0633,0x32bb,0x32bb,0x32bb,0x0450,0x0451,0x0452,0x0453,0x32bb,0x3300,0x3302,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x0719,0x31ce,0x05f3,0x05e5,
0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x0718,0x0638,0x063a,0x0627,0x063a,0x063b,0x32bb,0x32bb,0x32bb,0x0458,0x0459,0x045a,0x045b,0x3212,0x3300,0x3302,0x3212,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x0719,0x05d6,0x05d5,0x3001,
0x05d4,0x35d5,0x05d4,0x35d5,0x05d4,0x35d5,0x0718,0x0640,0x0641,0x062f,0x0641,0x0643,0x3403,0x32bb,0x32bb,0x0666,0x0461,0x0462,0x067e,0x061a,0x3300,0x3302,0x061a,0x32bb,0x32bb,0x32bb,0x32bb,0x0738,0x0739,0x073a,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x0719,0x05e6,0x05f2,0x31cf,
0x05dc,0x05dd,0x05e4,0x05e5,0x05e4,0x05e5,0x0718,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x3300,0x3302,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x0740,0x0741,0x0742,0x32bb,0x3224,0x3225,0x3225,0x3226,0x32bb,0x0719,0x3001,0x05d4,0x05d5,
0x05d4,0x35d5,0x071b,0x06b7,0x06b7,0x06b7,0x06e9,0x32bb,0x32f8,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x305e,0x3302,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x0748,0x0749,0x074a,0x32bb,0x0636,0x063e,0x063e,0x0637,0x32bb,0x0719,0x31ce,0x05f3,0x05e5,
0x05dc,0x05dd,0x0718,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x3308,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x305e,0x3302,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x062c,0x062d,0x062d,0x062e,0x32bb,0x0719,0x05d6,0x05d5,0x3001,
0x05d4,0x35d5,0x0718,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x3325,0x3267,0x3267,0x3326,0x32bb,0x3300,0x3302,0x32bb,0x32bb,0x3220,0x3221,0x3221,0x3221,0x3221,0x323f,0x32bb,0x0614,0x0615,0x0615,0x0616,0x32bb,0x0719,0x05e6,0x05f2,0x31cf,
0x05dc,0x05dd,0x0718,0x3224,0x3225,0x3225,0x3225,0x3225,0x3225,0x3226,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x0430,0x0431,0x0432,0x0433,0x32bb,0x3300,0x3302,0x32bb,0x32bb,0x0628,0x0629,0x0629,0x0629,0x0629,0x0647,0x32bb,0x0614,0x0642,0x0642,0x0616,0x32bd,0x0719,0x3001,0x05d4,0x05d5,
0x05d4,0x35d5,0x0718,0x0636,0x063e,0x063e,0x063e,0x063e,0x063e,0x0637,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x0438,0x0439,0x043a,0x043b,0x3212,0x3300,0x3302,0x3212,0x32bb,0x0630,0x0631,0x0631,0x0631,0x0631,0x0633,0x32bb,0x0614,0x0615,0x0615,0x0616,0x32c3,0x0719,0x31ce,0x05f3,0x05e5,
0x05dc,0x05dd,0x0718,0x062c,0x062d,0x062d,0x062d,0x062d,0x062d,0x062e,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x0666,0x0441,0x0442,0x067f,0x061a,0x3300,0x3302,0x061a,0x32bb,0x0638,0x063a,0x0627,0x063a,0x063a,0x063b,0x32bb,0x0614,0x0642,0x0642,0x0616,0x32c3,0x0719,0x05d6,0x05d5,0x3001,
0x05d4,0x35d5,0x0718,0x0614,0x0642,0x0615,0x0642,0x0615,0x0642,0x0616,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x3300,0x3302,0x32bb,0x32bb,0x0640,0x0641,0x062f,0x0641,0x0641,0x0643,0x32bb,0x061c,0x061d,0x061d,0x061e,0x32c3,0x0719,0x05e6,0x05f2,0x31cf,
0x05dc,0x05dd,0x0718,0x0614,0x0642,0x0615,0x0642,0x0615,0x0642,0x0616,0x32bd,0x32bb,0x32bb,0x32bb,0x32bb,0x32f8,0x32f9,0x32f9,0x32f9,0x32f9,0x305e,0x305e,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32f9,0x32fa,0x32bb,0x32bb,0x32c4,0x32c3,0x32c3,0x32c3,0x32c3,0x0719,0x3001,0x05d4,0x05d5,
0x05d4,0x35d5,0x0718,0x0614,0x0615,0x0615,0x0615,0x0615,0x0615,0x0616,0x32c3,0x32bd,0x32bb,0x32bb,0x32bb,0x3300,0x305e,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x3309,0x330a,0x3212,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x0719,0x31ce,0x05f3,0x05e5,
0x05dc,0x05dd,0x0718,0x0614,0x0642,0x0615,0x0642,0x0615,0x0642,0x0616,0x32c3,0x32c3,0x32bb,0x32bb,0x32bb,0x3300,0x3302,0x32bb,0x32bb,0x0403,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x061a,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x0719,0x05d6,0x05d5,0x3001,
0x05d4,0x35d5,0x0718,0x0614,0x0642,0x0617,0x0642,0x0615,0x0642,0x0616,0x32c3,0x32c3,0x32bb,0x32bb,0x32bb,0x3300,0x3302,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x06be,0x06fc,0x06fc,0x06fc,0x06fc,0x0721,0x05dc,0x05dd,0x3001,
0x05dc,0x05dd,0x0718,0x061c,0x061d,0x061f,0x061d,0x061d,0x061d,0x061e,0x32c3,0x32c3,0x32bb,0x32bb,0x32bb,0x3300,0x3302,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x0715,0x3001,0x31ce,0x31cf,0x31ce,0x31cf,0x05d4,0x05d5,0x3001,
0x05d4,0x35d5,0x0718,0x32c4,0x32c3,0x32c3,0x32c3,0x32c3,0x32c3,0x32c3,0x32c3,0x32c3,0x32bb,0x32bb,0x32bb,0x3300,0x3302,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x0715,0x3001,0x05d6,0x05d5,0x05d4,0x05d7,0x05e4,0x05f2,0x31cf,
0x05dc,0x05dd,0x0718,0x32bb,0x32c4,0x32c3,0x32c3,0x32c3,0x32c3,0x32c3,0x32c3,0x32c3,0x32bb,0x32bb,0x32bb,0x3300,0x3302,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x32bb,0x0715,0x3001,0x05dc,0x05dd,0x05e4,0x05f2,0x31cf,0x05d4,0x05d5,
0x05d4,0x35d5,0x0720,0x06fc,0x06fc,0x06fc,0x06fc,0x06fc,0x06fc,0x06fc,0x06fc,0x06bf,0x32bb,0x32bb,0x3212,0x3300,0x3302,0x3212,0x32bb,0x32bb,0x06be,0x06fc,0x06fc,0x06fc,0x06fc,0x06fc,0x06fc,0x06fc,0x06fc,0x06fc,0x06fc,0x072c,0x3001,0x05d4,0x05d5,0x3001,0x05d4,0x05d5,0x05dc,0x05dd,
0x05dc,0x05dd,0x31ce,0x31cf,0x31ce,0x31cf,0x31ce,0x31cf,0x31ce,0x31cf,0x3001,0x071d,0x32bb,0x32bb,0x061a,0x3300,0x3302,0x061a,0x32bb,0x32bb,0x0715,0x3001,0x31ce,0x31cf,0x31ce,0x31cf,0x31ce,0x31cf,0x31ce,0x31cf,0x31ce,0x31cf,0x31ce,0x05f3,0x05f2,0x31cf,0x05dc,0x05dd,0x05d4,0x05d5,
0x05d4,0x35d5,0x05d4,0x35d5,0x05d4,0x35d5,0x05d4,0x35d5,0x05d4,0x35d7,0x3001,0x071d,0x32f1,0x32f1,0x32f1,0x3300,0x3302,0x32f1,0x32f1,0x32f1,0x0715,0x3001,0x05d6,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05d4,0x05d5,0x05dc,0x05dd,
0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x05e4,0x05e5,0x05e4,0x05e7,0x3001,0x06df,0x3001,0x3001,0x3001,0x3110,0x3112,0x3001,0x3001,0x3001,0x06de,0x3001,0x05e6,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05e4,0x05e5,0x05dc,0x05dd,0x05dc,0x05dd,0x05d4,0x05d5,
0x05d4,0x35d5,0x05d4,0x35d5,0x05d4,0x35d5,0x3001,0x3001,0x3001,0x3001,0x3001,0x06df,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x06de,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x05d4,0x05d5,0x05d4,0x05d5,0x05dc,0x05dd,
0x05dc,0x05dd,0x05dc,0x05dd,0x05dc,0x05dd,0x3737,0x373f,0x373e,0x373f,0x36b7,0x06e7,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x3001,0x06e6,0x36b7,0x36b7,0x36b7,0x36b7,0x36b7,0x36b7,0x36b7,0x36b7,0x36b7,0x36b7,0x36b7,0x36d7,0x3001,0x05dc,0x05dd,0x05dc,0x05dd,0x05d4,0x05d5,
};

const MapScreenData	city104_map_data =
{
	MapSizeX_city104,
	MapSizeY_city104,
	city104_OutRangeCell,
	city104_MapData,
	&field_char_data,
	&field_2_char_data
};

#define NYBBLE
#define NUM_SKILLS 34
#define I2C_EEPROM

const char bd[] PROGMEM = { 
30, 0, 0, 1,
  39,  39, -80, -80,  20,  20,  47,  47,
  30,  30, -73, -73,  24,  24,  48,  48,
  26,  26, -64, -64,  25,  25,  46,  46,
  23,  23, -55, -55,  24,  24,  43,  43,
  21,  21, -48, -48,  20,  20,  39,  39,
  21,  21, -41, -41,  15,  15,  32,  32,
  22,  22, -36, -36,   8,   8,  26,  26,
  24,  24, -31, -31,   0,   0,  19,  19,
  26,  26, -28, -28,  -8,  -8,  12,  12,
  29,  29, -25, -25, -15, -15,   4,   4,
  33,  33, -24, -24, -23, -23,  -4,  -4,
  38,  38, -23, -23, -30, -30, -10, -10,
  44,  44, -24, -24, -36, -36, -15, -15,
  51,  51, -26, -26, -41, -41, -17, -17,
  60,  60, -30, -30, -45, -45, -18, -18,
  68,  68, -36, -36, -47, -47, -21, -21,
  77,  77, -40, -40, -47, -47, -25, -25,
  84,  84, -43, -43, -46, -46, -25, -25,
  87,  87, -48, -48, -42, -42, -22, -22,
  89,  89, -53, -53, -37, -37, -18, -18,
  88,  88, -59, -59, -30, -30, -13, -13,
  85,  85, -66, -66, -24, -24,  -5,  -5,
  81,  81, -72, -72, -16, -16,   3,   3,
  77,  77, -78, -78,  -9,  -9,  11,  11,
  71,  71, -82, -82,  -1,  -1,  18,  18,
  64,  64, -86, -86,   5,   5,  25,  25,
  58,  58, -88, -88,  11,  11,  32,  32,
  53,  53, -89, -89,  16,  16,  38,  38,
  48,  48, -87, -87,  18,  18,  43,  43,
  42,  42, -82, -82,  19,  19,  46,  46,
};
const char bi[] PROGMEM = { 
30, 0, 60, 1,
  78,  87, -31, -34,  43,  26, -48, -44,
  78,  86, -32, -32,  44,  25, -47, -50,
  78,  85, -32, -30,  44,  26, -47, -54,
  78,  83, -33, -29,  44,  29, -45, -56,
  79,  79, -33, -29,  43,  34, -45, -56,
  79,  77, -34, -28,  43,  38, -44, -58,
  79,  75, -35, -28,  43,  43, -42, -57,
  79,  75, -35, -28,  43,  45, -42, -57,
  80,  76, -35, -28,  43,  45, -40, -57,
  83,  76, -36, -29,  40,  45, -39, -54,
  86,  77, -37, -29,  35,  44, -37, -54,
  88,  77, -37, -30,  30,  44, -37, -52,
  89,  77, -37, -30,  27,  44, -38, -52,
  88,  78, -37, -31,  26,  43, -38, -51,
  88,  78, -37, -31,  25,  43, -40, -48,
  87,  78, -34, -31,  25,  44, -44, -48,
  86,  78, -33, -32,  25,  44, -48, -47,
  85,  78, -31, -32,  27,  44, -52, -47,
  83,  78, -30, -33,  28,  44, -54, -45,
  80,  79, -29, -34,  32,  43, -56, -44,
  77,  79, -28, -34,  38,  43, -58, -44,
  76,  79, -28, -35,  42,  43, -57, -42,
  75,  79, -28, -35,  44,  43, -57, -42,
  76,  81, -28, -36,  45,  42, -57, -39,
  76,  84, -28, -36,  45,  39, -57, -39,
  77,  87, -29, -37,  44,  33, -54, -37,
  77,  88, -30, -37,  44,  29, -52, -37,
  77,  88, -30, -37,  44,  27, -52, -38,
  77,  88, -31, -37,  44,  26, -51, -40,
  78,  88, -31, -36,  43,  25, -51, -41,
};
const char bk[] PROGMEM = { 
45, 0, 0, 1,
  31,  37, -56, -65,   6,  -8,  -6,   8,
  28,  47, -58, -58,   7, -10,  -7,  11,
  26,  56, -59, -49,   8, -11,  -8,  11,
  23,  64, -60, -39,  10,  -9, -10,   9,
  20,  66, -61, -35,  12,  -7, -12,   7,
  18,  66, -62, -31,  13,  -4, -13,   4,
  15,  65, -63, -29,  15,   0, -15,   0,
  12,  62, -63, -27,  17,   4, -17,  -5,
   9,  59, -64, -27,  20,   7, -19,  -7,
   6,  57, -64, -29,  22,   7, -22,  -7,
   3,  56, -64, -32,  25,   6, -25,  -6,
   0,  54, -64, -34,  28,   5, -28,  -5,
  -3,  52, -64, -37,  31,   4, -31,  -4,
  -6,  51, -64, -39,  34,   4, -34,  -4,
 -10,  49, -63, -41,  38,   3, -38,  -3,
 -10,  47, -66, -43,  36,   3, -36,  -3,
 -10,  45, -68, -46,  33,   3, -33,  -3,
  -6,  43, -72, -48,  26,   3, -26,  -3,
  -3,  40, -75, -49,  21,   3, -21,  -4,
   1,  38, -75, -51,  16,   4, -16,  -4,
  12,  36, -75, -53,   6,   5,  -6,  -5,
  24,  33, -72, -55,  -2,   5,   2,  -5,
  34,  31, -67, -56,  -7,   6,   7,  -6,
  45,  28, -60, -58, -10,   7,  10,  -7,
  54,  26, -51, -59, -11,   8,  11,  -8,
  62,  23, -41, -60,  -9,  10,   9, -10,
  66,  20, -36, -61,  -8,  12,   7, -12,
  67,  18, -32, -62,  -5,  13,   5, -13,
  65,  15, -29, -63,  -1,  15,   1, -15,
  63,  12, -27, -63,   3,  17,  -4, -17,
  59,   9, -27, -64,   7,  20,  -7, -19,
  57,   6, -29, -64,   7,  22,  -7, -22,
  56,   3, -31, -64,   6,  25,  -6, -25,
  54,   0, -34, -64,   5,  28,  -5, -28,
  53,  -3, -36, -64,   4,  31,  -4, -31,
  51,  -6, -39, -64,   4,  34,  -4, -34,
  49, -10, -41, -63,   3,  38,  -4, -38,
  47, -10, -43, -66,   3,  36,  -3, -36,
  45, -10, -45, -68,   3,  33,  -3, -33,
  43,  -6, -47, -72,   3,  26,  -3, -26,
  41,  -3, -49, -75,   3,  21,  -3, -21,
  39,   1, -51, -75,   4,  16,  -4, -16,
  36,  12, -53, -75,   4,   6,  -4,  -6,
  34,  24, -54, -72,   5,  -2,  -5,   2,
  31,  34, -56, -67,   6,  -7,  -6,   7,
};
const char bkL[] PROGMEM = { 
37, 0, 0, 1,
  32,  37, -56, -62,   3,  -8,  -6,   2,
  31,  49, -58, -59,   3, -11,  -7,   3,
  30,  59, -59, -57,   3, -10,  -9,   4,
  29,  66, -61, -54,   4,  -8, -11,   5,
  28,  67, -62, -53,   5,  -5, -13,   4,
  27,  65, -63, -51,   5,   0, -15,   3,
  26,  61, -63, -51,   6,   5, -18,   2,
  25,  58, -64, -51,   6,   7, -20,   0,
  24,  56, -64, -51,   7,   6, -24,   0,
  23,  54, -64, -52,   7,   5, -27,   0,
  22,  52, -64, -53,   8,   4, -31,   0,
  21,  50, -63, -53,   9,   4, -35,   0,
  20,  48, -63, -54,   8,   3, -39,  -1,
  20,  46, -67, -55,   8,   3, -35,  -1,
  21,  43, -72, -56,   6,   3, -27,  -1,
  22,  40, -75, -56,   4,   3, -21,  -2,
  24,  38, -76, -57,   3,   4, -14,  -2,
  28,  35, -74, -58,   1,   5,  -3,  -2,
  32,  32, -69, -58,  -1,   6,   5,  -3,
  36,  29, -61, -59,  -3,   7,  10,  -3,
  40,  26, -51, -59,  -4,   8,  11,  -3,
  44,  23, -39, -60,  -5,  10,   9,  -4,
  45,  19, -34, -60,  -5,  12,   6,  -4,
  45,  16, -31, -61,  -4,  14,   3,  -5,
  45,  13, -27, -61,  -2,  17,  -4,  -5,
  44,   9, -27, -62,  -1,  20,  -7,  -6,
  43,   6, -29, -62,   0,  22,  -7,  -6,
  42,   2, -32, -63,   0,  26,  -6,  -7,
  41,  -2, -35, -63,   0,  30,  -5,  -8,
  40,  -5, -38, -64,   0,  34,  -4,  -8,
  39, -10, -41, -64,   1,  38,  -4,  -9,
  38, -10, -43, -66,   1,  36,  -3,  -8,
  37,  -8, -46, -66,   1,  30,  -3,  -7,
  36,  -4, -48, -67,   1,  23,  -3,  -5,
  35,  -1, -51, -67,   2,  18,  -4,  -3,
  34,  12, -53, -66,   2,   6,  -4,  -1,
  33,  26, -55, -64,   2,  -3,  -5,   1,
};
const char bkR[] PROGMEM = { 
37, 0, 0, 1,
  31,  34, -58, -65,   6,  -2,  -3,   8,
  28,  38, -59, -56,   7,  -4,  -3,  11,
  25,  42, -60, -46,   9,  -4,  -3,  10,
  22,  44, -60, -36,  11,  -5,  -4,   8,
  18,  46, -61, -32,  13,  -4,  -5,   5,
  15,  45, -61, -29,  15,  -3,  -5,   0,
  12,  45, -62, -27,  18,  -2,  -6,  -5,
   8,  43, -62, -28,  20,   0,  -6,  -7,
   5,  42, -63, -31,  24,   0,  -7,  -6,
   1,  42, -63, -34,  27,   0,  -7,  -5,
  -3,  41, -64, -37,  31,   0,  -8,  -4,
  -7,  40, -64, -40,  35,   1,  -9,  -4,
 -10,  39, -65, -42,  39,   1,  -8,  -3,
 -10,  38, -66, -45,  35,   1,  -8,  -3,
  -7,  37, -67, -47,  27,   1,  -6,  -3,
  -3,  36, -68, -49,  21,   1,  -4,  -4,
   3,  35, -67, -52,  14,   2,  -3,  -4,
  17,  34, -65, -54,   3,   2,   0,  -5,
  30,  33, -63, -56,  -5,   2,   1,  -6,
  43,  32, -61, -57, -10,   3,   3,  -7,
  54,  31, -58, -59, -11,   3,   4,  -8,
  64,  30, -55, -60,  -9,   4,   5, -10,
  66,  29, -54, -61,  -6,   4,   5, -12,
  66,  28, -52, -62,  -3,   5,   3, -14,
  63,  27, -51, -63,   3,   5,   2, -17,
  59,  26, -51, -64,   7,   6,   1, -19,
  57,  24, -51, -64,   7,   6,   0, -22,
  55,  23, -51, -64,   6,   7,   0, -26,
  53,  22, -52, -64,   5,   8,   0, -30,
  51,  21, -53, -64,   4,   8,   0, -34,
  49,  20, -54, -63,   3,   9,   0, -38,
  47,  20, -55, -66,   3,   8,  -1, -36,
  44,  20, -55, -71,   3,   7,  -1, -29,
  42,  21, -56, -74,   3,   5,  -1, -23,
  39,  22, -57, -75,   4,   4,  -2, -18,
  36,  26, -57, -75,   4,   1,  -2,  -6,
  33,  31, -58, -71,   5,  -1,  -2,   3,
};
const char crF[] PROGMEM = { 
34, 0, -5, 1,
  35,  37, -46, -53, -23, -32,  -3,  12,
  39,  31, -43, -56, -24, -29,  -3,  12,
  42,  25, -40, -61, -25, -26,  -4,  12,
  47,  19, -37, -64, -26, -23,  -5,  11,
  51,  13, -34, -68, -26, -19,  -7,  10,
  54,   7, -31, -71, -27, -15,  -8,   9,
  58,   1, -28, -74, -26,  -9, -10,   7,
  61,  -4, -25, -69, -26,   2, -11,  -7,
  64,   1, -21, -64, -26,  -1, -14,  -9,
  67,   4, -18, -63, -25,  -4, -16,  -7,
  75,   8, -16, -61, -29,  -7, -12,  -6,
  73,  12, -24, -59, -35, -10,  -1,  -5,
  68,  16, -29, -57, -36, -13,   3,  -4,
  62,  20, -34, -55, -36, -15,   5,  -3,
  56,  24, -39, -53, -36, -18,   7,  -3,
  50,  28, -43, -50, -35, -19,   9,  -3,
  44,  32, -48, -48, -34, -21,  11,  -3,
  37,  36, -53, -45, -32, -22,  12,  -3,
  31,  39, -56, -42, -29, -24,  12,  -4,
  25,  43, -61, -40, -26, -25,  12,  -4,
  19,  48, -64, -36, -23, -26,  11,  -6,
  13,  51, -68, -33, -19, -26,  10,  -7,
   7,  55, -71, -31, -15, -27,   9,  -8,
   1,  58, -74, -27,  -9, -26,   7, -10,
  -4,  62, -69, -24,   2, -26,  -7, -11,
   1,  65, -64, -21,  -1, -26,  -9, -14,
   4,  68, -63, -17,  -4, -25,  -7, -16,
   8,  76, -61, -17,  -7, -31,  -6,  -8,
  12,  72, -59, -25, -10, -35,  -5,   0,
  16,  67, -57, -30, -13, -36,  -4,   3,
  20,  61, -55, -35, -15, -36,  -3,   5,
  24,  55, -53, -39, -18, -36,  -3,   7,
  28,  49, -50, -44, -19, -35,  -3,   9,
  32,  42, -48, -49, -21, -33,  -3,  11,
};
const char crL[] PROGMEM = { 
26, 0, -5, 1,
  35,  37, -46, -49, -25, -32,  -3,   5,
  37,  29, -42, -51, -26, -29,  -4,   6,
  39,  21, -38, -53, -26, -24,  -5,   6,
  41,  13, -34, -55, -26, -19,  -7,   7,
  43,   5, -30, -57, -27, -13,  -9,   6,
  45,  -3, -26, -58, -28,  -2, -10,   4,
  47,   1, -21, -55, -28,  -1, -14,   1,
  48,   6, -17, -54, -28,  -5, -17,   1,
  50,  11, -23, -53, -32,  -9,  -2,   2,
  48,  16, -29, -52, -32, -13,   3,   2,
  45,  21, -36, -51, -31, -16,   6,   2,
  42,  27, -42, -50, -30, -19,   9,   1,
  39,  32, -48, -49, -30, -21,  11,   1,
  37,  37, -54, -47, -28, -23,  12,   1,
  34,  42, -59, -46, -27, -25,  12,   1,
  31,  48, -64, -45, -26, -26,  11,   1,
  29,  53, -69, -43, -25, -26,  10,   0,
  26,  57, -73, -42, -23, -26,   8,   0,
  22,  62, -69, -41, -19, -26,  -7,   0,
  24,  66, -64, -40, -19, -26,  -8,  -1,
  26,  74, -61, -38, -20, -27,  -7,   0,
  27,  72, -59, -41, -21, -35,  -5,   4,
  29,  65, -56, -43, -22, -36,  -4,   4,
  31,  57, -54, -45, -23, -36,  -2,   4,
  33,  49, -50, -47, -24, -35,  -3,   5,
  35,  40, -47, -49, -24, -33,  -3,   5,
};
const char crR[] PROGMEM = { 
26, 0, -5, 1,
  35,  37, -48, -53, -23, -29,   1,  12,
  40,  35, -47, -58, -24, -27,   1,  12,
  45,  32, -46, -63, -25, -27,   1,  12,
  51,  29, -44, -68, -26, -25,   0,  10,
  56,  26, -43, -72, -27, -24,   0,   8,
  60,  23, -42, -73, -26, -21,   0,  -1,
  64,  24, -40, -64, -26, -19,   0,  -9,
  68,  25, -38, -62, -24, -20,  -1,  -6,
  74,  27, -40, -60, -34, -21,   3,  -5,
  68,  29, -42, -57, -36, -22,   4,  -4,
  60,  31, -44, -54, -37, -23,   4,  -3,
  52,  32, -47, -51, -36, -23,   5,  -3,
  44,  34, -48, -48, -34, -24,   5,  -3,
  35,  36, -50, -44, -31, -25,   6,  -3,
  26,  38, -52, -40, -27, -26,   6,  -4,
  19,  40, -54, -36, -23, -26,   6,  -6,
  11,  41, -55, -33, -17, -27,   7,  -7,
   3,  43, -57, -28, -11, -27,   6,  -9,
  -4,  45, -57, -24,   2, -28,   2, -11,
   2,  47, -55, -20,  -2, -29,   1, -15,
   7,  50, -54, -14,  -6, -30,   1, -15,
  12,  49, -53, -25, -10, -32,   2,   0,
  17,  47, -52, -31, -13, -31,   2,   4,
  22,  44, -51, -38, -16, -30,   2,   7,
  28,  41, -50, -44, -19, -30,   1,   9,
  33,  38, -48, -50, -22, -29,   1,  11,
};
const char ly[] PROGMEM = { 
20, 0, -20, 1,
 115, 117, -46, -51,  50,  49, -37, -25,
 114, 117, -40, -57,  52,  49, -41, -23,
 114, 117, -34, -62,  52,  49, -46, -21,
 114, 117, -27, -66,  52,  49, -54, -21,
 114, 116, -22, -66,  54,  48, -59, -24,
 114, 116, -26, -65,  54,  48, -50, -29,
 115, 115, -29, -61,  52,  50, -44, -34,
 116, 115, -34, -59,  50,  50, -37, -32,
 116, 115, -41, -55,  50,  50, -32, -33,
 116, 115, -47, -50,  50,  50, -27, -35,
 117, 114, -53, -44,  49,  52, -24, -38,
 117, 114, -58, -38,  49,  52, -23, -43,
 117, 114, -62, -32,  49,  52, -21, -49,
 116, 114, -66, -24,  48,  54, -22, -58,
 116, 114, -66, -23,  48,  54, -25, -56,
 116, 115, -64, -26,  48,  52, -30, -48,
 115, 116, -60, -31,  50,  50, -34, -41,
 115, 116, -58, -37,  50,  50, -34, -35,
 115, 116, -54, -43,  50,  50, -34, -30,
 115, 116, -49, -49,  50,  50, -36, -26,
};
const char trF[] PROGMEM = { 
24, 0, 0, 1,
  43,  48, -51, -56,   7,  -2,  -8,   1,
  48,  31, -47, -65,   7,   2,  -7,  -8,
  52,  12, -42, -68,   8,  14,  -7, -25,
  55,  -2, -37, -64,  11,  27,  -7, -43,
  58,  -5, -31, -58,  14,  35,  -9, -55,
  60,   0, -25, -59,  18,  31, -11, -47,
  61,   7, -19, -61,  24,  24, -15, -36,
  61,  14, -12, -61,  30,  18, -20, -29,
  62,  21,  -8, -61,  35,  14, -22, -22,
  67,  27, -11, -60,  27,  11, -15, -17,
  68,  33, -22, -57,  15,   8,  -6, -13,
  61,  38, -41, -55,   2,   7,   1, -10,
  48,  43, -56, -51,  -2,   7,   1,  -8,
  31,  48, -65, -47,   2,   7,  -8,  -7,
  12,  52, -68, -42,  14,   8, -25,  -7,
  -2,  55, -64, -37,  27,  11, -43,  -7,
  -5,  58, -58, -31,  35,  14, -55,  -9,
   0,  60, -59, -25,  31,  18, -47, -11,
   7,  61, -61, -19,  24,  24, -36, -15,
  14,  61, -61, -12,  18,  30, -29, -20,
  21,  62, -61,  -8,  14,  35, -22, -22,
  27,  67, -60, -11,  11,  27, -17, -15,
  33,  68, -57, -22,   8,  15, -13,  -6,
  38,  61, -55, -41,   7,   2, -10,   1,
};
const char trL[] PROGMEM = { 
25, 0, 0, 1,
  33,  39, -41, -45,  10,  -2, -12,  -3,
  35,  24, -36, -49,  10,   4, -14,  -3,
  36,   8, -32, -52,   9,  15, -15,  -4,
  37,  -6, -27, -55,   9,  30, -16,  -5,
  39, -15, -23, -53,   9,  48, -18,  -9,
  40, -11, -17, -51,   8,  47, -21, -10,
  42,  -3, -12, -50,   8,  38, -25, -10,
  43,   3,  -7, -49,   8,  32, -29, -10,
  44,   9,   0, -48,   9,  27, -36,  -9,
  47,  14,  -2, -47,   6,  23, -27,  -9,
  46,  19, -10, -46,   4,  19, -15,  -9,
  43,  24, -27, -44,   3,  16,  -4,  -9,
  39,  29, -41, -43,   4,  14,   2,  -9,
  34,  33, -54, -42,   5,  14,   2,  -9,
  29,  37, -64, -40,   7,  13,  -2,  -9,
  24,  41, -69, -39,   9,  13, -12,  -9,
  21,  45, -66, -38,  13,  14, -24,  -9,
  20,  48, -58, -36,  16,  15, -34,  -9,
  22,  51, -57, -35,  15,  17, -29,  -9,
  24,  53, -56, -33,  14,  20, -24, -10,
  25,  54, -55, -31,  13,  23, -21, -10,
  26,  59, -53, -30,  13,  22, -18, -10,
  29,  65, -50, -33,  12,  10, -15,  -6,
  30,  60, -47, -37,  11,   2, -13,  -4,
  31,  50, -44, -41,  11,  -2, -13,  -3,
};
const char trR[] PROGMEM = { 
25, 0, 0, 1,
  31,  36, -43, -48,  14,   4,  -9,   3,
  35,  31, -41, -60,  14,   6,  -9,   1,
  39,  27, -40, -67,  13,   8,  -9,  -6,
  43,  23, -39, -69,  13,  10,  -9, -17,
  46,  20, -37, -61,  14,  15,  -9, -32,
  49,  21, -36, -57,  16,  15,  -9, -32,
  52,  22, -34, -56,  18,  15, -10, -27,
  54,  24, -32, -55,  21,  14, -10, -22,
  54,  26, -31, -54,  26,  13, -12, -19,
  62,  27, -31, -52,  16,  12,  -8, -16,
  65,  29, -33, -49,   6,  12,  -6, -14,
  57,  31, -39, -46,   0,  11,  -4, -13,
  46,  32, -43, -42,  -3,  10,  -3, -13,
  31,  34, -47, -38,   1,  10,  -3, -13,
  16,  35, -50, -34,   9,   9,  -4, -14,
  -1,  37, -54, -29,  24,   9,  -5, -15,
 -11,  38, -54, -25,  39,   9,  -7, -17,
 -14,  40, -51, -20,  50,   8, -11, -20,
  -7,  41, -51, -14,  42,   8, -10, -23,
  -1,  42, -49,  -9,  36,   8, -10, -28,
   6,  44, -49,  -3,  29,   8,  -9, -33,
  11,  46, -48,   0,  25,   8,  -9, -33,
  17,  47, -46,  -6,  21,   4,  -9, -19,
  22,  44, -45, -20,  18,   3,  -9,  -8,
  27,  40, -44, -36,  15,   3,  -9,   0,
};
const char vt[] PROGMEM = { 
17, 0, 0, 1,
  51,  39, -57, -43, -18,   7,  19,  -7,
  42,  39, -47, -43,   1,   7,   0,  -7,
  39,  39, -43, -43,   7,   7,  -7,  -7,
  39,  39, -43, -43,   7,   7,  -7,  -7,
  39,  42, -43, -47,   7,   0,  -7,   0,
  39,  51, -43, -57,   7, -19,  -7,  19,
  39,  59, -43, -67,   7, -36,  -7,  36,
  39,  59, -43, -66,   7, -35,  -7,  36,
  39,  51, -43, -57,   7, -18,  -7,  19,
  39,  42, -43, -47,   7,   1,  -7,   0,
  39,  39, -43, -43,   7,   7,  -7,  -7,
  39,  39, -43, -43,   7,   7,  -7,  -7,
  40,  39, -45, -43,   3,   7,  -3,  -7,
  50,  39, -56, -43, -16,   7,  16,  -7,
  58,  39, -65, -43, -33,   7,  33,  -7,
  60,  39, -68, -43, -38,   7,  38,  -7,
  52,  39, -59, -43, -21,   7,  22,  -7,
};
const char wkF[] PROGMEM = { 
43, 0, 0, 1,
  12,  59, -55, -49,  23,  24,  -2, -12,
  15,  59, -63, -47,  22,  27,  -8, -11,
  18,  59, -67, -45,  20,  30, -20, -11,
  21,  59, -66, -43,  18,  34, -33, -10,
  24,  59, -64, -40,  16,  38, -37, -10,
  27,  58, -62, -37,  15,  43, -41, -11,
  30,  57, -60, -35,  13,  47, -45, -12,
  32,  58, -57, -32,  13,  47, -48, -13,
  35,  60, -57, -29,  12,  45, -47, -14,
  38,  62, -58, -26,  12,  41, -42, -15,
  40,  65, -59, -23,  11,  36, -37, -16,
  43,  66, -59, -20,  11,  32, -33, -18,
  45,  67, -59, -17,  11,  18, -30, -20,
  47,  62, -59, -14,  11,   7, -26, -22,
  49,  53, -59, -12,  12,   1, -24, -24,
  51,  40, -58, -12,  13,   2, -21, -22,
  52,  26, -57, -12,  14,   7, -19, -20,
  54,  17, -55, -14,  15,  13, -18, -16,
  55,  15, -54, -16,  17,  16, -16, -15,
  57,  13, -53, -23,  18,  19, -15,  -9,
  58,  12, -51, -38,  21,  22, -13,  -2,
  58,  12, -49, -51,  23,  24, -12,  -1,
  59,  13, -47, -60,  26,  23, -11,  -6,
  59,  17, -45, -66,  29,  20, -11, -15,
  59,  20, -43, -66,  32,  18, -10, -33,
  59,  23, -41, -65,  37,  17, -10, -35,
  58,  26, -38, -63,  41,  15, -11, -40,
  57,  29, -35, -61,  46,  14, -12, -44,
  58,  32, -33, -58,  47,  13, -13, -47,
  59,  34, -30, -57,  47,  12, -14, -48,
  61,  37, -27, -58,  43,  12, -15, -43,
  64,  40, -24, -59,  38,  11, -16, -38,
  65,  42, -21, -59,  34,  11, -17, -34,
  67,  44, -18, -59,  23,  11, -19, -31,
  64,  46, -15, -59,  10,  11, -21, -27,
  56,  48, -12, -59,   3,  12, -23, -24,
  45,  50, -12, -58,   1,  13, -23, -22,
  31,  52, -12, -57,   5,  14, -20, -19,
  18,  53, -14, -56,  13,  15, -17, -17,
  16,  55, -16, -55,  15,  17, -15, -16,
  14,  57, -18, -53,  17,  17, -13, -15,
  12,  57, -33, -52,  21,  20,  -4, -14,
  12,  58, -47, -50,  23,  22,   0, -13,
};
const char wkL[] PROGMEM = { 
43, 0, 0, 1,
  40,  59, -55, -51,   8,  24,  -2,  -9,
  41,  59, -63, -50,   8,  27,  -8,  -9,
  42,  59, -67, -49,   7,  30, -20,  -8,
  42,  59, -66, -48,   7,  34, -33,  -8,
  43,  59, -64, -48,   7,  38, -37,  -8,
  44,  58, -62, -47,   7,  43, -41,  -8,
  45,  57, -60, -46,   8,  47, -45,  -8,
  46,  58, -57, -46,   8,  47, -48,  -8,
  46,  60, -57, -45,   8,  45, -47,  -8,
  47,  62, -58, -44,   8,  41, -42,  -8,
  48,  65, -59, -43,   8,  36, -37,  -8,
  48,  66, -59, -42,   8,  32, -33,  -8,
  49,  67, -59, -41,   8,  18, -30,  -8,
  50,  62, -59, -41,   9,   7, -26,  -8,
  50,  53, -59, -40,   9,   1, -24,  -9,
  51,  40, -58, -40,   9,   2, -21,  -8,
  52,  26, -57, -40,  10,   7, -19,  -7,
  52,  17, -55, -41,  10,  13, -18,  -6,
  53,  15, -54, -41,  10,  16, -16,  -6,
  53,  13, -53, -44,  11,  19, -15,  -4,
  54,  12, -51, -48,  11,  22, -13,  -4,
  54,  12, -49, -51,  12,  24, -12,  -5,
  55,  13, -47, -54,  12,  23, -11,  -6,
  55,  17, -45, -57,  13,  20, -11,  -8,
  56,  20, -43, -60,  13,  18, -10, -11,
  56,  23, -41, -59,  14,  17, -10, -13,
  57,  26, -38, -59,  14,  15, -11, -13,
  57,  29, -35, -59,  15,  14, -12, -14,
  58,  32, -33, -58,  15,  13, -13, -15,
  58,  34, -30, -57,  14,  12, -14, -15,
  59,  37, -27, -57,  14,  12, -15, -15,
  59,  40, -24, -57,  12,  11, -16, -14,
  59,  42, -21, -56,  12,  11, -17, -14,
  59,  44, -18, -56,  10,  11, -19, -13,
  56,  46, -15, -56,   7,  11, -21, -12,
  53,  48, -12, -55,   6,  12, -23, -12,
  50,  50, -12, -54,   5,  13, -23, -12,
  46,  52, -12, -54,   4,  14, -20, -11,
  42,  53, -14, -53,   5,  15, -17, -11,
  41,  55, -16, -53,   6,  17, -15, -10,
  41,  57, -18, -52,   6,  17, -13, -10,
  40,  57, -33, -52,   7,  20,  -4, -10,
  40,  58, -47, -51,   8,  22,   0,  -9,
};
const char wkR[] PROGMEM = { 
43, 0, 0, 1,
  12,  55, -53, -49,  23,  12,  -5, -12,
  15,  55, -55, -47,  22,  12,  -7, -11,
  18,  56, -58, -45,  20,  13,  -9, -11,
  21,  56, -60, -43,  18,  13, -11, -10,
  24,  57, -59, -40,  16,  14, -13, -10,
  27,  57, -59, -37,  15,  15, -14, -11,
  30,  58, -58, -35,  13,  15, -15, -12,
  32,  58, -58, -32,  13,  15, -15, -13,
  35,  58, -57, -29,  12,  14, -15, -14,
  38,  59, -57, -26,  12,  14, -15, -15,
  40,  59, -56, -23,  11,  12, -14, -16,
  43,  60, -56, -20,  11,  11, -13, -18,
  45,  58, -56, -17,  11,   9, -13, -20,
  47,  55, -55, -14,  11,   7, -13, -22,
  49,  52, -55, -12,  12,   5, -12, -24,
  51,  49, -54, -12,  13,   4, -11, -22,
  52,  45, -54, -12,  14,   4, -11, -20,
  54,  42, -53, -14,  15,   5, -10, -16,
  55,  41, -53, -16,  17,   6, -10, -15,
  57,  40, -52, -23,  18,   7, -10,  -9,
  58,  40, -51, -38,  21,   7,  -9,  -2,
  58,  40, -51, -51,  23,   8,  -9,  -1,
  59,  40, -50, -60,  26,   8,  -9,  -6,
  59,  41, -49, -66,  29,   8,  -9, -15,
  59,  42, -49, -66,  32,   7,  -8, -33,
  59,  43, -48, -65,  37,   7,  -8, -35,
  58,  44, -47, -63,  41,   7,  -8, -40,
  57,  44, -47, -61,  46,   8,  -8, -44,
  58,  45, -46, -58,  47,   8,  -8, -47,
  59,  46, -45, -57,  47,   8,  -8, -48,
  61,  47, -44, -58,  43,   8,  -8, -43,
  64,  47, -43, -59,  38,   8,  -8, -38,
  65,  48, -43, -59,  34,   8,  -8, -34,
  67,  49, -42, -59,  23,   8,  -8, -31,
  64,  49, -41, -59,  10,   8,  -8, -27,
  56,  50, -40, -59,   3,   9,  -9, -24,
  45,  51, -40, -58,   1,   9,  -8, -22,
  31,  51, -40, -57,   5,  10,  -7, -19,
  18,  52, -40, -56,  13,  10,  -7, -17,
  16,  53, -41, -55,  15,  10,  -6, -16,
  14,  53, -42, -53,  17,  11,  -5, -15,
  12,  54, -46, -52,  21,  11,  -4, -14,
  12,  54, -50, -50,  23,  11,  -5, -13,
};

const char balance[] PROGMEM = { 
1, 0, 0, 1,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30, -30, -30,  30,  30, -30, -30,};
const char buttUp[] PROGMEM = { 
1, 0, 15, 1,
   20,  40,   0,   0,   5,   5,   3,   3,  90,  90, -45, -45, -60, -60,  -5,  -5,};
const char calib[] PROGMEM = { 
1, 0, 0, 1,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,};
const char dropped[] PROGMEM = { 
1, 0, 75, 1,
    0,  30,   0,   0,  -5,  -5,  15,  15, -75, -75, -60, -60,  60,  60,  30,  30,};
const char hs[] PROGMEM = { 
1, 0, -30, 1,
    0, -20, -60,   0,  -5,  -5,  20,  20,  30,  30, -75, -75,  60,  60,  45,  45,};
const char hs1[] PROGMEM = { 
1, 0, 0, 1,
    0, -20, -60,   0,  -5,  -5,  20,  20,  50,  50, -10, -10,  70,  70, -45, -45,};
const char hs2[] PROGMEM = { 
1, 0, 75, 1,
    0, -20, -60,   0,  -5,  -5,  20,  20,   0,   0,  75,  75,  60,  60, -75, -75,};
const char lifted[] PROGMEM = { 
1, 0, -75, 1,
    0, -70,   0,   0,   0,   0,   0,   0,  55,  55,  20,  20,  45,  45,   0,   0,};
const char lu[] PROGMEM = { 
1, -30, 15, 1,
  -45,  60, -60,   0,   5,   5,   3,   3, -60,  70, -45, -35,  15, -60,  10, -65,};
const char rest[] PROGMEM = { 
1, 0, 0, 1,
  -30, -80, -45,   0,  -3,  -3,   3,   3,  60,  60, -60, -60, -45, -45,  45,  45,};
const char sit[] PROGMEM = { 
1, 0, -30, 1,
    0, -20, -60,   0,  -5,  -5,  20,  20,  30,  30, -90, -90,  60,  60,  45,  45,};
const char sleep[] PROGMEM = { 
1, 0, 0, 1,
  -10,-100,   0,   0,  -5,  -5,   3,   3,  80,  80, -80, -80, -55, -55,  55,  55,};
const char str[] PROGMEM = { 
1, 0, 45, 1,
    0,  30,   0,   0,  -5,  -5,   0,   0, -75, -75, -45, -45,  60,  60, -45, -45,};
const char zero[] PROGMEM = { 
1, 0, 0, 1,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,};

const char hi[] PROGMEM = { 
-3, 0, -30, 1,
 1, 2, 3, 
    0, -20, -60,   0,   0,   0,   0,   0,  30,  30, -90, -90,  60,  60,  45,  45,     5, 1,
   35, -15, -60,   0,  -3,  -3,   3,   3, -75,  30, -85, -70,  40,  65,  60,   0,    6, 0,
   40, -10, -35,   0,  -3,  -3,   3,   3, -60,  30, -80, -70,  60,  65,  60,   0,    6, 0,
};
const char pee[] PROGMEM = { 
-4, 0, 10, 1,
 2, 3, 2, 
   30,  20,   0,   0,  15, -10,  60, -10,  40,  40,  85, -45,  10,  60,  15, -45,    6, 0,
   45,  20, -45,   0,  15, -10,  60, -10,  60,  53,  75, -60, -30,  40,   0, -21,    2,10,
   30,  20, -30,   0,  15, -10,  60, -10,  40,  40,  85, -45,  10,  50,   0, -45,    8, 0,
   40,  25,   0,   0,  15, -10,  60, -10,  40,  40,  70, -45,  10,  50, -30, -45,    8, 0,
};
const char pu[] PROGMEM = { 
-5, 0, -15, 1,
 1, 2, 3, 
   30,  30,   0,   0,   0,   0,   0,   0,  60,  60,  70,  70,  15,  15, -70, -70,    6, 0,
    0, -40,   0,   0,   0,   0,   0,   0,  30,  30,  95,  95,  60,  60, -70, -70,    6, 1,
    5,   5,   0,   0,   0,   0,   0,   0,  75,  75,  55,  55, -50, -50, -75, -75,    8, 0,
    5,   5,   0,   0,   0,   0,   0,   0,  75, -70,  55,  55, -50,  70, -75, -75,    8, 0,
   60, -30, -45,   0,   0,   0,   0,   0,  70, -70,  55,   0, -30, -45, -75, -45,    8, 1,
};
const char rc[] PROGMEM = { 
-3, 0, 0, 2,
 0, 0, 0, 
    0,   0,   0,   0,   0,   0,   0,   0, -88, -43,  67,  87,  42, -35,  42,  42,    8, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -83, -88,  87,  42,  42,  42,  42, -40,    8, 0,
   -8, -20, -11,   0,  -1,  -1,   0,   0,  18,  18,  18,  18, -14, -14, -14, -14,    5, 0,
};
#if !defined(MAIN_SKETCH) || !defined(I2C_EEPROM)
    //if it's not the main sketch to save data or there's no external EEPROM, 
    //the list should always contain all information.
  const char* skillNameWithType[]={"bdI","biI","bkI","bkLI","bkRI","crFI","crLI","crRI","lyI","trFI","trLI","trRI","vtI","wkFI","wkLI","wkRI","balanceI","buttUpI","calibI","droppedI","hsN","hs1N","hs2N","liftedI","luI","restI","sitI","sleepI","strI","zeroI","hiI","peeI","puI","rcI",};
  const char* progmemPointer[] = {bd, bi, bk, bkL, bkR, crF, crL, crR, ly, trF, trL, trR, vt, wkF, wkL, wkR, balance, buttUp, calib, dropped, hs, hs1, hs2, lifted, lu, rest, sit, sleep, str, zero, hi, pee, pu, rc, };
#else //only need to know the pointers to newbilities, because the intuitions have been saved onto external EEPROM,
  //while the newbilities on progmem are assigned to new addresses
  const char* progmemPointer[] = {hs, hs1, hs2, };
#endif
//the total byte of instincts is 4682
//the maximal array size is 365 bytes of bk. 
//Make sure to leave enough memory for SRAM to work properly. Any single skill should be smaller than 400 bytes for safety.
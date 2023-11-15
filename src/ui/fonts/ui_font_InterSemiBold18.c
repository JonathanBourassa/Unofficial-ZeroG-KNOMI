/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: --bpp 1 --size 18 --font C:\Users\Administrator\Desktop\KnomiV2\lvgl_design\assets\Inter-SemiBold.otf -o C:\Users\Administrator\Desktop\KnomiV2\lvgl_design\assets\ui_font_InterSemiBold18.c --format lvgl -r 0x20-0x7f --symbols ℃ --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_INTERSEMIBOLD18
#define UI_FONT_INTERSEMIBOLD18 1
#endif

#if UI_FONT_INTERSEMIBOLD18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xdb, 0x6d, 0xb6, 0xc3, 0xfe,

    /* U+0022 "\"" */
    0xde, 0xf7, 0xbd, 0x80,

    /* U+0023 "#" */
    0x8, 0xc3, 0x18, 0x63, 0x3f, 0xf7, 0xfe, 0x33,
    0x4, 0x61, 0x8c, 0xff, 0xff, 0xf8, 0xc4, 0x19,
    0x82, 0x30,

    /* U+0024 "$" */
    0x4, 0x1, 0x1, 0xf0, 0xff, 0x64, 0xd9, 0x7,
    0x40, 0xf8, 0x1f, 0x81, 0xf0, 0x4f, 0x13, 0xe5,
    0xdf, 0xe3, 0xf0, 0x10,

    /* U+0025 "%" */
    0x78, 0x6f, 0xcc, 0xcc, 0x8c, 0xd8, 0xff, 0x7,
    0xa0, 0x7, 0xe0, 0xff, 0xf, 0x31, 0xb3, 0x33,
    0x33, 0x3f, 0x61, 0xe0,

    /* U+0026 "&" */
    0x1e, 0xf, 0xe1, 0x8c, 0x31, 0x86, 0x70, 0x7c,
    0xe, 0x3, 0xe6, 0xce, 0xd8, 0xf3, 0x8e, 0x3f,
    0xe3, 0xec,

    /* U+0027 "'" */
    0xff, 0xc0,

    /* U+0028 "(" */
    0x36, 0x66, 0xcc, 0xcc, 0xcc, 0xcc, 0x66, 0x63,

    /* U+0029 ")" */
    0xc6, 0x66, 0x33, 0x33, 0x33, 0x33, 0x66, 0x6c,

    /* U+002A "*" */
    0x18, 0x5a, 0xff, 0x3c, 0xff, 0x5a, 0x18,

    /* U+002B "+" */
    0x18, 0xc, 0x6, 0x3, 0xf, 0xff, 0xfc, 0x60,
    0x30, 0x18, 0x0,

    /* U+002C "," */
    0x6d, 0xac,

    /* U+002D "-" */
    0xff, 0xf0,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0xc, 0x18, 0x30, 0x61, 0x83, 0x6, 0xc, 0x30,
    0x60, 0xc3, 0x86, 0xc, 0x18, 0x60,

    /* U+0030 "0" */
    0x1e, 0x1f, 0xc6, 0x1b, 0x87, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf8, 0x76, 0x19, 0xfe, 0x1e,
    0x0,

    /* U+0031 "1" */
    0x3b, 0xff, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0x80,

    /* U+0032 "2" */
    0x3e, 0x3f, 0xb8, 0xf8, 0x30, 0x18, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0x1c, 0x1f, 0xff, 0xf8,

    /* U+0033 "3" */
    0x3e, 0x3f, 0xb8, 0xe0, 0x30, 0x38, 0xf8, 0x7c,
    0x7, 0x1, 0xe0, 0xf8, 0xef, 0xe3, 0xe0,

    /* U+0034 "4" */
    0x7, 0x3, 0xc0, 0xf0, 0x7c, 0x1b, 0xc, 0xc3,
    0x31, 0x8c, 0xe3, 0x3f, 0xff, 0xfc, 0xc, 0x3,
    0x0,

    /* U+0035 "5" */
    0x7f, 0x3f, 0x98, 0xc, 0xf, 0xe7, 0xfb, 0x8e,
    0x3, 0x1, 0xe0, 0xf8, 0xef, 0xe3, 0xe0,

    /* U+0036 "6" */
    0x1f, 0xf, 0xe7, 0x1f, 0x80, 0xcf, 0x3f, 0xee,
    0x1f, 0x3, 0xc0, 0xf0, 0x36, 0x1d, 0xfe, 0x1f,
    0x0,

    /* U+0037 "7" */
    0xff, 0xff, 0xc0, 0xe0, 0x60, 0x70, 0x30, 0x38,
    0x18, 0x1c, 0xc, 0xe, 0x6, 0x7, 0x0,

    /* U+0038 "8" */
    0x1e, 0xf, 0xc6, 0x19, 0x86, 0x61, 0x8f, 0xc7,
    0xfb, 0x86, 0xc0, 0xf0, 0x3e, 0x1d, 0xfe, 0x3f,
    0x0,

    /* U+0039 "9" */
    0x3e, 0x1f, 0xee, 0x1b, 0x3, 0xc0, 0xf8, 0x77,
    0xfc, 0xf3, 0x0, 0xf0, 0x6e, 0x39, 0xfc, 0x3e,
    0x0,

    /* U+003A ":" */
    0xff, 0x80, 0x7, 0xfc,

    /* U+003B ";" */
    0xff, 0x80, 0x0, 0xfb, 0x68,

    /* U+003C "<" */
    0x1, 0x83, 0xc7, 0xcf, 0xe, 0x7, 0x80, 0xf0,
    0x1f, 0x3, 0x80, 0x40,

    /* U+003D "=" */
    0xff, 0xff, 0xc0, 0x0, 0xf, 0xff, 0xfc,

    /* U+003E ">" */
    0x80, 0x78, 0x1f, 0x3, 0xe0, 0x78, 0x7c, 0xf9,
    0xf0, 0xe0, 0x40, 0x0,

    /* U+003F "?" */
    0x3c, 0x7e, 0xe7, 0xc3, 0x3, 0xe, 0x1c, 0x18,
    0x18, 0x0, 0x38, 0x38, 0x38,

    /* U+0040 "@" */
    0x7, 0xe0, 0x1f, 0xf8, 0x38, 0x1c, 0x70, 0xe,
    0x63, 0xf6, 0xe7, 0xf3, 0xce, 0x33, 0xcc, 0x33,
    0xcc, 0x33, 0xcc, 0x33, 0xce, 0x77, 0xc7, 0xfe,
    0x63, 0x9c, 0x70, 0x0, 0x38, 0x10, 0x1f, 0xf0,
    0x7, 0xe0,

    /* U+0041 "A" */
    0x7, 0x0, 0x3c, 0x3, 0xe0, 0x1b, 0x1, 0xdc,
    0xe, 0xe0, 0x63, 0x7, 0x1c, 0x3f, 0xe1, 0xff,
    0x1c, 0x1c, 0xe0, 0x66, 0x3, 0x0,

    /* U+0042 "B" */
    0xfe, 0x3f, 0xec, 0x3b, 0x6, 0xc3, 0xbf, 0xcf,
    0xfb, 0x7, 0xc0, 0xf0, 0x3c, 0x1f, 0xfe, 0xff,
    0x0,

    /* U+0043 "C" */
    0x1f, 0x7, 0xf9, 0xc7, 0xf0, 0x7c, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0xc, 0x1d, 0xc7, 0x1f,
    0xe1, 0xf0,

    /* U+0044 "D" */
    0xfe, 0x1f, 0xf3, 0x7, 0x60, 0x6c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0x1b, 0x7, 0x7f,
    0xcf, 0xe0,

    /* U+0045 "E" */
    0xff, 0xff, 0xf0, 0x18, 0xc, 0x7, 0xfb, 0xfd,
    0x80, 0xc0, 0x60, 0x30, 0x1f, 0xff, 0xf8,

    /* U+0046 "F" */
    0xff, 0xff, 0xf0, 0x18, 0xc, 0x7, 0xfb, 0xfd,
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x0,

    /* U+0047 "G" */
    0x1f, 0x7, 0xf9, 0xc3, 0x30, 0x7c, 0x1, 0x80,
    0x30, 0xfe, 0x1f, 0xc0, 0x7c, 0xd, 0xc3, 0x1f,
    0xe1, 0xf0,

    /* U+0048 "H" */
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3c, 0x7, 0xff,
    0xff, 0xfe, 0x3, 0xc0, 0x78, 0xf, 0x1, 0xe0,
    0x3c, 0x6,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xc0,

    /* U+004A "J" */
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
    0x3, 0xc3, 0xc7, 0x7e, 0x3c,

    /* U+004B "K" */
    0xc1, 0xf0, 0xec, 0x73, 0x38, 0xdc, 0x3e, 0xf,
    0xc3, 0xb0, 0xee, 0x31, 0xcc, 0x33, 0xe, 0xc1,
    0xc0,

    /* U+004C "L" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0xc0, 0xc0, 0xc0, 0xff, 0xff,

    /* U+004D "M" */
    0xe0, 0x1f, 0x80, 0x7f, 0x3, 0xfc, 0xf, 0xf8,
    0x7f, 0x61, 0xbd, 0xce, 0xf3, 0x33, 0xce, 0xcf,
    0x1f, 0x3c, 0x78, 0xf1, 0xe3, 0xc3, 0xc,

    /* U+004E "N" */
    0xc0, 0x7c, 0xf, 0xc1, 0xfc, 0x3f, 0x87, 0xb8,
    0xf3, 0x9e, 0x3b, 0xc3, 0xf8, 0x7f, 0x7, 0xe0,
    0x7c, 0x6,

    /* U+004F "O" */
    0x1f, 0x3, 0xfc, 0x70, 0xe6, 0x6, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x36, 0x6, 0x70,
    0xe3, 0xfc, 0x1f, 0x80,

    /* U+0050 "P" */
    0xfe, 0x7f, 0xb0, 0xf8, 0x3c, 0x1e, 0xf, 0xf,
    0xfe, 0xfe, 0x60, 0x30, 0x18, 0xc, 0x0,

    /* U+0051 "Q" */
    0x1f, 0x3, 0xfc, 0x70, 0xe6, 0x6, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x36, 0x37, 0x71,
    0xe3, 0xfc, 0xf, 0xe0, 0x6,

    /* U+0052 "R" */
    0xfe, 0x7f, 0xb0, 0xf8, 0x3c, 0x1e, 0x1f, 0xfd,
    0xfc, 0xc6, 0x63, 0xb0, 0xd8, 0x7c, 0x18,

    /* U+0053 "S" */
    0x1f, 0xf, 0xe7, 0x1d, 0x83, 0x60, 0xf, 0x1,
    0xf0, 0xe, 0x0, 0xf0, 0x3e, 0x1d, 0xfe, 0x3f,
    0x0,

    /* U+0054 "T" */
    0xff, 0xff, 0xf0, 0xc0, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x0,

    /* U+0055 "U" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x3e, 0x1d, 0xfe, 0x3e,
    0x0,

    /* U+0056 "V" */
    0x60, 0x33, 0x83, 0x9c, 0x1c, 0x60, 0xc3, 0x8e,
    0x1c, 0x70, 0x63, 0x3, 0xb8, 0x1d, 0xc0, 0x6c,
    0x3, 0xe0, 0x1f, 0x0, 0x70, 0x0,

    /* U+0057 "W" */
    0xe0, 0xc1, 0xd8, 0x38, 0x67, 0x1e, 0x19, 0xc7,
    0x8e, 0x31, 0xe3, 0xc, 0xec, 0xc3, 0xb3, 0x30,
    0xec, 0xdc, 0x1b, 0x36, 0x7, 0x87, 0x81, 0xe1,
    0xe0, 0x38, 0x78, 0xe, 0xc, 0x0,

    /* U+0058 "X" */
    0x70, 0x77, 0xe, 0x38, 0xc1, 0x9c, 0x1f, 0x80,
    0xf0, 0x7, 0x0, 0xf0, 0x1f, 0x81, 0x9c, 0x38,
    0xc7, 0xe, 0x70, 0x70,

    /* U+0059 "Y" */
    0x60, 0x67, 0xe, 0x30, 0xc3, 0x9c, 0x19, 0x81,
    0xf8, 0xf, 0x0, 0x60, 0x6, 0x0, 0x60, 0x6,
    0x0, 0x60, 0x6, 0x0,

    /* U+005A "Z" */
    0xff, 0xff, 0xf0, 0x18, 0xe, 0x7, 0x3, 0x80,
    0xc0, 0x70, 0x38, 0x1c, 0x6, 0x3, 0xff, 0xff,
    0xc0,

    /* U+005B "[" */
    0xff, 0xf1, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8c,
    0x63, 0x1f, 0xf8,

    /* U+005C "\\" */
    0xc0, 0xc1, 0x83, 0x7, 0x6, 0xc, 0x18, 0x18,
    0x30, 0x60, 0xc0, 0xc1, 0x83, 0x6,

    /* U+005D "]" */
    0xff, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0x8c, 0x7f, 0xf8,

    /* U+005E "^" */
    0x30, 0x71, 0xa3, 0x6c, 0xd8, 0xc0,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0060 "`" */
    0xcd, 0x80,

    /* U+0061 "a" */
    0x3c, 0x7e, 0xe3, 0x3, 0x3f, 0xfb, 0xc3, 0xc7,
    0xff, 0x7b,

    /* U+0062 "b" */
    0xc0, 0x60, 0x30, 0x1b, 0xcf, 0xf7, 0x1f, 0x7,
    0x83, 0xc1, 0xe0, 0xf8, 0xff, 0xed, 0xe0,

    /* U+0063 "c" */
    0x3e, 0x3f, 0xb8, 0xd8, 0x7c, 0x6, 0x3, 0xf,
    0xc6, 0x7f, 0x1f, 0x0,

    /* U+0064 "d" */
    0x1, 0x80, 0xc0, 0x67, 0xb7, 0xff, 0x1f, 0x7,
    0x83, 0xc1, 0xe0, 0xf8, 0xef, 0xf3, 0xd8,

    /* U+0065 "e" */
    0x3e, 0x3f, 0xb8, 0xd8, 0x3f, 0xff, 0xff, 0x1,
    0xc3, 0x7f, 0x1f, 0x0,

    /* U+0066 "f" */
    0x0, 0xf3, 0xcc, 0xff, 0xf3, 0xc, 0x30, 0xc3,
    0xc, 0x30, 0xc0,

    /* U+0067 "g" */
    0x3d, 0xbf, 0xf8, 0xf8, 0x3c, 0x1e, 0xf, 0x7,
    0xc7, 0x7f, 0x9e, 0xc0, 0x7c, 0x77, 0xf1, 0xf0,

    /* U+0068 "h" */
    0xc0, 0x60, 0x30, 0x1b, 0xcf, 0xf7, 0x1f, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x18,

    /* U+0069 "i" */
    0x30, 0xff, 0xff, 0xf0,

    /* U+006A "j" */
    0x3, 0x0, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0xfe,

    /* U+006B "k" */
    0xc0, 0x60, 0x30, 0x18, 0xec, 0xe6, 0xe3, 0xe1,
    0xf0, 0xf8, 0x6e, 0x33, 0x98, 0xec, 0x70,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xc0,

    /* U+006D "m" */
    0xde, 0x7b, 0xff, 0xfe, 0x79, 0xf0, 0xc3, 0xc3,
    0xf, 0xc, 0x3c, 0x30, 0xf0, 0xc3, 0xc3, 0xf,
    0xc, 0x30,

    /* U+006E "n" */
    0xde, 0xfe, 0xe7, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3,

    /* U+006F "o" */
    0x3e, 0x3f, 0xb8, 0xd8, 0x3c, 0x1e, 0xf, 0x7,
    0xc6, 0x7f, 0x1f, 0x0,

    /* U+0070 "p" */
    0xde, 0x7f, 0xb8, 0xf8, 0x3c, 0x1e, 0xf, 0x7,
    0xc7, 0xff, 0x6f, 0x30, 0x18, 0xc, 0x6, 0x0,

    /* U+0071 "q" */
    0x3d, 0xbf, 0xf8, 0xf8, 0x3c, 0x1e, 0xf, 0x7,
    0xc7, 0x7f, 0x9e, 0xc0, 0x60, 0x30, 0x18, 0xc,

    /* U+0072 "r" */
    0xdf, 0xfe, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0x0,

    /* U+0073 "s" */
    0x3c, 0xff, 0xc3, 0xc0, 0x78, 0x1e, 0x3, 0xc3,
    0xff, 0x3c,

    /* U+0074 "t" */
    0x30, 0xc3, 0x3f, 0xfc, 0xc3, 0xc, 0x30, 0xc3,
    0xf, 0x1c,

    /* U+0075 "u" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xe7,
    0xff, 0x7b,

    /* U+0076 "v" */
    0x61, 0xd8, 0x67, 0x18, 0xce, 0x33, 0xe, 0xc1,
    0xb0, 0x78, 0x1e, 0x3, 0x80,

    /* U+0077 "w" */
    0x63, 0x8e, 0xc7, 0x19, 0x8e, 0x33, 0xb6, 0xe3,
    0x6d, 0x86, 0xdb, 0xd, 0xb6, 0xe, 0x3c, 0x1c,
    0x70, 0x38, 0xe0,

    /* U+0078 "x" */
    0xc3, 0x73, 0x99, 0x87, 0x83, 0xc1, 0xe0, 0xf0,
    0xcc, 0xe7, 0x61, 0x80,

    /* U+0079 "y" */
    0x61, 0xd8, 0x67, 0x18, 0xce, 0x33, 0xc, 0xc1,
    0xb0, 0x78, 0x1e, 0x3, 0x80, 0xc0, 0x70, 0x7c,
    0x1e, 0x0,

    /* U+007A "z" */
    0xff, 0xff, 0x6, 0xe, 0x1c, 0x38, 0x30, 0x60,
    0xff, 0xff,

    /* U+007B "{" */
    0x1c, 0xf3, 0xc, 0x30, 0xc3, 0x38, 0xe0, 0xc3,
    0xc, 0x30, 0xc3, 0xf, 0x1c,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xe3, 0xc3, 0xc, 0x30, 0xc3, 0x7, 0x1c, 0xc3,
    0xc, 0x30, 0xc3, 0x3c, 0xe0,

    /* U+007E "~" */
    0x71, 0xfc, 0xf3, 0xf8, 0xe0,

    /* U+2103 "℃" */
    0x38, 0xf, 0x8f, 0xc1, 0xfe, 0xc6, 0x38, 0xec,
    0x67, 0x7, 0xc6, 0x60, 0x37, 0x86, 0x0, 0x0,
    0x60, 0x0, 0x6, 0x0, 0x0, 0x60, 0x0, 0x7,
    0x3, 0x0, 0x38, 0x70, 0x1, 0xfe, 0x0, 0xf,
    0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 71, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 89, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 114, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 10, .adv_w = 185, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 28, .adv_w = 187, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 48, .adv_w = 243, .box_w = 12, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 68, .adv_w = 191, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 86, .adv_w = 61, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 88, .adv_w = 113, .box_w = 4, .box_h = 16, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 96, .adv_w = 113, .box_w = 4, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 104, .adv_w = 156, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 111, .adv_w = 194, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 122, .adv_w = 85, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 124, .adv_w = 134, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 126, .adv_w = 84, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 109, .box_w = 7, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 142, .adv_w = 192, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 138, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 179, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 183, .adv_w = 188, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 198, .adv_w = 192, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 215, .adv_w = 182, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 187, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 169, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 186, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 279, .adv_w = 187, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 84, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 300, .adv_w = 85, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 305, .adv_w = 194, .box_w = 9, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 317, .adv_w = 194, .box_w = 9, .box_h = 6, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 324, .adv_w = 194, .box_w = 9, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 157, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 288, .box_w = 16, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 383, .adv_w = 208, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 189, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 422, .adv_w = 214, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 209, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 458, .adv_w = 175, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 473, .adv_w = 169, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 488, .adv_w = 217, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 506, .adv_w = 214, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 524, .adv_w = 79, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 528, .adv_w = 161, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 195, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 558, .adv_w = 163, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 571, .adv_w = 261, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 594, .adv_w = 213, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 612, .adv_w = 223, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 632, .adv_w = 185, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 647, .adv_w = 223, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 668, .adv_w = 187, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 683, .adv_w = 187, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 700, .adv_w = 190, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 211, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 734, .adv_w = 208, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 756, .adv_w = 290, .box_w = 18, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 786, .adv_w = 199, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 806, .adv_w = 203, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 826, .adv_w = 188, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 843, .adv_w = 113, .box_w = 5, .box_h = 17, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 854, .adv_w = 109, .box_w = 7, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 868, .adv_w = 113, .box_w = 5, .box_h = 17, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 879, .adv_w = 139, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 885, .adv_w = 135, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 887, .adv_w = 143, .box_w = 3, .box_h = 3, .ofs_x = 3, .ofs_y = 11},
    {.bitmap_index = 889, .adv_w = 165, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 899, .adv_w = 182, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 914, .adv_w = 166, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 926, .adv_w = 182, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 941, .adv_w = 171, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 953, .adv_w = 109, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 964, .adv_w = 180, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 980, .adv_w = 177, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 995, .adv_w = 75, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 999, .adv_w = 75, .box_w = 4, .box_h = 18, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 1008, .adv_w = 164, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1023, .adv_w = 75, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1027, .adv_w = 259, .box_w = 14, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1045, .adv_w = 176, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1055, .adv_w = 175, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1067, .adv_w = 180, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1083, .adv_w = 180, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1099, .adv_w = 114, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1107, .adv_w = 158, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1117, .adv_w = 109, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1127, .adv_w = 175, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1137, .adv_w = 166, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1150, .adv_w = 241, .box_w = 15, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1169, .adv_w = 162, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1181, .adv_w = 166, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1199, .adv_w = 162, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1209, .adv_w = 113, .box_w = 6, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1222, .adv_w = 103, .box_w = 2, .box_h = 22, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 1228, .adv_w = 113, .box_w = 6, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1241, .adv_w = 194, .box_w = 9, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1246, .adv_w = 341, .box_w = 20, .box_h = 13, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 8451, .range_length = 1, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    3, 7,
    3, 13,
    3, 15,
    3, 21,
    3, 34,
    3, 43,
    5, 34,
    7, 3,
    7, 8,
    7, 53,
    7, 55,
    7, 56,
    7, 58,
    7, 61,
    7, 87,
    7, 88,
    7, 90,
    8, 7,
    8, 13,
    8, 15,
    8, 21,
    8, 34,
    8, 43,
    9, 68,
    9, 69,
    9, 70,
    9, 72,
    9, 75,
    9, 80,
    9, 82,
    11, 7,
    11, 13,
    11, 15,
    11, 21,
    11, 34,
    11, 43,
    11, 64,
    12, 19,
    12, 20,
    12, 24,
    12, 53,
    12, 55,
    12, 56,
    12, 57,
    12, 58,
    12, 61,
    12, 89,
    13, 1,
    13, 2,
    13, 3,
    13, 8,
    13, 17,
    13, 18,
    13, 20,
    13, 22,
    13, 23,
    13, 24,
    13, 25,
    13, 26,
    13, 32,
    13, 53,
    13, 58,
    13, 65,
    14, 19,
    14, 20,
    14, 24,
    14, 53,
    14, 55,
    14, 56,
    14, 57,
    14, 58,
    14, 61,
    14, 89,
    15, 1,
    15, 2,
    15, 3,
    15, 8,
    15, 17,
    15, 18,
    15, 20,
    15, 22,
    15, 23,
    15, 24,
    15, 25,
    15, 26,
    15, 32,
    15, 53,
    15, 58,
    15, 65,
    16, 13,
    16, 15,
    16, 43,
    16, 55,
    16, 56,
    16, 61,
    17, 13,
    17, 15,
    17, 24,
    17, 58,
    17, 64,
    18, 13,
    18, 15,
    19, 21,
    20, 13,
    20, 15,
    21, 13,
    21, 15,
    21, 18,
    22, 13,
    22, 15,
    23, 13,
    23, 15,
    23, 64,
    24, 4,
    24, 7,
    24, 13,
    24, 15,
    24, 17,
    24, 20,
    24, 21,
    24, 22,
    24, 23,
    24, 24,
    24, 25,
    24, 26,
    24, 27,
    24, 28,
    24, 29,
    24, 34,
    24, 43,
    24, 64,
    24, 66,
    24, 68,
    24, 69,
    24, 70,
    24, 72,
    24, 80,
    24, 82,
    24, 84,
    25, 13,
    25, 15,
    26, 13,
    26, 15,
    26, 24,
    26, 58,
    26, 64,
    27, 53,
    27, 55,
    27, 61,
    28, 53,
    28, 55,
    28, 61,
    30, 34,
    30, 55,
    30, 56,
    30, 57,
    30, 58,
    30, 61,
    30, 87,
    30, 89,
    30, 90,
    31, 24,
    31, 34,
    31, 53,
    31, 55,
    31, 56,
    31, 57,
    31, 58,
    31, 59,
    31, 61,
    32, 34,
    34, 3,
    34, 5,
    34, 8,
    34, 11,
    34, 18,
    34, 29,
    34, 30,
    34, 32,
    34, 36,
    34, 40,
    34, 48,
    34, 50,
    34, 52,
    34, 53,
    34, 55,
    34, 56,
    34, 58,
    34, 61,
    34, 63,
    34, 68,
    34, 69,
    34, 70,
    34, 71,
    34, 72,
    34, 74,
    34, 80,
    34, 82,
    34, 84,
    34, 85,
    34, 87,
    34, 88,
    34, 90,
    36, 34,
    36, 57,
    36, 64,
    36, 87,
    36, 90,
    37, 13,
    37, 15,
    37, 16,
    37, 34,
    37, 53,
    37, 55,
    37, 56,
    37, 57,
    37, 58,
    37, 61,
    37, 64,
    39, 13,
    39, 15,
    39, 34,
    39, 43,
    39, 64,
    39, 66,
    39, 68,
    39, 69,
    39, 70,
    39, 72,
    39, 78,
    39, 79,
    39, 80,
    39, 81,
    39, 82,
    39, 83,
    39, 86,
    39, 87,
    39, 90,
    39, 91,
    40, 34,
    40, 53,
    40, 55,
    40, 57,
    40, 58,
    40, 61,
    40, 74,
    40, 75,
    41, 64,
    42, 64,
    43, 13,
    43, 15,
    43, 16,
    43, 64,
    44, 5,
    44, 12,
    44, 14,
    44, 29,
    44, 30,
    44, 36,
    44, 40,
    44, 48,
    44, 50,
    44, 52,
    44, 68,
    44, 69,
    44, 70,
    44, 72,
    44, 74,
    44, 80,
    44, 82,
    44, 86,
    44, 87,
    44, 88,
    44, 90,
    44, 95,
    45, 3,
    45, 8,
    45, 11,
    45, 12,
    45, 14,
    45, 18,
    45, 34,
    45, 36,
    45, 40,
    45, 48,
    45, 50,
    45, 53,
    45, 55,
    45, 56,
    45, 58,
    45, 61,
    45, 63,
    45, 85,
    45, 87,
    45, 90,
    45, 95,
    46, 64,
    47, 64,
    48, 13,
    48, 15,
    48, 16,
    48, 34,
    48, 53,
    48, 55,
    48, 56,
    48, 57,
    48, 58,
    48, 61,
    48, 64,
    49, 7,
    49, 12,
    49, 13,
    49, 14,
    49, 15,
    49, 34,
    49, 43,
    49, 66,
    49, 68,
    49, 69,
    49, 70,
    49, 72,
    49, 80,
    49, 82,
    49, 95,
    50, 13,
    50, 15,
    50, 16,
    50, 34,
    50, 53,
    50, 55,
    50, 56,
    50, 57,
    50, 58,
    50, 61,
    50, 64,
    51, 55,
    51, 58,
    51, 61,
    51, 68,
    51, 69,
    51, 70,
    51, 72,
    51, 80,
    51, 82,
    52, 34,
    53, 7,
    53, 12,
    53, 13,
    53, 14,
    53, 15,
    53, 16,
    53, 21,
    53, 27,
    53, 28,
    53, 29,
    53, 34,
    53, 36,
    53, 40,
    53, 43,
    53, 48,
    53, 50,
    53, 64,
    53, 66,
    53, 68,
    53, 69,
    53, 70,
    53, 72,
    53, 78,
    53, 79,
    53, 80,
    53, 81,
    53, 82,
    53, 83,
    53, 84,
    53, 86,
    53, 87,
    53, 88,
    53, 89,
    53, 90,
    53, 91,
    53, 95,
    54, 13,
    54, 15,
    54, 16,
    54, 64,
    55, 7,
    55, 12,
    55, 13,
    55, 14,
    55, 15,
    55, 16,
    55, 21,
    55, 27,
    55, 28,
    55, 29,
    55, 30,
    55, 33,
    55, 34,
    55, 36,
    55, 40,
    55, 43,
    55, 48,
    55, 50,
    55, 61,
    55, 64,
    55, 66,
    55, 68,
    55, 69,
    55, 70,
    55, 72,
    55, 80,
    55, 82,
    55, 84,
    55, 95,
    56, 5,
    56, 7,
    56, 12,
    56, 13,
    56, 14,
    56, 15,
    56, 16,
    56, 21,
    56, 27,
    56, 28,
    56, 29,
    56, 30,
    56, 34,
    56, 36,
    56, 40,
    56, 43,
    56, 48,
    56, 50,
    56, 52,
    56, 61,
    56, 66,
    56, 68,
    56, 69,
    56, 70,
    56, 72,
    56, 78,
    56, 79,
    56, 80,
    56, 81,
    56, 82,
    56, 83,
    56, 84,
    56, 95,
    57, 12,
    57, 14,
    57, 29,
    57, 30,
    57, 36,
    57, 40,
    57, 48,
    57, 50,
    57, 68,
    57, 69,
    57, 70,
    57, 72,
    57, 80,
    57, 82,
    57, 95,
    58, 7,
    58, 12,
    58, 13,
    58, 14,
    58, 15,
    58, 21,
    58, 27,
    58, 28,
    58, 29,
    58, 30,
    58, 34,
    58, 36,
    58, 40,
    58, 43,
    58, 48,
    58, 50,
    58, 53,
    58, 66,
    58, 68,
    58, 69,
    58, 70,
    58, 72,
    58, 74,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 86,
    58, 95,
    59, 12,
    59, 14,
    59, 29,
    59, 36,
    59, 40,
    59, 48,
    59, 50,
    59, 95,
    60, 68,
    60, 69,
    60, 70,
    60, 72,
    60, 75,
    60, 80,
    60, 82,
    61, 3,
    61, 5,
    61, 8,
    61, 11,
    61, 13,
    61, 15,
    61, 18,
    61, 29,
    61, 30,
    61, 32,
    61, 36,
    61, 40,
    61, 48,
    61, 50,
    61, 52,
    61, 53,
    61, 55,
    61, 56,
    61, 58,
    61, 61,
    61, 63,
    61, 68,
    61, 69,
    61, 70,
    61, 71,
    61, 72,
    61, 74,
    61, 80,
    61, 82,
    61, 84,
    61, 85,
    61, 87,
    61, 88,
    61, 90,
    63, 7,
    63, 13,
    63, 15,
    63, 21,
    63, 34,
    63, 43,
    63, 64,
    64, 11,
    64, 17,
    64, 18,
    64, 20,
    64, 21,
    64, 22,
    64, 23,
    64, 25,
    64, 26,
    64, 36,
    64, 40,
    64, 48,
    64, 50,
    64, 53,
    64, 54,
    64, 55,
    64, 61,
    64, 63,
    64, 74,
    64, 75,
    64, 78,
    64, 79,
    64, 81,
    64, 83,
    64, 87,
    64, 90,
    66, 18,
    66, 53,
    66, 55,
    66, 56,
    66, 58,
    66, 61,
    66, 87,
    66, 90,
    67, 10,
    67, 34,
    67, 53,
    67, 55,
    67, 56,
    67, 57,
    67, 58,
    67, 61,
    67, 62,
    67, 87,
    67, 88,
    67, 89,
    67, 90,
    67, 94,
    68, 53,
    68, 56,
    68, 58,
    68, 89,
    69, 64,
    70, 53,
    70, 55,
    70, 56,
    70, 58,
    70, 61,
    70, 87,
    70, 88,
    70, 89,
    70, 90,
    71, 12,
    71, 13,
    71, 14,
    71, 15,
    71, 16,
    71, 21,
    71, 34,
    71, 43,
    71, 58,
    71, 64,
    71, 66,
    71, 68,
    71, 69,
    71, 70,
    71, 72,
    71, 80,
    71, 82,
    71, 84,
    71, 95,
    72, 53,
    72, 64,
    72, 75,
    73, 18,
    73, 53,
    73, 55,
    73, 56,
    73, 58,
    73, 61,
    73, 87,
    73, 90,
    74, 10,
    74, 55,
    74, 56,
    74, 61,
    74, 62,
    74, 64,
    74, 94,
    75, 10,
    75, 55,
    75, 56,
    75, 61,
    75, 62,
    75, 64,
    75, 94,
    76, 12,
    76, 14,
    76, 21,
    76, 29,
    76, 53,
    76, 68,
    76, 69,
    76, 70,
    76, 72,
    76, 80,
    76, 82,
    76, 87,
    76, 90,
    76, 95,
    77, 64,
    78, 18,
    78, 53,
    78, 55,
    78, 56,
    78, 58,
    78, 61,
    78, 87,
    78, 90,
    79, 18,
    79, 53,
    79, 55,
    79, 56,
    79, 58,
    79, 61,
    79, 87,
    79, 90,
    80, 10,
    80, 34,
    80, 53,
    80, 55,
    80, 56,
    80, 57,
    80, 58,
    80, 61,
    80, 62,
    80, 87,
    80, 88,
    80, 89,
    80, 90,
    80, 94,
    81, 10,
    81, 34,
    81, 53,
    81, 55,
    81, 56,
    81, 57,
    81, 58,
    81, 61,
    81, 62,
    81, 87,
    81, 88,
    81, 89,
    81, 90,
    81, 94,
    82, 53,
    82, 64,
    82, 75,
    83, 12,
    83, 13,
    83, 14,
    83, 15,
    83, 16,
    83, 29,
    83, 34,
    83, 43,
    83, 53,
    83, 59,
    83, 66,
    83, 68,
    83, 69,
    83, 70,
    83, 71,
    83, 72,
    83, 80,
    83, 82,
    83, 85,
    83, 87,
    83, 88,
    83, 89,
    83, 90,
    83, 95,
    84, 53,
    84, 55,
    84, 56,
    84, 58,
    84, 61,
    85, 12,
    85, 14,
    85, 21,
    85, 29,
    85, 35,
    85, 37,
    85, 38,
    85, 39,
    85, 41,
    85, 42,
    85, 44,
    85, 45,
    85, 46,
    85, 47,
    85, 49,
    85, 51,
    85, 53,
    85, 55,
    85, 56,
    85, 58,
    85, 61,
    85, 67,
    85, 68,
    85, 69,
    85, 70,
    85, 72,
    85, 73,
    85, 76,
    85, 77,
    85, 80,
    85, 82,
    85, 84,
    85, 93,
    85, 95,
    86, 53,
    86, 58,
    87, 13,
    87, 15,
    87, 16,
    87, 29,
    87, 30,
    87, 34,
    87, 43,
    87, 53,
    87, 58,
    87, 64,
    87, 66,
    87, 68,
    87, 69,
    87, 70,
    87, 72,
    87, 80,
    87, 82,
    88, 7,
    88, 13,
    88, 15,
    88, 34,
    88, 43,
    88, 53,
    88, 59,
    88, 68,
    88, 69,
    88, 70,
    88, 72,
    88, 80,
    88, 82,
    89, 12,
    89, 14,
    89, 30,
    89, 53,
    89, 66,
    89, 68,
    89, 69,
    89, 70,
    89, 72,
    89, 80,
    89, 82,
    89, 95,
    90, 13,
    90, 15,
    90, 16,
    90, 29,
    90, 30,
    90, 34,
    90, 43,
    90, 53,
    90, 58,
    90, 64,
    90, 66,
    90, 68,
    90, 69,
    90, 70,
    90, 72,
    90, 80,
    90, 82,
    91, 53,
    91, 68,
    91, 69,
    91, 70,
    91, 72,
    91, 80,
    91, 82,
    92, 68,
    92, 69,
    92, 70,
    92, 72,
    92, 75,
    92, 80,
    92, 82,
    93, 64,
    95, 19,
    95, 20,
    95, 24,
    95, 53,
    95, 55,
    95, 56,
    95, 57,
    95, 58,
    95, 61,
    95, 89
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -10, -25, -25, -18, -23, -47, -3, -10,
    -10, -16, -18, -11, -21, -18, -10, -10,
    -10, -10, -25, -25, -18, -23, -47, -2,
    -2, -2, -2, 5, -2, -2, -10, -39,
    -39, -13, -26, -28, -20, -7, -2, -8,
    -13, -9, -9, -16, -14, -9, -7, -7,
    -3, -27, -27, -8, -26, -7, -2, -8,
    -7, -8, -3, -29, -10, -16, -39, -7,
    -2, -8, -13, -9, -9, -16, -14, -9,
    -7, -7, -3, -27, -27, -8, -26, -7,
    -2, -8, -7, -8, -3, -29, -10, -16,
    -39, -11, -11, -18, 2, 2, 2, -8,
    -8, -6, -10, -13, -11, -11, -4, -6,
    -6, -6, -6, -3, -7, -7, -9, -9,
    -13, -16, -13, -36, -36, -4, -5, -17,
    -3, -4, 6, -4, -3, -10, -10, -26,
    -31, -28, -46, -13, -15, -15, -15, -15,
    -15, -15, -11, -6, -6, -8, -8, -6,
    -10, -13, -10, -18, -18, -10, -18, -18,
    -15, -20, -18, -15, -28, -20, -11, -10,
    -11, -21, -8, -23, -21, -21, -16, -26,
    -18, -21, -18, -23, -3, -23, -26, -10,
    -8, -15, -18, -10, -10, -10, -10, -3,
    -25, -24, -20, -21, -24, -26, -5, -5,
    -5, -2, -5, 1, -5, -5, -2, -10,
    -20, -20, -20, -3, -4, -11, 1, 1,
    -13, -13, -11, -11, -9, -11, -5, -8,
    -12, -11, -11, -11, -10, -26, -20, -10,
    -1, -11, -11, -11, -11, -2, -2, -11,
    -2, -11, -2, -10, -10, -10, -10, -7,
    -9, -7, -4, -8, -7, 10, 10, 10,
    10, -10, -10, -16, -15, -1, -19, -19,
    -20, -10, -11, -11, -11, -11, -1, -11,
    -11, -11, -11, 10, -11, -11, -10, -11,
    -18, -11, -19, -26, -26, -11, -15, -15,
    -13, 8, -8, -8, -8, -8, -27, -22,
    -8, -21, -22, -38, -7, -20, -20, -11,
    10, 10, -13, -13, -11, -11, -9, -11,
    -5, -8, -12, -11, -11, -10, -8, -11,
    -8, -10, -23, -28, -3, -2, -2, -2,
    -2, -2, -2, -8, -13, -13, -11, -11,
    -9, -11, -5, -8, -12, -11, -11, -6,
    -8, -6, -2, -2, -2, -2, -2, -2,
    -3, -10, -13, -10, -17, -10, -23, -20,
    -10, -10, -23, -25, -9, -9, -26, -9,
    -9, -16, -21, -23, -23, -23, -23, -16,
    -16, -23, -16, -23, -16, -21, -21, -18,
    -18, -11, -18, -13, -13, -10, -10, -16,
    -15, -15, -9, -28, -9, -28, -19, -10,
    -18, -18, -21, -18, -10, -25, -11, -11,
    -28, -11, -11, 2, -23, -17, -17, -17,
    -17, -17, -17, -17, -13, -9, -1, -15,
    -9, -28, -9, -28, -7, -10, -15, -15,
    -21, -18, -20, -11, -11, -18, -11, -11,
    -1, 2, -16, -16, -16, -16, -16, -10,
    -10, -16, -10, -16, -10, -10, -9, -17,
    -17, -16, -15, -8, -8, -8, -8, -8,
    -8, -8, -8, -8, -8, -17, -18, -14,
    -16, -14, -16, -20, -18, -18, -29, -28,
    -21, -12, -12, -10, -12, -12, 13, -27,
    -29, -29, -29, -29, -2, -11, -11, -29,
    -11, -29, -11, -20, -11, -14, -7, -7,
    -18, -10, -10, -10, -10, -7, -2, -2,
    -2, -2, 5, -2, -2, -23, -3, -23,
    -26, 11, 11, -10, -8, -15, -18, -10,
    -10, -10, -10, -3, -11, -16, -17, -21,
    -16, -26, -5, -5, -5, -2, -5, 1,
    -5, -5, -2, -10, -15, -20, -15, -10,
    -39, -39, -13, -26, -28, -20, -20, -13,
    -31, -13, -16, -13, -13, -13, -13, -11,
    -11, -11, -11, -16, -11, -23, -23, -20,
    10, 28, 13, 13, 13, 13, -23, -23,
    -11, -13, -15, -15, -26, -15, -6, -6,
    -4, -10, -11, -17, -15, -8, -31, -17,
    -4, -5, -4, -6, -5, -4, -21, -6,
    -18, -1, 10, -15, -15, -15, -29, -15,
    -5, -1, -3, -5, -7, -16, -7, -16,
    -5, -18, -10, -18, 2, -4, -5, -6,
    -6, -6, -6, -6, -6, -6, -7, -15,
    10, 2, -11, -13, -15, -15, -26, -15,
    -6, -6, 10, 10, 10, 10, 10, 11,
    10, 10, 10, 10, 10, 10, 11, 10,
    -8, -8, -13, -25, -16, -7, -7, -7,
    -7, -7, -7, 2, 2, -8, 10, -11,
    -13, -15, -15, -26, -15, -6, -6, -11,
    -13, -15, -15, -26, -15, -6, -6, -4,
    -10, -11, -17, -15, -8, -31, -17, -4,
    -5, -4, -6, -5, -4, -4, -10, -11,
    -17, -15, -8, -31, -17, -4, -5, -4,
    -6, -5, -4, -15, 10, 2, -7, -18,
    -7, -18, -9, -11, -11, -16, -16, -10,
    -3, -7, -7, -7, 8, -7, -7, -7,
    8, 5, 2, 5, 5, -7, -21, -13,
    -10, -21, -13, -5, -5, -2, -8, 3,
    3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, -10, -2, -2, -3, -2,
    3, -2, -2, -2, -2, 3, 3, 3,
    -2, -2, -2, 3, -5, -15, -16, -10,
    -10, -16, -10, -11, -20, -18, -10, -10,
    -23, -5, -5, -5, -5, -5, -5, -5,
    -10, -21, -21, -20, -16, -15, -10, -4,
    -4, -4, -4, -4, -4, -7, -7, -10,
    -11, -1, -6, -6, -6, -6, -6, -6,
    -7, -10, -10, -16, -10, -11, -20, -18,
    -10, -10, -23, -5, -5, -5, -5, -5,
    -5, -5, -10, -4, -4, -4, -4, -4,
    -4, -2, -2, -2, -2, 5, -2, -2,
    10, -7, -2, -8, -13, -9, -9, -16,
    -14, -9, -7
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 867,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_InterSemiBold18 = {
#else
lv_font_t ui_font_InterSemiBold18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 22,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_INTERSEMIBOLD18*/


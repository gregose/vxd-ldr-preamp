/*
 * Fixed width font for numbers
 *
 * This font is very useful when using overstrike as all characters & numbers
 * are all the same width.
 *
 * This font also contains a few special characters that are nice for certain applications
 * like clocks, signed values or decimal point values.
 * 
 * The rendering code normally inserts a pad pixel so this size allows the font to fit
 * perfectly on 32 and 64 tall glcd displays.
 *
 * Font has also been squeezed to 15 pixels wide for better alignment on 128 & 192 pixel displays.
 */

#ifndef line_H
#define line_H

#define line_WIDTH 8
#define line_HEIGHT 1

GLCDFONTDECL(line) = {
    0x0, 0x1,	// size of zero indicates fixed width font
    8,		// width
    1,		// height
    '~',	// first char
    2,		// char count

// char '~'
	B10000000,B10000000,B10000000,B10000000,B10000000,B10000000,B10000000,B10000000,
// char '[]'	
	B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
	

};

#endif

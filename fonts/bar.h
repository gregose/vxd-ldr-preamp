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

#ifndef bar_H
#define bar_H

GLCDFONTDECL(bar) = {
    0x0, 0x1,	// size of zero indicates fixed width font
    1,		// width
    8,		// height
    '0',	// first char (48)
    3,		// char count

// char '0'
	B00000000,
	
// char '1'
	B11111111,

// char '2'	
	B10000000

};

#endif

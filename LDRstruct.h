/******* DATA *******/
// pw= indicative PWM pulse width value: 0..255 (changes with temperature)
// i= current through the LDR LED (as measured by AnalogRead). Bit 15 indicates HIGH or LOW resistance mode
// struct takes 6 bytes
typedef struct  {
	byte pw_SE;            // series
	word i_SE;             
	byte pw_SH;            // shunt
	word i_SH;
} LDRsample;

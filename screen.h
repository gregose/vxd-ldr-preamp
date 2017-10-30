/////////////////////////
/******* SCREEN HEADER *******/


// prints activity indicator
void printTick();

#ifdef VOLUME_BAR
void drawBar();
#endif

void drawVolume(byte);

#if INPUTCOUNT > 0
void drawInput();
# endif

#if OUTPUTCOUNT > 0
void drawOutput();
# endif

// Functions for printing two large digits. Works from 00-99
void drawRunDisplay();

void drawSetupMenu();

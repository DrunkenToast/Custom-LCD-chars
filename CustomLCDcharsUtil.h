#ifndef CustomLCDcharsUtil_H
#include "CustomLCDcharsUtil.h"

// # General util
byte Loadingbar[7][8] = {
    // # Empty
    { // left
        B00000,
        B01111,
        B10000,
        B10000,
        B10000,
        B10000,
        B01111,
        B00000

    },
    { // middle
        B00000, 
        B11111,
        B00000,
        B00000,
        B00000,
        B00000, 
        B11111,
        B00000
    },
    { // right
        B00000,
        B11110,
        B00001,
        B00001,
        B00001, 
        B00001,
        B11110,
        B00000
    },
    // # Full
    { // left
        B00000,
        B01111, 
        B10000,
        B10111, 
        B10111,
        B10000, 
        B01111,
        B00000 
    },
    { // middle
        B00000,
        B11111,
        B00000, 
        B11111,
        B11111, 
        B00000,
        B11111,
        B00000 
    },
    { // middle half
        B00000,
        B11111,
        B00000,
        B11000, 
        B11000,
        B00000,
        B11111, 
        B00000
    },
    {
		B11111,
		B00000,
		B11011,
		B11011,
		B11011,
		B11011,
		B00000,
		B11111
    },
    {
        B00000,
        B11110,
        B00001,
        B11101,
        B11101, 
        B00001, 
        B11110,
        B00000 
    }
};
byte ArrowUp[] = { 
    B00000,
    B00100, 
    B01110, 
    B10101,
    B00100,
    B00100,
    B00100, 
    B00000 
};
byte ArrowDown[] = {
    B00000,
    B00100,
    B00100,
    B00100, 
    B10101,
    B01110,
    B00100,
    B00000 
};
byte ArrowLeft[] = { 
    B00000, 
    B00100, 
    B01000, 
    B11111, 
    B01000, 
    B00100, 
    B00000, 
    B00000 
};
byte ArrowRight[] = { 
    B00000, 
    B00100, 
    B00010, 
    B11111,
    B00010, 
    B00100, 
    B00000, 
    B00000  
};
byte Pushpin[] = {
    B00000, 
    B01110, 
    B01110,
    B01110, 
    B11111,
    B00100, 
    B00100, 
    B00000 
};
byte FillHalf[] = {
    B10101,
    B01010,
    B10101,
    B01010,
    B10101,
    B01010, 
    B10101,
    B01010
};
byte FillFull[] = {
    B11111,
    B11111,
    B11111,
    B11111,
    B11111,
    B11111, 
    B11111,
    B11111
};
// Alternative name(s): Wrong, Incorrect, Cross
byte X[8] = {
    B00000,
    B00000,
    B10001,
    B01010,
    B00100,
    B01010,
    B10001,
    B00000
};
// Alternative name(s): Right, Correct
byte Checkmark[8] = {
    B00000,
    B00000,
    B00001,
    B00011,
    B10110,
    B11100,
    B01000,
    B00000
};
byte LockClosed[8] = {
    B01110,
    B10001,
    B10001,
    B11111,
    B11011,
    B11011,
    B11111,
    B11111
};
byte LockOpen[8] = {
    B01110,
    B10001,
    B10000,
    B11111,
    B11011,
    B11011,
    B11111,
    B11111
};
byte WarningSign2x2[4][8] = {
    // First row
    { 
        B00000, 
        B00000, 
        B00000, 
        B00001,
        B00001,
        B00010, 
        B00010,
        B00101
    },
    { 
        B00000,
        B00000,
        B00000,
        B10000,
        B10000,
        B01000,
        B01000,
        B10100 
    },
    // Second row
    {
        B00101, 
        B01001,
        B01000,
        B10001,
        B10000,
        B11111,
        B00000,
        B00000 
    },
    { 
        B10100, 
        B10010,
        B00010, 
        B10001, 
        B00001, 
        B11111, 
        B00000,
        B00000 
    }
};
byte Bars[3][8] = {
    { B00000, B00000, B00000, B00000, B00000, B00000, B11111, B11111 }, // 2 high
    { B00000, B00000, B00000, B11111, B11111, B11111, B11111, B11111 }, // 5 high
    { B11111, B11111, B11111, B11111, B11111, B11111, B11111, B11111 } // 8 high, same as full
};

// # Sound
byte Speaker0[8] = {
    B00001,
    B00011,
    B00111,
    B11111,
    B11111,
    B00111,
    B00011,
    B00001
};
byte Soundwave0[8] = {
    B01000,
    B00100,
    B10010,
    B01010,
    B01010,
    B10010,
    B00100,
    B01000
};
// Smaller speaker
byte Speaker1[] = {
    B00010,
    B00110,
    B11110,
    B11110,
    B11110,
    B00110,
    B00010,
    B00000
};
byte Soundwave1[] = {
    B01000,
    B10000,
    B00000,
    B11000,
    B00000,
    B10000,
    B01000,
    B00000
};

// ## Media controls
// Alternative name(s): Back, previous, reverse, skip
byte Backwards[] = { 
    B00000, 
    B10010, 
    B10110,
    B11110, 
    B10110,
    B10010,
    B00000,
    B00000 
};
byte PlayPauseToggle[] = { 
    B00000, 
    B10100,
    B10110,
    B10111, 
    B10110, 
    B10100,
    B00000,
    B00000 
};
byte Pause[] = {
    B00000, 
    B01010,
    B01010,
    B01010,
    B01010,
    B01010, 
    B00000,
    B00000 
};
byte Play[] = {
    B00000,
    B01000, 
    B01100,
    B01110,
    B01100,
    B01000,
    B00000, 
    B00000 
};
// Alternative name(s): Next, skip
byte Forward[] = { 
    B00000,
    B01001, 
    B01101,
    B01111,
    B01101,
    B01001,
    B00000,
    B00000 
};

// # Electricity/power/technology
byte Battery0[3][8] = {
    { // empty
        B01110,
        B01010,
        B10001,
        B10001,
        B10001,
        B10001,
        B10001,
        B11111
    },
    { // half
        B01110,
        B01010,
        B10001,
        B10001,
        B10001,
        B11111,
        B11111,
        B11111
    },
    { // full
        B01110,
        B01010,
        B11111,
        B11111,
        B11111,
        B11111,
        B11111,
        B11111
    }
};
byte Battery1[3][8] = {
    { //empty
        B01110, 
        B11111, 
        B10001,
        B10001, 
        B10001, 
        B10001,
        B10001,
        B11111 
    },
    { // half
        
        B01110, 
        B11111, 
        B10001, 
        B10011, 
        B10111, 
        B11111, 
        B11111,
        B11111 
    
    },
    { // full  
        B01110, 
        B11111, 
        B11111, 
        B11111,
        B11111,
        B11111, 
        B11111, 
        B11111 
    }
};
// Alternative name(s): Cellphone, GSM
byte Signal[2][8] = {
    { // Signal tower
        B00000, 
        B01110,
        B01110,
        B00100,
        B00100, 
        B00100,
        B00100, 
        B00100
    },
    { // full strength
        B00000,
        B00000,
        B00001,
        B00001,
        B00101, 
        B00101, 
        B10101,
        B10101 
    }
};

// Other
byte Hourglass[3][8] = {
    { // empty
        B11111, 
        B10001,
        B01010, 
        B00100,
        B01010,
        B10001,
        B11111,
        B00000
    },
    { // top full
        B11111,
        B11111,
        B01110,
        B00100, 
        B01010, 
        B10001, 
        B11111,
        B00000 
    },
    { // bottom full
        B11111, 
        B10001, 
        B01010, 
        B00100,
        B01110, 
        B11111,
        B11111, 
        B00000
    }
}

#endif

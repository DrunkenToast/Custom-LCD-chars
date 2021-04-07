#ifndef CustomLCDcharsEmoji_H
#include "CustomLCDcharsEmoji.h

// # People and faces
byte Person[8] = {
    B01110,
    B01110,
    B00100,
    B01110,
    B10101,
    B00100,
    B01010,
    B01010
};
byte SlightSmile[8] = {
    B00000,
    B00000,
    B01010,
    B00000,
    B10001,
    B01110,
    B00000,
    B00000};
byte Frowning[8] = {
    B00000,
    B00000,
    B01010,
    B00000,
    B00000,
    B01110,
    B10001,
    B00000};
byte Angry[8] = {
    B00000,
    B10001,
    B01010,
    B01010,
    B00000,
    B01110,
    B10001,
    B00000
};
byte Evil[] = { 
    B00000,
    B10001,
    B11011,
    B01010, 
    B00000, 
    B10001, 
    B01110, 
    B00100 
};
byte Skull[] = {
    B00000, 
    B01110,
    B11111, 
    B10101,
    B11111,
    B01110,
    B01110, 
    B00000 
};

// # Music
// A musicnote may already be present in your character set
byte MusicNote0[8] = {
    B00000,
    B00001,
    B00011,
    B00101,
    B01001,
    B01011,
    B11011,
    B11000};
byte MusicNote1[8] = {
    B00000,
    B01111,
    B01001,
    B01001,
    B11011,
    B11011,
    B00000,
    B00000
};  
byte MusicNote2[] = {
    B00000,
    B00011,
    B00010, 
    B00010, 
    B00010,
    B01110,
    B11110, 
    B01110 
};

// # Animals
byte SnoutDog[] = { 
    B00000,
    B10001, 
    B00000, 
    B00000, 
    B01110, 
    B00100, 
    B10101, 
    B01010 
};
byte DancingCat[] = { 
    B01001, 
    B01111, 
    B10111, 
    B11101,
    B01110, 
    B11101,
    B11100, 
    B10111 
};
byte Fish[] = { 
    B00000, 
    B10000,
    B01000, 
    B10000, 
    B01101,
    B11110, 
    B01101, 
    B00000 
};

// # Other
// A heart may already be present in your character set
byte Heart[] = { 
    B00000,
    B00000,
    B01010,
    B11111, 
    B11111, 
    B01110, 
    B00100, 
    B00000 
};
byte HeartEmpty[] = { 
    B00000, 
    B00000,
    B01010,
    B10101,
    B10001, 
    B01010,
    B00100,
    B00000 
};
// Alternative name(s): Rocket, ArrowUp, PointUp
byte Spaceship[] = {
    B00000, 
    B00100,
    B01110,
    B01110, 
    B11111,
    B10101, 
    B00100, 
    B00000
};
byte Coffee[] = { 
    B01001,
    B10010, 
    B10010,
    B01000, 
    B11111,
    B11101,
    B11110,
    B01100
};
byte Clock[] = { 
    B00000, 
    B01110, 
    B10101, 
    B10111,
    B10001,
    B01110,
    B00000,
    B00000 
};
byte MobilePhone[] = {
    B00100,
    B11111,
    B10001,
    B10001,
    B11111, 
    B11111, 
    B11111,
    B11111
};
byte ElectricPlug[] = { 
    B01010,
    B01010,
    B11111,
    B10001,
    B10001,
    B01110,
    B00100,
    B00100
};
// Alternative name(s): Notification, Ring
byte Bell[8] = {
    B00100,
    B01110,
    B01110,
    B01110,
    B11111,
    B00000,
    B00100,
    B00000
};
byte Mouse[] = { 
    B00010,
    B00100,
    B11111, 
    B10101,
    B10101,
    B10001, 
    B10001, 
    B01110
};

#undef

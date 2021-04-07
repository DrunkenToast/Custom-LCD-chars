# Custom LCD characters
Custom characters for Liquid Crystal Displays, these can be used for Arduino LCD projects.  
Examples:  
<img src="https://media.discordapp.net/attachments/801760976164618272/826490494774935602/unknown.png" height="70">
<img src="https://media.discordapp.net/attachments/801760976164618272/826574251485167686/unknown.png" height="70">
<img src="https://cdn.discordapp.com/attachments/801760976164618272/826574296494768128/unknown.png" height="70">

## Usage
For all characters:
```ino
#include "CustomLCDchars.h"
```

Seperately:
```ino
#include "CustomLCDcharsEmoji.h"
#include "CustomLCDcharsGeo.h"
#include "CustomLCDcharsUtil.h"
```

Check your display on how to implement custom characters.
Here we use a basic Liquid Crystal I2C Display:
```ino
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
    lcd.createChar(1 , <customchar>);   // Create a custom character
    lcd.write(byte(1)); // Print your custom character
}
```

## Important note
Depending on your display, you will have a limited amount of characters, usually 8.
Some custom character sets (such as WorldMap) require 12 characters for a complete map.
This won't be possible to display at the same time unless you have enough custom characters.

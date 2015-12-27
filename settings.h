/*
 * Settings file by Shea Ivey, modified by JNJO to fit Attiny85
 * OLED and LED is not supported by the ATTiny85 version

The MIT License (MIT)

Copyright (c) 2015 Shea Ivey

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef settings_h
#define settings_h

// this will be displayed on the screensaver.
// Up to 10 letters
#define CALL_SIGN "CALL SIGN"

#define spiDataPin 0
#define slaveSelectPin 1
#define spiClockPin 2

#define bindSwitch 3

#define rxpin 4
#define led 5 //LED is not working in this version



#define CHANNEL_BAND_SIZE 8
#define CHANNEL_MIN_INDEX 0
#define CHANNEL_MAX_INDEX 39

#define CHANNEL_MAX 39
#define CHANNEL_MIN 0

#define EEPROM_ADR_TUNE 0

#define EEPROM_ADR_CALLSIGN 20


#define STATE_SCREEN_TRANSMITTING 0
#define STATE_BIND_MODE 1
#define STATE_BIND_MODE_WAITING 2
#define STATE_BIND_MODE_RECEIVED 3
#define STATE_BIND_MODE_FAILED 4


#endif // file_defined

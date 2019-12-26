/*
The MIT License (MIT)

Copyright (c) 2017 Lancaster University.

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
*/

/**
  * Class definition for MicroBit NEXT IO.
  * Represents a collection of all I/O pins on the device.
  */

#include "CodalConfig.h"
#include "XtronIO.h"

using namespace codal;

/**
  * Constructor.
  *
  * Create a representation of all given I/O pins on the edge connector
  *
  * Accepts a sequence of unique ID's used to distinguish events raised
  * by MicroBitPin instances on the default EventModel.
  */
XtronIO::XtronIO() :
    scl (ID_PIN_SCL, PB_10, PIN_CAPABILITY_AD),
    sda (ID_PIN_SDA, PB_3, PIN_CAPABILITY_AD),
    buttonUp (ID_PIN_BUTTON_UP, PC_9, PIN_CAPABILITY_DIGITAL),
    buttonDown (ID_PIN_BUTTON_DOWN, PC_11, PIN_CAPABILITY_DIGITAL),
    buttonLeft (ID_PIN_BUTTON_LEFT, PC_10, PIN_CAPABILITY_DIGITAL),
    buttonRight (ID_PIN_BUTTON_RIGHT, PC_8, PIN_CAPABILITY_DIGITAL),
    ledBlue (ID_PIN_LED_BLUE, PB_1, PIN_CAPABILITY_AD),
    ledRed (ID_PIN_LED_RED, PB_0, PIN_CAPABILITY_AD),
    buzzer (ID_PIN_BUZZER, PA_8, PIN_CAPABILITY_AD),
    interrupt (ID_PIN_INT, PC_13, PIN_CAPABILITY_AD),
    // servoOne (ID_PIN_SERVO_ONE, PA_3, PIN_CAPABILITY_AD),
    // servoTwo (ID_PIN_SERVO_TWO, PA_0, PIN_CAPABILITY_AD),
    // snd (ID_PIN_P2, PA_8, PIN_CAPABILITY_AD), // gray - SERVO
    // hpEn (ID_PIN_P3, PA_2, PIN_CAPABILITY_AD), // white - INT
    // bzEn (ID_PIN_P4, PA_10, PIN_CAPABILITY_AD), // black - RX
    // tx (ID_PIN_P5, PA_9, PIN_CAPABILITY_AD), // purple - TX
    // pwrEn (ID_PIN_P6, PB_5, PIN_CAPABILITY_AD), // brown - MOSI
    // tip (ID_PIN_P7, PB_4, PIN_CAPABILITY_AD), // orange - not used/MISO
    // sense (ID_PIN_P0, PB_3, PIN_CAPABILITY_AD), // yellow - CLK
    mosi(ID_PIN_P0 + 7, PA_7, PIN_CAPABILITY_AD),
    miso(ID_PIN_P0 + 11, PA_6, PIN_CAPABILITY_AD),
    sck(ID_PIN_P0 + 12, PA_5, PIN_CAPABILITY_AD),
    cs(ID_PIN_P0 + 13, PB_12, PIN_CAPABILITY_AD),
    dc(ID_PIN_P0 + 14, PB_4, PIN_CAPABILITY_AD),
    displayReset(ID_PIN_P0 + 18, PC_12, PIN_CAPABILITY_AD),
    displayBl(ID_PIN_P0 + 19, PB_9, PIN_CAPABILITY_AD),
    flashCS(ID_PIN_P0 + 20, PB_2, PIN_CAPABILITY_AD)
    // d1(ID_PIN_P0 + 17, PA_2, PIN_CAPABILITY_AD),
    // d2(ID_PIN_P0 + 18, PA_3, PIN_CAPABILITY_AD),
    // d3(ID_PIN_P0 + 19, PB_3, PIN_CAPABILITY_AD),
    // d4(ID_PIN_P0 + 20, PB_4, PIN_CAPABILITY_AD),
    // d5(ID_PIN_P0 + 21, PB_5, PIN_CAPABILITY_AD),
    // d6(ID_PIN_P0 + 22, PB_6, PIN_CAPABILITY_AD),
    // d7(ID_PIN_P0 + 23, PB_7, PIN_CAPABILITY_AD)
{
}

#include "implements.h"   // use quotes for your own header
#include <Arduino.h>

// Set mode for a single pin
void implements::setMode(int pin, int mode)
{
    pinMode(pin, mode);
}

// Set mode for an array of 8 pins
void implements::setMode(int pins[8], int mode)
{
    for (int i = 0; i < 8; ++i)
    {
        setMode(pins[i], mode);
    }
}

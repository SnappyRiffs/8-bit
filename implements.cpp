#include <implements.h>
#include <Arduino.h>

void implements::setMode(int pin, int mode)
{
    pinMode(pin, mode);
}

void implements::setMode(int pins[8], int mode)
{
    for (int i = 0; i < 8; ++i)
    {
        setMode(pins[i], mode);
    }
}
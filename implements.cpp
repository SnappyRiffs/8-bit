#include <implements.h>
#include <Arduino.h>

void implements::setMode(int pin, int mode) {
    pinMode(pin, mode);
}

void implements::setMode(std::array<int, 8> pins, int mode) {
    for (int pin : pins) {
        setMode(pin, mode);
    }
}
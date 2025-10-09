#ifndef implements_H
#define implements_H

#include <Arduino.h>
#include <array>

class implements
{
public:
    void setMode(int pin, int mode);
    void setMode(int pins[8], int mode);
    typedef std::array<int, 8> Array;
}
#endif


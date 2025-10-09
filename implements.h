#ifndef IMPLEMENTS_H
#define IMPLEMENTS_H

#include <Arduino.h>
#include <array>

class implements
{
public:
    void setMode(int pin, int mode);
    void setMode(int pins[8], int mode);

    // Typedef (better with 'using' in modern C++)
    typedef std::array<int, 8> Array;
};

#endif

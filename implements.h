#ifndef implements_H
#define implements_H

#include <Arduino.h>
#include <array>

class implements{
    public:
        void setMode(int pin, int mode);
        void setMode(std::array<int, 8> pins, int mode);
}
#endif


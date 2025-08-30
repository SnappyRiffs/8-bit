#ifndef implements_H
#define implements_H

#include <Arduino.h>

class implements
{
public:
    void setMode(int pin, int mode);
    void setMode(int pins[8], int mode);
}
#endif

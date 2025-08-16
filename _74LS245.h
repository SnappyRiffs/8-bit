#ifndef _74LS245_H
#define _74LS245_H

#include "implements.h"
#include <array>

class _74LS245 {
public:
    // Transfer between A and B depending on DIR and OE
    std::array<bool,8> transfer(bool DIR, bool OE, 
                                std::array<bool,8> A, 
                                std::array<bool,8> B);
};

#endif // _74LS245_H

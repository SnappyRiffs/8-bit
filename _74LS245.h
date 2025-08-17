#ifndef _74LS245_H
#define _74LS245_H

#include "implements.h"
#include <array>

class _74LS245 {
public:
    // Transfer between A and B depending on DIR and OE
    std::array<int,8> transfer(int DIR, int OE, 
                                std::array<int,8> A, 
                                std::array<int,8> B);
};

#endif // _74LS245_H

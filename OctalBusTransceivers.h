#ifndef OctalBusTransceivers_H
#define OctalBusTransceivers_H

#include "implements.h"
#include <array>

class OctalBusTransceivers {
public:
    // Transfer between A and B depending on DIR and OE
    std::array<int,8> transfer(int DIR, int OE, 
                                std::array<int,8> A, 
                                std::array<int,8> B);
};

#endif // OctalBusTransceivers_H

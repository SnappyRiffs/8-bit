#ifndef OctalBusTransceivers_H
#define OctalBusTransceivers_H

#include "implements.h"

class OctalBusTransceivers
{
public:
    // Transfer between A and B depending on DIR and OE
    void transfer(int DIR, int OE, int A[8], int B[8], int result[8])
};

#endif // OctalBusTransceivers_H

#include "OctalBusTransceivers.h"
#include "implements.h"
#include <Arduino.h>
#include <array>

#define INPUT 0
#define OUTPUT 1

std::array<int,8> OctalBusTransceivers::transfer(int DIR, int OE, 
                                      std::array<int,8> A, 
                                      std::array<int,8> B) {
    std::array<int,8> emptyBus = {0, 0, 0, 0, 0, 0, 0, 0};
    if (OE == false) { // active low OE
        if (DIR == false) {
            implements::setMode(A, Input);
            implements::setMode(B, Output);
            for (size_t i = 0; i < A.size(); i++) {
                B[i] = A[i];
            }
            return B;
        } else {
            implements::setMode(B, Input);
            implements::setMode(A, Output);
            for (size_t i = 0; i < B.size(); i++) {
                A[i] = B[i];
            }
            return A;
        }
    }
    // If OE is high (disabled), return empty bus
    return emptyBus;
}
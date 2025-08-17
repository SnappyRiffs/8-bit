#include "_74LS245.h"
#include "implements.h"
#include <Arduino.h>
#include <array>

#define INPUT 0
#define OUTPUT 1

std::array<int,8> _74LS245::transfer(int DIR, int OE, 
                                      std::array<int,8> A, 
                                      std::array<int,8> B) {
    if (OE == false) { // active low OE
        if (DIR == false) {
            setMode(A, Input);
            setMode(B, Output);
            for (size_t i = 0; i < A.size(); i++) {
                B[i] = A[i];
            }
            return B;
        } else {
            setMode(B, Input);
            setMode(A, Output);
            for (size_t i = 0; i < B.size(); i++) {
                A[i] = B[i];
            }
            return A;
        }
    }
    // If OE is high (disabled), return empty bus
    return {};
}
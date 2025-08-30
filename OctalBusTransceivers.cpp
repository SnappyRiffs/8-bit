
#include "OctalBusTransceivers.h"
#include "implements.h"
#include <Arduino.h>

#define INPUT 0
#define OUTPUT 1

void OctalBusTransceivers::transfer(int DIR, int OE, int A[8], int B[8], int result[8])
{
    int emptyBus[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    if (OE == false)
    { // active low OE
        if (DIR == false)
        {
            implements::setMode(A, INPUT);
            implements::setMode(B, OUTPUT);
            for (int i = 0; i < 8; i++)
            {
                B[i] = A[i];
            }
            for (int i = 0; i < 8; i++)
            {
                result[i] = B[i];
            }
            return;
        }
        else
        {
            implements::setMode(B, INPUT);
            implements::setMode(A, OUTPUT);
            for (int i = 0; i < 8; i++)
            {
                A[i] = B[i];
            }
            for (int i = 0; i < 8; i++)
            {
                result[i] = A[i];
            }
            return;
        }
    }
    // If OE is high (disabled), return empty bus
    for (int i = 0; i < 8; i++)
    {
        result[i] = emptyBus[i];
    }
}
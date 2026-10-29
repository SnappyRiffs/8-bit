#include "OctalBusTransceivers.h"
#include "Implements.h"

void OctalBusTransceivers::transfer(int DIR, int OE, int A[8], int B[8], int result[8])
{
    int emptyBus[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    if (OE == false)
    { // active low OE
        if (DIR == false)
        {
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

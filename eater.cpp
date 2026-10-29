#include "OctalBusTransceivers.h"
#include "Implements.h"

class EightBit {
private:
    Implements::Array BUS_;

public:
    int clock(int HLT, int mode, int CLK, int SS) {
        int out = 0;
        if (!HLT) {	
            if (mode) {
                out = CLK;
            } else {
                out = SS;
            }
        }
        return out;
    }

    Implements::Array reg_A(int AI, int AO, int CLK, int CLR, Implements::Array BUS) {
        // Assign BUS to BUS_
        BUS_ = BUS;
        return BUS_;
    }

    Implements::Array reg_B(int BI, int BO, int CLK, int CLR, Implements::Array BUS) {
        // Just reuses reg_A
        return reg_A(BI, BO, CLK, CLR, BUS);
    }
};



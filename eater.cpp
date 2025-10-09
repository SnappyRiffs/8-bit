#include "OctalBusTransceivers.h"
#include "implements.h"

class EightBit {
private:
    implements::Array BUS_;

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

    implements::Array reg_A(int AI, int AO, int CLK, int CLR, implements::Array BUS) {
        // Assign BUS to BUS_
        BUS_ = BUS;
        return BUS_;
    }

    implements::Array reg_B(int BI, int BO, int CLK, int CLR, implements::Array BUS) {
        // Just reuses reg_A
        return reg_A(BI, BO, CLK, CLR, BUS);
    }
};



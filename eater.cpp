#include "OctalBusTransceivers.h"
#include "implements.h"
#include <array>

class EightBit {
private:
    std::array<int, 8> BUS_;

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

    std::array<int, 8> reg_A(int AI, int AO, int CLK, int CLR, std::array<int, 8> BUS) {
        // Assign BUS to BUS_
        BUS_ = BUS;
        return BUS_;
    }

    std::array<int, 8> reg_B(int BI, int BO, int CLK, int CLR, std::array<int, 8> BUS) {
        // Just reuses reg_A
        return reg_A(BI, BO, CLK, CLR, BUS);
    }
};

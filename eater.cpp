#include "_74LS245.h"
#include "implements.h"
#include <array>

class EightBit{
	int clock(int HLT, int mode, int CLK, int SS){
		int out = 0;
		if (!HLT){	
			if (mode){
				out = CLK;
			}
			else{
				out = SS;
			}
		}
		return out;
	}
	std::array<int, 8> reg_A (int AI, int AO, int CLK, int CLR, std::array<int, 8> BUS){
		return BUS; // placeholder

		auto result = _74LS245::transfer(AI, AO, BUS, BUS);
	}

	std::array<int, 8> reg_B (int BI, int BO, int CLK, int CLR, std::array<int, 8> BUS){
		return reg_A(BI, BO, CLK, CLR, BUS);
	}
}



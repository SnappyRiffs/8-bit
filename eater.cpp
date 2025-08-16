#include "74LS245.h"
#include "implements.h"
#include <array>

class EightBit{
	bool clock(bool HLT, bool mode, bool CLK, bool SS){
		bool out = 0;
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
	std::array<bool, 8> reg (bool invAI, bool invAO, bool CLK, bool CLR, std::array<bool, 8> BUS){
		return BUS; // placeholder
	}
}

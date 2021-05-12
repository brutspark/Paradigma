#ifndef CLK_H
#define CLK_H

#include <iostream>
#include <fstream>
#include <unistd.h>
using namespace std;

class CLK {

	private:
		bool clk_val = false;

public:
	void delay(int delay);
	
	bool clock(bool EN);	
};

void CLK::delay(int delay){

	for(int i = 0; i < delay; ++i){
		usleep(1);	
	}
}

bool CLK::clock(bool EN) {

	ofstream clk_file;
	clk_file.open("clk_out.bin");

	if(EN==true){
		for(;;) {
		
			delay(1);
			clk_val = 1;
			clk_file << clk_val;
			delay(1);
			clk_val = 0;
			clk_file << clk_val;
			
			
		}
		clk_file.close();
	} else
		if(EN==false){
			
		return 0;
	}
}


#endif

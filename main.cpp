#include "clock.h"



int main(void){

	CLK clock1;

	clock1.clock(1);


	ifstream CLK_IN;
	
	ifstream button_in;

	ofstream led_out;

	CLK_IN.open("clk_out.bin");

	button_in.open("button.bin");
	
	led_out.open("led_out.bin");

	char in_a = 0;
	char in_b = 0;

	while(button_in.eof() ){
		
		button_in.get(in_a);
		CLK_IN.get(in_b);

		led_out << ( in_a & in_b);


		cout << in_a << endl;
		cout << in_b << endl;

	}
	
	CLK_IN.close();
	button_in.close();
	led_out.close();
	
		
	


return 0;
}

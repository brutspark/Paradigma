// clock generation 1 second
//
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
using namespace std;

void delay(int delay) {

	for(int i = 0; i < delay; i++) {
	
		
		usleep(1);
	}	
}


bool clock(bool EN){

	if(EN==true){
		for (;;) {
			delay(1);
			cout << 1;
			delay(1);
			cout << 0;
		}
	}
	else if(EN==false) {
		return 0;
	}
}


bool transistor(bool E, bool C, bool B){
	
	if ( B == true  && C == true ) {
		E = true;
		return E;
	}
	else if ( B == false && C == true){
	
		E = false;
		return E;
	}
}



int main(void) {

	/* for (int i = 0; i < 10; i++ ){
		cout << 1 << endl;
		delay(100);
		cout << 0 << endl;
		delay(100);
	}*/

	for(int i = 0; i < 1; i++){
	
	//	cout << clock(1) << endl;

		cout << transistor(clock(1), true, true) << endl;
	}

	return 0;
}


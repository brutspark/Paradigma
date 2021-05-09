#include <iostream>
#include <iomanip>
#include <unistd.h>
using namespace std;


bool SR_latch(bool S, bool R){

	bool Q;
	bool nQ;

	if(S==false && R==false){
		Q = 1;
		nQ = 0;
		cout << Q << endl;
		cout << nQ << endl;
	}
	else 
		if(S==false && R==true){
		Q=0;
		nQ=1;
		cout << Q << endl;
		cout << nQ << endl;
	}else 
		if(S==true && R==false){

		Q=true;
		nQ=false;
		cout<<Q<<endl;
		cout<<nQ<<endl;
	}else
		if(S==true && R==true){
		
			Q=0;
			nQ=0;
			cout<<Q<<endl;
			cout<<nQ<<endl;
		}

}

int main(void){


	SR_latch(1,0);

	return 0;
}

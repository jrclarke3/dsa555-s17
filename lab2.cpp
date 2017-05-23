//to compile: g++ lab2.cpp timer.cpp -std=c++0x
#include "timer.h"
unsigned int factorial (unsigned int n);
double power (double base, unsigned int n);
unsigned int fibonacci (unsigned int n);


int main(void){
	Timer T;
	T.start();
	fibonacci(35);
	T.stop();
	cout << "it took: " << T.currtime() << " seconds"<<endl;
}	
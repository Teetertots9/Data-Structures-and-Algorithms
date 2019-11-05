#include <iostream>
using namespace std;


int main() {

	double* d = new double[3]; //array was not given an actual size.

	for (int i = 0; i < 3; i++) {
		d[i] = 1.5 + i;
	}

	for (int i = 2; i >= 0; i--) {
		cout << d[i] << endl;
	} //using Unsigned int causes it to loop indefinitely
	
	delete[] d;//Not deleted, will result in issues with memory later on

	return 0;
}
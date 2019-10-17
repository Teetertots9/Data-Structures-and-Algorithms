#include "Percent.h"
#include <iostream>
using namespace std;

int main()
{
	Percent pA = Percent();
	Percent pB = Percent();
	
	cin >> pA;
	cin >> pB;

	cout << pA;
	cout << pB;
	cout << endl;

	cout << pA + pB;
	cout << endl;

	cout << pA - pB;
	cout << endl;

	cout << pA * pB;
	cout << endl;

	if (pA == pB) {
		cout << "True";
		cout << endl;
	}
	else {
		cout << "False";
		cout << endl;
	}

	if (pA < pB) {
		cout << "True";
		cout << endl;
	}
	else {
		cout << "False";
		cout << endl;
	}



	return 0;
}
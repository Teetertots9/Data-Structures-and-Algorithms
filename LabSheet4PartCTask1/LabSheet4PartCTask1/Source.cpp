#include "Percent.h"
#include "Money.h"
#include <iostream>
using namespace std;

int main()
{
	//Percent Part
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

	//Money Part
	Money aMoney = Money(44);
	Money bMoney = Money(33);

	cout << aMoney << endl;
	cout << aMoney - bMoney << endl;
	cout << aMoney * 12 << endl;
	cout << aMoney / 2 << endl;

	if (aMoney == bMoney) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	if (aMoney < bMoney) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	if (aMoney > bMoney) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	return 0;
}
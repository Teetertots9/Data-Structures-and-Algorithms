#include "Percent.h"
#include <iostream>
using namespace std;

Percent::Percent() {
	value = 0;
}

int operator +(const Percent& first, const Percent& second) {
	return  first.value + second.value;
}

int operator -(const Percent& first, const Percent& second) {
	return  first.value - second.value;
}

int operator *(const Percent& first, const Percent& second) {
	return  (first.value * second.value) / 100;
}

bool operator ==(const Percent& first, const Percent& second) {
	return first.value == second.value;
}

bool operator <(const Percent& first, const Percent& second) {
	return  first.value < second.value;
}

istream& operator >>(istream& inputStream, Percent& aPercent) {
	cout << "Please enter Percentage";
	inputStream >> aPercent.value;
	return inputStream;
}

ostream& operator <<(ostream& outputStream, const Percent& aPercent)
{
	outputStream << aPercent.value << "%" << endl;
	return outputStream;
}

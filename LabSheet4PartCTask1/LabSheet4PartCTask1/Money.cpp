#include"Money.h"
#include <iostream>
using namespace std;

Money::Money() {
	value = 0;
}

Money::Money(int value) {
	this->value = value;
}
int operator -(const Money& first, const Money& second) {
	return first.value - second.value;
}

int operator *(const Money& first, int second) {
	return first.value * second;
}

int operator /(const Money& first, float second) {
	return (int)first.value / second;
}

bool operator ==(const Money& first, const Money& second) {
	return first.value == second.value;
}

bool operator <(const Money& first, const Money& second) {
	return first.value < second.value;
}

bool operator >(const Money& first, const Money& second) {
	return first.value > second.value;
}

ostream& operator <<(ostream& outputStream, const Money& aMoney) {
	outputStream << aMoney.value;
	return outputStream;
}

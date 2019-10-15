#include "Percent.h"
#include <iostream>
using namespace std;

Percent::Percent() {
	value = 0;
}
const Percent::+(const Percent& first, const Percent& second) {
	Percent temp;
	temp.value = first.value + second.value;
	return temp;
}

int Percent::-(const Percent& first, const Percent& second) {
	Percent temp;
	temp.value = first.value - second.value;
	return temp;
}

int Percent::*(const Percent& first, const Percent& second) {
	Percent temp;
	temp.value = (first.value * second.value) / 100;
	return temp;
}

bool Percent::==(const Percent& first, const Percent& second) {
	bool output = false;
	if (first == = second) {
		output = true;
	}
	return output;
}

bool Percent::<(const Percent& first, const Percent& second) {
	bool output = false;
	if (first < second) {
		output = true;
	}
	return output;
}

instream& Percent::>>(istream& inputStream, Percent& aPercent) {
	cout << "Please enter Percentage";
	inputStream >> aPercent.value;
	return inputStream;
}

outstream& Percent::<<(outstream& outputStream, Percent& aPercent) {
	outputStream << input << "%" << endl;
	return outputStream;
}
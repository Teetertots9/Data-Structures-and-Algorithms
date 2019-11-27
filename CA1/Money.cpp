#include "Money.h"
#include <iostream>
using namespace std;

Money::Money() {
	majorUnit = 0;
	minorUnit = 0;
}

Money::Money(int major, int minor) {
	majorUnit = major;
	minorUnit = minor;
}

const Money Money::percent(int percentFigure) const
{
	Money temp;
	cout << "enter values of object" << endl;
	cin >> temp.majorUnit >> temp.minorUnit;
	temp.majorUnit = (int)( temp.majorUnit * percentFigure) / 100;
	temp.minorUnit = (int)(temp.minorUnit * percentFigure) / 100;
	return temp;
}

ostream& operator <<(ostream& outputStream, const Money& aMoney) {
	outputStream << "$" <<aMoney.majorUnit << "." << aMoney.minorUnit <<endl;
	return outputStream;
}

istream& operator >>(istream& inputStream, Money& aMoney) {
	cout << "please enter Major Unit" << endl;
	inputStream >> aMoney.majorUnit;
	cout << "please enter minor unit" << endl;
	inputStream >> aMoney.minorUnit;
	return inputStream;
}

string Money::operator +(const Money& moneyIn) {
	string s = "$";
	s += majorUnit + moneyIn.majorUnit;
	s += ".";
	s += minorUnit + moneyIn.minorUnit;
		return s;
}

string Money::operator -(const Money& moneyIn) {
	string s = "$";
	s += majorUnit - moneyIn.majorUnit;
	s += minorUnit - moneyIn.minorUnit;
	return s;
}

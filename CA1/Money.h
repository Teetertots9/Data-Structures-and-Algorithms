#ifndef MONEY_H
#define MONEY_H
#pragma once
#include <iostream>
using namespace std;

class Money {

	friend string operator +(const Money& first, const Money& second);
	friend string operator -(const Money& first, const Money& second);
	friend ostream& operator <<(ostream& outputStream, const Money& aMoney);
	friend istream& operator >>(istream& inputStream, Money& aMoney);

public:
	Money();
	Money(int major, int minor);
	
	const Money percent(int percentFigure) const;

private:
	int majorUnit;
	int minorUnit;

};

#endif // !MONEY_H

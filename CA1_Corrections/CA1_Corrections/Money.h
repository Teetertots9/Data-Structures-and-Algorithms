#ifndef MONEY_H
#define MONEY_H
#pragma once
#include <iostream>
using namespace std;

class Money {


	friend ostream& operator <<(ostream& outputStream, const Money& aMoney);
	friend istream& operator >>(istream& inputStream, Money& aMoney);

public:
	Money();
	Money(int major, int minor);

	const Money percent(int percentFigure) const;
	const Money operator +(const Money& moneyIn);
	const Money operator -(const Money& moneyIn);

private:
	int majorUnit;
	int minorUnit;

};

#endif // !MONEY_H

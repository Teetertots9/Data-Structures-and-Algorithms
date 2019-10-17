#ifndef MONEY_H
#define MONEY_H
#pragma once
#include <iostream>
using namespace std;

class Money {
public:
	friend int operator -(const Money& first, const Money& second);
	friend int operator *(const Money& first, int second);
	friend int operator /(const Money& first, float second);
	friend ostream& operator <<(ostream& outputStream, const Money& aMoney);
	friend bool operator ==(const Money& first, const Money& second);
	friend bool operator <(const Money& first, const Money& second);
	friend bool operator >(const Money& first, const Money& second);
	Money();
	Money(int value);
private:
	int value;

};
#endif



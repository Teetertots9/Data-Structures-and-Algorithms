#ifndef PERCENT_H
#pragma once
#define PERCENT_H
#include <iostream>
using namespace std;


class Percent 
{
public:
	friend bool operator ==(const Percent& first,
		const Percent& second);
	friend bool operator <(const Percent& first,
		const Percent& second);
	Percent();
	friend istream& operator >>(istream& inputStream,
		Percent& aPercent);
	friend ostream& operator <<(ostream& outputStream,
		const Percent& aPercent);
	friend Percent operator +(const Percent& first, const Percent& second);
	friend Percent operator -(const Percent& first, const Percent& second);
	friend Percent operator *(const Percent& first, const Percent& second);
private:
	int value;
};
#endif 



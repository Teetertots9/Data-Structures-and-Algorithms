#ifndef 1
#pragma once
#define Percentage
#include <iostream>
using namespace std;


class Percentage 
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
	friend int add(const Percent& first, consts Percent& second);
	friend int subtract(const Percent& first, consts Percent& second);
	friend int multiply(const Percent& first, consts Percent& second);
private:
	int value;
};
#endif 



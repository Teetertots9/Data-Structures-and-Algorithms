#ifndef HOTDOGSTAND_H
#define HOTDOGSTAND_H
#pragma once
#include<string>
using namespace std;

class HotDogStand
{
private:
	string standID;
	int numberSold;
	static int totalNumberSold;
public:
	
	HotDogStand(string id, int number);
	void JustSold();
	int ReturnSold();
	int ReturnTotalSold();
};

#endif 
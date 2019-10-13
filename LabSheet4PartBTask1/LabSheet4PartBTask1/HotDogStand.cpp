#include<string>
#include "HotDogStand.h"

int HotDogStand::totalNumberSold = 0;

HotDogStand::HotDogStand(string id, int number)
{
	standID = id;
	numberSold = number;
	totalNumberSold += number;
}
void HotDogStand::JustSold()
{
	numberSold++;
	totalNumberSold++;
}
int HotDogStand::ReturnSold()
{
	return numberSold;
}
int HotDogStand::ReturnTotalSold()
{
	return totalNumberSold;
}
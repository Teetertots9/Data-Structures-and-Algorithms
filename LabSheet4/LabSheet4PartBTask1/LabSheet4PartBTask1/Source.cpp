#include<iostream>
#include "HotDogStand.h"
using namespace std;

int main()
{
	HotDogStand h1 = HotDogStand("001", 1);
	HotDogStand h2 = HotDogStand("002", 3);
	HotDogStand h3 = HotDogStand("003", 5);

	h1.JustSold();
	h1.JustSold();
	h1.JustSold();
	h2.JustSold();

	int numSold = h1.ReturnSold();
	cout << numSold<< endl;
	numSold = h2.ReturnSold();
	cout << numSold << endl;
	numSold = h3.ReturnSold();
	cout << numSold << endl;
	numSold = h1.ReturnTotalSold();
	cout << numSold << endl;


	return 0;
}
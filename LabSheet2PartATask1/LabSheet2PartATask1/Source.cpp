#include<iostream>
using namespace std;

int main()
{
	const float CHOCOLATE_BAR_PRICE = 1.50;
	float moneyForChocolate = 0.0;
	int numChocoBars = 0;
	int numChocoBarsOutput = 0;
	const int COUPONS_FOR_FREE_BAR = 9;
	int numCoupons = 0;

	cout << "Please enter the amount of euro you wish to spend on chocolate bars: " << endl;
	cin >> moneyForChocolate;

	numChocoBars = moneyForChocolate / CHOCOLATE_BAR_PRICE;
	numCoupons = numChocoBars;
	numChocoBarsOutput = numChocoBars;

	while (numCoupons >= COUPONS_FOR_FREE_BAR) {
		numChocoBars -= COUPONS_FOR_FREE_BAR;
		numCoupons -= COUPONS_FOR_FREE_BAR;
		numChocoBarsOutput++;
		numCoupons++;
	}

	cout << "Number of Chocolate bars bought for €" << moneyForChocolate << " is " << numChocoBarsOutput << endl;;
	cout << "Number of leftover coupons is " << numCoupons << endl;







	return 0;
}
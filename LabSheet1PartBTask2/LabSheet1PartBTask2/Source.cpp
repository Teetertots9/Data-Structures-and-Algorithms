#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inStream;
	ofstream outStream;
	double prevAnnualPay = 0.0;
	double backPay = 0.0;
	double newAnnualPay = 0.0;
	double newMonthlySal = 0.0;
	const double PAY_INCREASE = 1.076;

	inStream.open("inFile.txt");
	inStream >> prevAnnualPay;
	inStream.close();

	newAnnualPay = prevAnnualPay * PAY_INCREASE;
	backPay = newAnnualPay - prevAnnualPay;
	newMonthlySal = newAnnualPay / 12;

	outStream.open("inFile.txt");
	outStream << backPay << "," << newAnnualPay << "," << newMonthlySal;
	outStream.close();






	return 0;
}
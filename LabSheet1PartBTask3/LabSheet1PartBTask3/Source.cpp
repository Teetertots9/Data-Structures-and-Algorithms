#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	ifstream inStream;
	ofstream outStream;
	string empName;
	double empSalary;
	double backPay;
	double newAnnualSalary;
	double newMonthlySalary;
	const double PAY_INCREASE = 1.076;
	int counter = 0;

	inStream.open("empFile.txt");
	outStream.open("newEmpFile.txt");

	inStream >> empName >> empSalary;
	while(!inStream.fail())
	{
		newAnnualSalary = empSalary * PAY_INCREASE;
		backPay = newAnnualSalary - empSalary;
		newMonthlySalary = newAnnualSalary / 12;
		outStream << empName << ", " << backPay << ", " << newAnnualSalary << ", " << newMonthlySalary << endl;
		counter++;

		inStream >> empName >> empSalary;
	}
	outStream << "Number of employees processed: " << counter;

	inStream.close();
	outStream.close();





	return 0;
}
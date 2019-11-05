#include<iostream>
using namespace std;

int main()
{
	double grossPay = 0.0;
	double hourlyRate = 0.0;
	int noHours = 0;
	const int STRAIGHT_TIME = 40;
	const double TIME_AND_HALF = 1.5;
	double overTimePay = 0.0;
	int control = 0;
	char test;

	while (control == 0)
	{
	cout << "Please enter the number of hours the employee worked." << endl;
	cin >> noHours;
	cout << endl << "Please enter the hourly rate of the employee." << endl;
	cin >> hourlyRate;

	if (noHours > STRAIGHT_TIME) {
		overTimePay = hourlyRate * TIME_AND_HALF;
		grossPay = (hourlyRate * STRAIGHT_TIME) + (overTimePay * (noHours - STRAIGHT_TIME));
	}
	else {
		grossPay = hourlyRate * noHours;
	}
	cout << endl << "Gross Pay for employee is: €" << grossPay << endl;
	cout << "Do you wish to enter another employees details? Y/N" << endl;
	cin >> test;
	if (test == 'N' || test == 'n') {
		control = 1;
	}
	}
	return 0;
}
#include<iostream>
using namespace std;



bool timeConversion(int h, int m, int s) 
{
	
	const char AM = 'A';
	const char PM = 'P';
	const int HOUR_CONTROL = 24;
	const int HOUR_CONVERSION = 12;
	const int MINUTE_SECOND_CONTROL = 60;
	if (h > HOUR_CONTROL) {
		return false;
	} else if (m > MINUTE_SECOND_CONTROL) {
		return false;
	} else if (s > MINUTE_SECOND_CONTROL) {
		return false;
	} else {
		if (h > HOUR_CONVERSION) {
			h = h % HOUR_CONVERSION;
			cout << h << ":" << m << ":" << s << PM << 'M' << endl;
			return true;
		}
		else {
			cout << h << ":" << m << ":" << s << AM << 'M' << endl;
			return true;
		}
	}
}

int main()
{
	int hours = 0;
	int minutes = 0;
	int seconds = 0;
	bool control1 = false;
	char control2 = 'a';
	const char AM = 'A';
	const char PM = 'P';
	const int HOUR_CONTROL = 24;
	const int MINUTE_SECOND_CONTROL = 60;




	while (!control1) {
		cout << "Please input the time in hours, minutes and seconds" << endl;
		cin >> hours;
		cin >> minutes;
		cin >> seconds;
		if (!timeConversion(hours, minutes, seconds))
		{
			while (!timeConversion(hours, minutes, seconds)) {
				cout << "Incorrect time Given Please enter a correct time" << endl;
				cin >> hours;
				cin >> minutes;
				cin >> seconds;
				timeConversion(hours, minutes, seconds);
			}
		}


		cout << "Do you wish to enter another time? Y/N" << endl;
		cin >> control2;

		if (control2 == 'N' || control2 == 'n') {
			control1 = true;
		}

	}










	return 0;
}
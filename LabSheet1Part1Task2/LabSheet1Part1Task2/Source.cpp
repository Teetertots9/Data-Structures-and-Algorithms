#include<iostream>
using namespace std;
int main()
{
	const double CAN_OF_SODA = 3.3;
	const double SWEETNER = 0.001;
	const double SWEETNER_PER_CAN = CAN_OF_SODA * SWEETNER;
	double sweetnerToKillMouse = 0;
	double sweetnerToKillHuman = 0;
	double weightMouse = 0;
	double weightDieter = 0;
	double dietSodaBeforeDeath = 0;

	cout << "How much sweetner does it take to kill a mouse in ml?" << endl;
	cin >> sweetnerToKillMouse;
	cout << endl << "How much does the mouse weight in mg?" << endl;
	cin >> weightMouse;
	cout << endl << "What is the weight the dieter will stop dieting at in kg?" << endl;
	cin >> weightDieter;

	sweetnerToKillHuman = (weightDieter / weightMouse) * sweetnerToKillMouse;
	dietSodaBeforeDeath = sweetnerToKillHuman / SWEETNER_PER_CAN;

	cout << endl << "Amount of soda the dieter can drink before death is: " << dietSodaBeforeDeath << " cans";

	return 0;
}
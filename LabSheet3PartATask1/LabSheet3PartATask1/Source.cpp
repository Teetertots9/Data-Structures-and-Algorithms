#include<iostream>
using namespace std;

const int FIVE = 5;
void InputAndAverage5();
void Average5(float f[]);
void AverageN(float f[], int length);
int main() {

	InputAndAverage5();
	float input[5];
	for (size_t i = 0; i < FIVE; i++)
	{
		cout << "Please enter decimal value number " << i + 1 << endl;
		cin >> input[i];
		cout << endl;
	}

	Average5(input);
	int aLength = 0;
	cout << "please enter the size fo the array" << endl;
	cin >> aLength;

	float* input2 = new float[aLength];
	for (size_t i = 0; i < aLength; i++)
	{
		cout << "Please enter decimal value number " << i + 1 << endl;
		cin >> input2[i];
		cout << endl;
	}

	AverageN(input2, aLength);

	delete [] input2;
	return 0;
}

void InputAndAverage5()
{
	float f[FIVE];
	float average = 0;
	for (size_t i = 0; i < FIVE; i++)
	{
		cout << "Please enter decimal value number " << i + 1 << endl;
		cin >> f[i];
		cout << endl;
	}
	for (size_t i = 0; i < FIVE; i++)
	{
		average += f[i];
	}
	average = average / FIVE;

	cout << "The average is: " << average << endl;

	for (size_t i = 0; i < FIVE; i++)
	{

		if (f[i] - average < 0) {
			cout << "To get the average of value " << i + 1 << " you must add/subtract: " << (f[i] - average) * -1 << endl;
		}
		else {
			cout << "To get the average of value " << i + 1 << " you must add/subtract: " << f[i] - average << endl;
		}
	}
}

void Average5(float f[])
{
	float average = 0;
	for (size_t i = 0; i < FIVE; i++)
	{
		average += f[i];
	}
	average = average / FIVE;

	cout << "The average is: " << average << endl;

	for (size_t i = 0; i < FIVE; i++)
	{

		if (f[i] - average < 0) {
			cout << "To get the average of value " << i + 1 << " you must add/subtract: " << (f[i] - average) * -1 << endl;
		}
		else {
			cout << "To get the average of value " << i + 1 << " you must add/subtract: " << f[i] - average << endl;
		}
	}
}

void AverageN(float f[], int length)
{
	float average = 0;
	for (size_t i = 0; i < length; i++)
	{
		average += f[i];
	}
	average = average / length;

	cout << "The average is: " << average << endl;

	for (size_t i = 0; i < length; i++)
	{

		if (f[i] - average < 0) {
			cout << "To get the average of value " << i + 1 << " you must add/subtract: " << (f[i] - average) * -1 << endl;
		}
		else {
			cout << "To get the average of value " << i + 1 << " you must add/subtract: " << f[i] - average << endl;
		}
	}
}
#include<iostream>
using namespace std;


void inputLottoNumbers(double lottoNumbers[], int& size);
void outputNumbers(double lottoNumbers[], int& size);
void calcAverage(double lottoNumbers[], int& size);
void invertNumbers(double lottoNumbers[], int& size);
void outputMiddle(double lottoNumbers[], int& size);


int main() {

	double lottoNumbers[12];
	int size = 0;

	inputLottoNumbers(lottoNumbers, size);
	outputNumbers(lottoNumbers, size);
	calcAverage(lottoNumbers, size);
	invertNumbers(lottoNumbers, size);
	outputMiddle(lottoNumbers, size);



	return 0;
}

void inputLottoNumbers(double lottoNumbers[], int& size) 
{
	int control1 = 0;
	for (size_t i = 0; i < 12; i++)
	{
		cout << "Input lotto number " << (i + 1) << endl;
		if (cin >> control1) {
			if (size < 12) {
				lottoNumbers[i] = control1;
				size++;
			}
			else {
				i = 99;
			}
		}
		else {
			i = 99;
		}
	}
}

void outputNumbers(double lottoNumbers[], int& size) 
{
	for (size_t i = 0; i < size; i++)
	{
		cout << lottoNumbers[i] << " ";
	}
	cout << endl;
}

void calcAverage(double lottoNumbers[], int& size) 
{
	double average = 0;

	for (size_t i = 0; i < size; i++) {
		average += lottoNumbers[i];
	}
	average = average / size;
	cout << "Average is: " << average << endl;
}

void invertNumbers(double lottoNumbers[], int& size) 
{
	cout << "Reverse order: " << endl;
	double lottoReverse[12];
	int counter = size;
	for (int i = 0; i < size; i++)
	{
		lottoReverse[i] = lottoNumbers[counter - 1];
		cout << lottoReverse[i] << " " << endl;
		counter--;
	}
}

void outputMiddle(double lottoNumbers[], int& size) 
{
	cout << "Middle numbers: " << endl;
	int control2 = size - 1;
	int control3 = size - 2;
	for (size_t i = 0; i < size; i++)
	{
		if (i != 0) {
			if (i != 1) {
				if (i != control2) {
					if (i != control3) {
						cout << lottoNumbers[i] << " " << endl;
					}
				}
			}
		}
	}
}
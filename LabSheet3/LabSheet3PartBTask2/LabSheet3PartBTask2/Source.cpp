#include<iostream>
using namespace std;


void inputDonations(double donations[], int& numDonations);
void reportAverage(double donations[], int& numDonations);
int main() 
{


	double donations[10];
	int numDonations = 0;

	inputDonations(donations, numDonations);
	reportAverage(donations, numDonations);


	return 0;
}

void inputDonations(double donations[], int& numDonations)
{
	double control2 = 0;
	for (size_t i = 0; i < 10; i++)
	{
		cout << "Please input a donation" << endl;
		if (cin >> control2) {
			if (numDonations > 9) {
				i = 99;
			}
			else {
				donations[i] = control2;
				numDonations++;
			}
		}

		else {
			i = 99;
		}
	}
}

void reportAverage(double donations[], int& numDonations)
{
	double average = 0;
	for (size_t i = 0; i < numDonations; i++)
	{
		average += donations[i];
	}
	average = average / numDonations;

	cout << "Average is: " << average << " and the number of donations is: " << numDonations << endl;

}

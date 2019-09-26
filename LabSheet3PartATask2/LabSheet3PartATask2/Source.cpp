#include<iostream>
#include<string>
#include<string.h>
using namespace std;
const int SEVEN = 7;
const int FIVE = 5;


int main()
{
	string seats[SEVEN][FIVE];
	for (size_t i = 0; i < SEVEN; i++)
	{
		seats[i][0] = to_string(i + 1);

		for (size_t j = 1; j < FIVE; j++)
		{
			switch(j){
			case 1:
				seats[i][j] = "A";
				break;
			case 2:
				seats[i][j] = "B";
				break;
			case 3:
				seats[i][j] = "C";
				break;
			case 4:
				seats[i][j] = "D";
				break;
			}
		}

	}

	for (size_t i = 0; i < SEVEN; i++)
	{
		cout << seats[i][0] << " ";
		for (size_t j = 1; j < FIVE; j++)
		{
			cout << seats[i][j] << " ";
		}
		cout << endl;
	}
	string seatRow = " ";
	string seat = " ";

	cout << "please enter desired seat row number and seat" << endl;
	cin >> seatRow;
	cin >> seat;
	bool control = false;
	int result1, result2 = 1;
	for (size_t i = 0; i < SEVEN; i++)
	{
		result1 = strncmp(seats[i][0], seatRow);
		for (size_t j = 1; j < FIVE; j++)
		{
			result2 = strncmp(seats[i][j], seat);
			if (result1 == 0) {
				if (result2 == 0) {
					seats[i][j] = "X";
					control = true;
				} 
			}
		}
	}
	while(!control) {
		cout << "Please enter a valid seat" << endl;
		cin >> seatRow;
		cin >> seat;
		for (size_t i = 0; i < SEVEN; i++)
		{
			for (size_t j = 1; j < FIVE; j++)
			{
				if (seats[i][0].compare(seatRow)) {
					if (seats[i][j].compare(seat)) {
						seats[i][j] = "X";
						control = true;
						i = SEVEN;
						j = FIVE;
					}
				}
			}
		}
	}

	for (size_t i = 0; i < SEVEN; i++)
	{
		cout << seats[i][0] << " ";
		for (size_t j = 1; j < FIVE; j++)
		{
			cout << seats[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
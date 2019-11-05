#include<iostream>
#include<algorithm>
using namespace std;


bool fillArray(char characters[], int& counter);

void outputInReverse(char characters[], int& counter);

int main() {



	char characters[100];
	int counter = 0;


	fillArray(characters, counter);
	outputInReverse(characters, counter);







	return 0;
}

bool fillArray(char characters[], int& counter) {
	char control = 'x';

	cout << "Please input characters, input a '.' to end the input" << endl;
	while (control != '.') {
		cin >> control;
		if (control != '.') {
			characters[counter] = control;
			counter++;
		} 
	}
	if (control == '.') {
		cout << "Number of entries: " << counter << endl;
		return true;

	}
	else {
		return false;
	}
}


void outputInReverse(char characters[], int& counter) {
	
	char charreverse[100];
	int size = counter;
	for (int i = 0; i < size; i++)
	{
		charreverse[i] = characters[counter - 1];
		cout << charreverse[i] << endl;
		counter--;
	}
	
	
}
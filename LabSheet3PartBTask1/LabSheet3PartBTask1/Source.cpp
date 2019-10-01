#include<iostream>
using namespace std;


bool fillArray();

void outputInReverse() {

}

int main() {






	







	return 0;
}

bool fillArray() {
	char characters[100];
	char control = 'x';
	int counter = 0;

	cout << "Please input characters, input a '.' to end the input" << endl;
	while (control != '.') {
		cin >> control;
		if (control != '.') {
			cin >> characters[counter];
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
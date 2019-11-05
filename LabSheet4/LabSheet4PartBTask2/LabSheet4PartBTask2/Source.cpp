#include <iostream>
using namespace std;

//Which is better i++ or ++i? = It depends, but mostly ++i
int main()
{
	for (int i = 0; i < 10; i++) {
		cout << i << " ";
	}
	cout << endl;
	for (int i = 0; i < 10; ++i) {
		cout << i << " ";
	}
	cout << endl;
	for (int i = 0; i++ < 10;) {
		cout << i << " ";
	}
	cout << endl;
	for (int i = 0; ++i < 10;) {
		cout << i << " ";
	}
	//in the first two loops the i value is incremented when the loop iterates while in the second two the i value increments before the loop iterates.
}
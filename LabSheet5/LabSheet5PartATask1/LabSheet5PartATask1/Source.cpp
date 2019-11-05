#include "ITIntVector.h"
#include <iostream>
using namespace std;

int main() {
	cout << "Constructor" << endl;
	ITIntVector v1, v2;

	cout << "Size Method" << endl;
	cout << v1.size() << " " << v2.size() << endl;

	cout << "Capacity Method" << endl;
	cout << v1.capacity() << " " << v2.capacity() << endl;

	cout << "Push Back + resize Method" << endl;
	v1.push_back(3);
	v2.push_back(3);
	cout << v1.capacity() << " " << v2.capacity() << endl;

	cout << "at Method" << endl;
	cout << v1.at(2) << " " << v2.at(3) << endl;

	cout << "[] operator" << endl;
	cout << v1[1] << " " << v2[2] << endl;

	cout << "Destructor" << endl;
	v1.~ITIntVector();
	v2.~ITIntVector();

	return 0;
}
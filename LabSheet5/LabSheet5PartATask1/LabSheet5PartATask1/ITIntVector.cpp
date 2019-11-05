#include "ITIntVector.h"
#include <iostream>
using namespace std;

ITIntVector::ITIntVector(): n(10), cap(10) {
	
	arrPtr = new int[cap];
	for (size_t i = 0; i < cap; i++)
	{
		arrPtr[i] = 0;
	}

}

ITIntVector::~ITIntVector()
{
	delete[] arrPtr;
}

int ITIntVector::size()
{
	return n;
}

void ITIntVector::push_back(int x)
{
	if (n >= cap) {
		resize( cap * 2);
	}
	arrPtr[n] = x;
	++n;
}

void ITIntVector::resize(int i)
{
	

	if (i > cap) {
		int* new_arr = new int[i];   // allocate a new array on the free store
		for (int i = 0; i < cap; ++i) { // copy old vector into new one
			new_arr[i] = arrPtr[i];
		}
		cap = i;

		delete[] arrPtr;                       // delete the old vector
		arrPtr = new_arr;
		
	}
	else if (i < cap) {
		cap = i;
		int* new_arr = new int[i];   // allocate a new array on the free store
		for (int i = 0; i < cap; ++i) { // copy old vector into new one
			new_arr[i] = arrPtr[i];
		}

		delete[] arrPtr;                       // delete the old vector
		arrPtr = new_arr;
		
	}
	else {
		cout << "array is same size as desired size" << endl;
	}
}

int& ITIntVector::operator[](int i)
{
	
	return arrPtr[i];
}

const int& ITIntVector::operator[](int i) const
{
	
	return arrPtr[i];
}

int ITIntVector::capacity()
{
	return cap;
}

int ITIntVector::at(int i)
{
	if (i < 0 || i >= n){
		return -1;
	}
	else {
		return arrPtr[i];
	}
	}

const int ITIntVector::at(int i) const
{
	if (i < 0 || i >= n) {
		return -1;
	}
	else {
		return arrPtr[i];
	}
}

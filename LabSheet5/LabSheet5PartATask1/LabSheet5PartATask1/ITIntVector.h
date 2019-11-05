#ifndef ITINTVECTOR_H
#define ITINTVECTOR_H
#pragma once
//used code from https://www2.cs.sfu.ca/CourseCentral/125/tjd/vector_example.html
class ITIntVector {
private:
	int* arrPtr;	//pointer
	int cap;	//number of elements arr can hold
	int n;	//size of this object

public:
	ITIntVector();
	~ITIntVector();
	int size();
	void push_back(int x);
	void resize(int i);
	int& operator[](int i);
	const int& operator[](int i) const;
	int capacity();
	int at(int);
	const int at(int i) const;

};
#endif // !ITINT

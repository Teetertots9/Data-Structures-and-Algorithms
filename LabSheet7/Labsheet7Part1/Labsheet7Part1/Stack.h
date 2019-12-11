#ifndef STACK_H
#define STACK_H
#pragma once
#include "ListOfDoubles.h"

class Stack
{
	friend  ostream& operator<<(ostream& outputStream, Stack& theStack);
public:

	Stack(ListOfDoubles dlist);
	void push(double val);
	void pop();
	double top();

private:
	ListOfDoubles list;
};
#endif
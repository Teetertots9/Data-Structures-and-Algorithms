#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack(ListOfDoubles dlist)
{
	list = dlist;
}

void Stack::push(double val)
{
	list.insert(val);
}

void Stack::pop()
{
	list.deleteMostRecent();
}

double Stack::top()
{
	DoubleListNode* temp = list.getHead();
	return temp->getDouble();
}

ostream& operator<<(ostream& outputStream, Stack& theStack)
{
	DoubleListNode* temp = theStack.list.getHead();
	while (temp)
	{
		outputStream << temp->getDouble() << endl;
		temp = temp->getNext();
	}
	return outputStream;
}
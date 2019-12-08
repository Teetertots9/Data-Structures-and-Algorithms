#ifndef LISTOFDOUBLES_H_
#define LISTOFDOUBLES_H_

#include <iostream>
using namespace std;

class DoubleListNode
{
	friend class ListOfDoubles;
public:
	DoubleListNode(double = 0);
	double getDouble();
	DoubleListNode* getNext();
private:
	double theValue;
	DoubleListNode* next;
};

class ListOfDoubles
{
	friend  ostream& operator<<(  ostream& outputStream, ListOfDoubles& dList);
public:
	ListOfDoubles();
	~ListOfDoubles();
	void insert(double);
	void displayList(ostream& str) const;
	double deleteMostRecent();
	double deleteDouble(int pos);
	void push(double val);
	void pop();
	double top();
private:
	DoubleListNode* head;
};
#endif
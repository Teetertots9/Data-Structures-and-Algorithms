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
	
public:
	ListOfDoubles();
	~ListOfDoubles();
	void insert(double);
	void displayList(ostream& str) const;
	double deleteMostRecent();
	double deleteDouble(int pos);
	DoubleListNode* getHead();
private:
	DoubleListNode* head;
};
#endif
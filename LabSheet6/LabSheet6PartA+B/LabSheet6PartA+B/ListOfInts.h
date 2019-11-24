#ifndef LISTOFINTS_H
#define LISTOFINTS_H
#pragma once
#include "NodeofInt.h"

class ListOfInts
{
private:

	NodeofInt* head;


public:
	void insert(int i);
	void displayList();
	int deleteMostRecent();
	void deleteInt(int pos);
	ListOfInts();
	~ListOfInts();
};

#endif
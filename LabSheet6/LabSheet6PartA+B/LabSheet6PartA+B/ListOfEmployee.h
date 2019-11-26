#ifndef LISTOFEMPLOYEE_H
#define LISTOFEMPLOYEE_H
#pragma once
#include "NodeOfEmployee.h"
#include <iostream>
using namespace std;

class ListOfEmployee {

	friend class NodeOfEmployee;
	friend ostream& operator <<(ostream& outputStream, ListOfEmployee& empList);

private:
	NodeOfEmployee* emphead;
public:
	void insertAtFront(string s, double d);
	void deleteMostRecent();
	double getSalary(string name);
	ListOfEmployee();
	NodeOfEmployee* getHead();

	

};
#endif // !"LISTOFEMPLOYEE_H"
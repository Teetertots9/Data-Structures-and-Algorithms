#ifndef LISTOFEMPLOYEE_H
#define LISTOFEMPLOYEE_H
#pragma once
#include "NodeOfEmployee.h"
#include <iostream>
using namespace std;

class ListOfEmployee {

private:
	NodeOfEmployee head;
public:
	void insertAtFront(string s, double d);
	void deleteMostRecent();
	double getSalary(string name);

	ostream& operator <<(const ostream& outputStream);

};
#endif // !"LISTOFEMPLOYEE_H"
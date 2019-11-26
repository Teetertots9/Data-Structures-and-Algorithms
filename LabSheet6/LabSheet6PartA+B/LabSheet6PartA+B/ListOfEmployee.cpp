#include "ListOfEmployee.h"
#include <iostream>
using namespace std;

void ListOfEmployee::insertAtFront(string s, double d)
{
	Employee empNew = Employee(s, d);
	EmpNodePtr newNode = new NodeOfEmployee(empNew);
	newNode->next = emphead;

	emphead = newNode;
}

void ListOfEmployee::deleteMostRecent()
{
	EmpNodePtr deleteptr = emphead;
	emphead = emphead->next;
	delete deleteptr;
}

double ListOfEmployee::getSalary(string name)
{
	EmpNodePtr tempEmp = emphead;
	EmpNodePtr answerptr = NULL;
	while (tempEmp != NULL) {
		if (tempEmp->emp.getName() == name) {
			answerptr = tempEmp;
			tempEmp = NULL;
		}
		else {
			tempEmp = tempEmp->next;
		}
	}
	if (answerptr == NULL) {
		return 0.0;
	}
	else {
		return answerptr->emp.getSalary();
	}
}

ListOfEmployee::ListOfEmployee()
{
	emphead = NULL;
}

NodeOfEmployee* ListOfEmployee::getHead()
{
	return emphead;
}

ostream& operator<<(ostream& outputStream, ListOfEmployee& empList)
{
	EmpNodePtr tempptr = empList.getHead();
	while (tempptr != NULL) {
		Employee emp = tempptr->getEmp();
		outputStream << emp.getName() << " " << emp.getSalary() << endl;
		tempptr = tempptr->getNext();
	}
	return outputStream;
}

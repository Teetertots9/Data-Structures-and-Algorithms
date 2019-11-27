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

ListOfEmployee::~ListOfEmployee(){
	while (emphead) {
	EmpNodePtr temptr = emphead;

	emphead = emphead->next;

	delete temptr;
	}

}



ListOfEmployee::ListOfEmployee(const ListOfEmployee& empL)
{
	*this = empL;
}

NodeOfEmployee* ListOfEmployee::getHead()
{
	return emphead;
}

ListOfEmployee& ListOfEmployee::operator=(const ListOfEmployee& empL)
{
	if (this != &empL) {
		if (emphead != NULL) this->~ListOfEmployee();
		EmpNodePtr copyPtr = NULL, origPtr = empL.emphead;
		while (origPtr != NULL) {
			if (emphead == NULL) {
				emphead = copyPtr = new NodeOfEmployee(origPtr->getEmp());
			}
			else {
				copyPtr->next = new NodeOfEmployee(origPtr->getEmp());
				copyPtr = copyPtr->next;
			}
			origPtr = origPtr->next;
		}
	}
	return *this;
}

ostream& operator<<(ostream& outputStream, ListOfEmployee& empList)
{
	EmpNodePtr tempptr = empList.getHead();
	while (tempptr != NULL) {
		Employee emp = tempptr->getEmp();
		outputStream << "Employee Name: " << emp.getName() << " Employee Salary: " << emp.getSalary() << endl;
		tempptr = tempptr->getNext();
	}
	return outputStream;
}

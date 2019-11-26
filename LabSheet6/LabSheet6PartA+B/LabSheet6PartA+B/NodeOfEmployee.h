#ifndef NODEOFEMPLOYEE_H
#define NODEOFEMPLOYEE_H
#pragma once
#include "Employee.h"



class NodeOfEmployee {

friend class ListOfEmployee;

private:
	Employee emp;
	NodeOfEmployee* next;

public:
	NodeOfEmployee(Employee empIn);
	Employee getEmp();
	NodeOfEmployee* getNext();

};
typedef NodeOfEmployee* EmpNodePtr;
#endif // !"NODEOFEMPLOYEE_H"
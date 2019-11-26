#ifndef NODEOFEMPLOYEE_H
#define NODEOFEMPLOYEE_H
#pragma once
#include "Employee.h"



class NodeOfEmployee {

friend class ListOfEmployee;

private:
	Employee emp;

public:
	NodeOfEmployee(Employee empIn);

};
typedef NodeOfEmployee* EmpNodePtr;
#endif // !"NODEOFEMPLOYEE_H"
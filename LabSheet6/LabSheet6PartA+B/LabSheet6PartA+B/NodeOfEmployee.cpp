#include "NodeOfEmployee.h"

NodeOfEmployee::NodeOfEmployee(Employee empIn)
{
	emp = empIn;
}

Employee NodeOfEmployee::getEmp()
{
	return emp;
}

NodeOfEmployee* NodeOfEmployee::getNext()
{
	return next;
}

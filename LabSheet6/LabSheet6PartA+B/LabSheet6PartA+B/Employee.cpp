#include "Employee.h"

Employee::Employee()
{
	name = "";
}

Employee::Employee(string n, double s)
{
	name = n;
	salary = s;
}

string Employee::getName()
{
	return name;
}

double Employee::getSalary()
{
	return salary;
}

void Employee::setName(string nameIn)
{
	name = nameIn;
}

void Employee::setSalary(double salIn)
{
	salary = salIn;
}

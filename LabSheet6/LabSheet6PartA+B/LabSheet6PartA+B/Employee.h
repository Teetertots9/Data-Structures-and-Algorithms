#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#pragma once
#include <string>
using namespace std;

class Employee {

public:
	Employee();
	Employee(string n, double s);
	string getName();
	double getSalary();
	void setName(string nameIn);
	void setSalary(double salIn);

private:
	string name;
	double salary = 0;
};

#endif // !EMPLOYEE_H

#include "NodeofInt.h"
#include "ListOfInts.h"
#include "ListOfEmployee.h"
#include "NodeOfEmployee.h"
#include "Employee.h"
#include <iostream>
using namespace std;

int main() {

	//List Of Employee test
	ListOfEmployee empList;

	empList.insertAtFront("a1", 100);
	empList.insertAtFront("a2", 200);
	empList.insertAtFront("a3", 300);
	empList.insertAtFront("a4", 400);
	empList.insertAtFront("a5", 500);

	cout << empList.getSalary("a1") << endl;
	cout << empList.getSalary("a2") << endl;
	cout << empList.getSalary("a3") << endl;
	cout << empList.getSalary("a4") << endl;
	cout << empList.getSalary("a5") << endl;

	cout << empList;

	empList.deleteMostRecent();
	empList.deleteMostRecent();
	empList.deleteMostRecent();

	cout << empList;

	//List Of Ints test

	return 0;
}
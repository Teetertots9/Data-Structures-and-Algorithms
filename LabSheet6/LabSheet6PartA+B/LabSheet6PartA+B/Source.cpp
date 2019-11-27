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
	cout << "List Of Ints test" << endl;
	ListOfInts l;
	l.insert(10);
	l.insert(20);
	l.insert(30);
	l.insert(40);
	l.insert(50);

	cout << "Int List 1" << endl;
	l.displayList();

	ListOfInts l2(l);
	cout << "Int List 2" << endl;
	l2.displayList();

	ListOfInts l3;

	l3.insert(300);

	cout << "Int List 3 part 1" << endl;
	l3.displayList();

	l3 = l;

	cout << "Int List 3 part 2" << endl;
	l3.displayList();


	//ListOfEmployee Rule of 3 test
	cout << "ListOfEmployee Rule of 3 test" << endl;
	ListOfEmployee empL1;
	empL1.insertAtFront("emp1", 100);
	empL1.insertAtFront("emp2", 200);
	empL1.insertAtFront("emp3", 300);
	empL1.insertAtFront("emp4", 400);
	empL1.insertAtFront("emp5", 500);

	cout << "Emp List 1" << endl;
	cout << empL1;

	ListOfEmployee empL2(empL1);

	cout << "Emp List 2" << endl;
	cout << empL2;

	ListOfEmployee empL3;
	empL3.insertAtFront("emp10", 10000);

	cout << "Emp List 3 p1" << endl;
	cout << empL3;

	empL3 = empL2;

	cout << "Emp List 3 p2" << endl;
	cout << empL3;

	return 0;
}
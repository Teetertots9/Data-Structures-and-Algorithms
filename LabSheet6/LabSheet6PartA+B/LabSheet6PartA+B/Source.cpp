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
	ListOfInts l;
	l.insert(10);
	l.insert(20);
	l.insert(30);
	l.insert(40);
	l.insert(50);

	l.displayList();

	ListOfInts l2(l);
	l2.displayList();

	ListOfInts l3;

	l3.insert(300);

	l3.displayList();

	l3 = l;

	l3.displayList();


	return 0;
}
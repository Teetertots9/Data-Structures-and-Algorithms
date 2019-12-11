#include "ListOfDoubles.h"
#include "Stack.h"
#include <iostream>
using namespace std;

int main()
{
	ListOfDoubles dList;
	Stack stack(dList);
	cout << "push test" << endl;
	stack.push(25.5);
	stack.push(35.5);
	stack.push(45.5);
	stack.push(55.5);
	
	cout << "operator test" << endl;
	cout << stack;

	cout << "top and pop test" << endl;

	double d1 = stack.top();
	cout << d1 << endl;

	stack.pop();
	cout << stack;
	



	return 0;
}
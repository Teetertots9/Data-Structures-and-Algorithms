#include "ListOfDoubles.h"
#include <iostream>
using namespace std;

int main()
{
	ListOfDoubles dList;
	cout << "push test" << endl;
	dList.push(25.5);
	dList.push(35.5);
	dList.push(45.5);
	dList.push(55.5);
	
	cout << "operator test" << endl;
	cout << dList;

	cout << "top and pop test" << endl;

	double d1 = dList.top();
	cout << d1 << endl;

	dList.pop();
	cout << dList;
	



	return 0;
}
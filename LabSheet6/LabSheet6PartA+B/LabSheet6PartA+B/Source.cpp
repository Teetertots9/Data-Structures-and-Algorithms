#include "NodeofInt.h"
#include "ListOfInts.h"
#include <iostream>
using namespace std;

int main() {

	ListOfInts int1;
	int1.insert(1);
	int1.insert(2);
	int1.insert(3);
	int1.insert(4);
	int1.insert(5);
	int1.insert(6);
	int1.displayList();
	int1.deleteMostRecent();
	int1.deleteMostRecent();
	int1.deleteMostRecent();
	int1.deleteMostRecent();
	int1.displayList();
	int1.deleteInt(1);
	int1.displayList();
	int1.~ListOfInts();



	return 0;
}
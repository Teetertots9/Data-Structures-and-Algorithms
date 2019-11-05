#include <iostream>
using namespace std;//iostream wasn't imported and given namespace

int main()
{
	char chr = 'N';
	if (chr == 'Y' || chr == 'y') { //is a non-zero constant second character wasn't being equated to variable
		cout << "chr is y" << endl;
	}
	else if (chr == 'N' || chr == 'n'){ //is a non-zero constant second character wasn't being equated to variable
		cout << "chr is n" << endl;
	} else {
		cout << "chr is something else" << endl;
	}
	return 0; //program was returning "chr is y" as the if wasn't comparing the variable right
}
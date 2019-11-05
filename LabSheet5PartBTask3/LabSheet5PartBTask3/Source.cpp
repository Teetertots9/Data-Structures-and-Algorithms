#include <iostream>
using namespace std;
void main()
{
	int t1[] = { 0,0,1,1,1 }, t2[] = { 0,0,1,1,1 };
	int* p1 = t1, * p2 = t2;
	while (!*p1++ || !*p2++);
	cout << (p1 - t1) << endl;
	cout << (p2 - t2) << endl;
}
#include <queue>
#include <iostream>
using namespace std;

void showq(queue <double> gq)
{
	queue <double> g = gq;
	while (!g.empty())
	{
		cout << '\t' << g.front();
		g.pop();
	}
	cout << '\n';
}

int main()
{
	queue <double> dque;
	cout << "Empty? " << dque.empty() << endl;
	dque.push(25.5);
	dque.push(35.5);
	dque.push(45.5);
	dque.push(55.5);

	showq(dque);

	cout << "Size: " << dque.size() << endl;
	cout << "Front: " << dque.front() << endl;
	cout << "Back: " << dque.back() << endl;

	dque.pop();
	dque.pop();

	showq(dque);

	return 0;
}
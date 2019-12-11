#include <queue>
#include <vector>
#include <iostream>
#include <functional>

using namespace std;

void showq(priority_queue <double>  pQue)
{
	priority_queue <double>  g = pQue;
	while (!g.empty())
	{
		cout << g.top() << '\t';
		g.pop();
	}
	cout << '\n';
}

int main() 
{
	priority_queue <double>  dpQue;
	cout << "Empty? " << dpQue.empty() << endl;

	dpQue.push(10.5);
	dpQue.push(11.5);
	dpQue.push(12.5);
	dpQue.push(13.5);

	showq(dpQue);

	cout << "Size: " << dpQue.size() << endl;
	cout << "Front: " << dpQue.top() << endl;

	dpQue.pop();
	dpQue.pop();

	showq(dpQue);






	return 0;
}
#include<iostream>
using namespace std;

void deleteRepeats(char characters[], int& positionsUsed);

int main() 
{
	char a[10] = { 'a','a','a','a' };
	int positionsUsed = 4;

	deleteRepeats(a, positionsUsed);

	for (size_t i = 0; i < positionsUsed; i++)
	{
		cout << a[i] << " ";
	}








	return 0;
}

void deleteRepeats(char characters[], int& positionsUsed)
{
	for (size_t i = 0; i < positionsUsed; i++)
	{
		for (size_t j = 0; j < positionsUsed; j++)
		{
			if (i != j) {
				if (characters[i] == characters[j]) {
					if (characters[j] == characters[j + 1]) {
						characters[j] = ' ';
						characters[j + 1] = ' ';
						positionsUsed -= 2;
					}
					else {
						characters[j] = characters[j + 1];
						positionsUsed--;
					}
				}

				
			}
		}
	}

}
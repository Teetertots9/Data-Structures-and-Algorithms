#include <iostream>
using namespace std;
int main()
{

	const double metricTon = 35273.92;

	double cerealPackage = 0;
	
	cout << "Please enter weight of the package of cereal in ounces " << endl;
	cin >> cerealPackage;
	cout << endl;
	double cerealPackageTon = cerealPackage / metricTon;
	cout << "Weight of cereal package in tonnes is " << cerealPackageTon << endl;
	double packagesNeeded = metricTon / cerealPackageTon;
	cout << "Number of packages needed to make 1 metric ton is " << packagesNeeded << endl;

	return 0;
}
//Andrew Teeters X00139120
#include "Clothes.h"
#include "ListClothes.h"
#include "NodeClothes.h"
#include <iostream>
using namespace std;

int main() {

	//Creation of Clothes objects
	cout << "Creation of Clothes objects" << endl;
	Clothes c1;
	Clothes c2;
	Clothes c3;
	Clothes c4;
	Clothes c5;
	Clothes c6;

	//filling with values
	cout << "filling with values" << endl;
	c1.setID(1);
	c1.setType("none");
	c2.setID(2);
	c2.setType("socks");
	c3.setID(3);
	c3.setType("socks");
	c4.setID(4);
	c4.setType("jeans");
	c5.setID(5);
	c5.setType("jeans");
	c6.setID(6);
	c6.setType("jeans");

	//Filling List with clothes
	cout << "Filling List with clothes" << endl;
	ListClothes l1;
	l1.addClothes(c1.getID(), c1.getType());
	l1.addClothes(c3.getID(), c3.getType());
	l1.addClothes(c5.getID(), c5.getType());
	l1.addClothes(c4.getID(), c4.getType());
	l1.addClothes(c2.getID(), c2.getType());
	l1.addClothes(c6.getID(), c6.getType());

	//display Type
	cout << "displaying by Type" << endl;
	l1.displayType("none");
	l1.displayType("socks");
	l1.displayType("jeans");

	//delete method
	cout << "testing delete method" << endl;
	if (l1.deleteClothes(2) == true) {
		cout << "clothes deleted" << endl;
	}
	else {
		cout << "clothes could not be deleted" << endl;
	}

	if (l1.deleteClothes(40) == true) {
		cout << "clothes deleted" << endl;
	}
	else {
		cout << "clothes could not be deleted" << endl;
	}

	//Find Method
	cout << "Testing find method" << endl;
	if (l1.findClothes(3) == true) {
		cout << "clothes found ID: " << 3 << endl;
	}
	else {
		cout << "could not find clothes by given ID" << endl;
	}
	if (l1.findClothes(88) == true) {
		cout << "clothes found ID: " << 3 << endl;
	}
	else {
		cout << "could not find clothes by given ID" << endl;
	}

	//Copy Constructor and Assignment Operator
	cout << "copy constructor and assignment Operator" << endl;
	ListClothes l2 = ListClothes(l1);

	l2.displayType("none");
	l2.displayType("socks");
	l2.displayType("jeans");




	return 0;
}
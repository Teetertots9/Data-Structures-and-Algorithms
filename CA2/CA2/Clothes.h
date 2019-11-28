#ifndef CLOTHES_H
#define CLOTHES_H
#pragma once
#include <string>
using namespace std;

class Clothes
{


public:
	Clothes();
	int getID();
	string getType();
	void setID(int i);
	void setType(string s);

private:
	int id;
	string type;

};

#endif // !CLOTHES_H

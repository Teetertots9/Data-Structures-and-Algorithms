#include "Clothes.h"

Clothes::Clothes()
{
	id = 0;
	type = "";
}

int Clothes::getID()
{
	return id;
}

string Clothes::getType()
{
	return type;
}

void Clothes::setID(int i)
{
	id = i;
}

void Clothes::setType(string s)
{
	type = s;
}

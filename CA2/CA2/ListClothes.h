#ifndef LISTCLOTHES_H
#define LISTCLOTHES_H
#pragma once
#include "NodeClothes.h"

class ListClothes
{

public:
	ListClothes();
	~ListClothes();
	ListClothes(const ListClothes& l);
	ListClothes& operator=(const ListClothes& l);
	void addClothes(int id, string s);
	void displayType(string find);
	bool findClothes(int findID);
	bool deleteClothes(int findID);
private:
	ClothNode head;
};
#endif // !LISTCLOTHES_H


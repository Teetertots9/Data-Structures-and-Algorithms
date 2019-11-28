#ifndef NODECLOTHES_H
#define NODECLOTHES_H
#pragma once
#include "Clothes.h"

class NodeClothes
{
	
	friend class ListClothes;
public:
	NodeClothes(int id, string type);

private:
	Clothes cloth;
	NodeClothes* next;
};
typedef NodeClothes* ClothNode;
#endif // !NODECLOTHES_H

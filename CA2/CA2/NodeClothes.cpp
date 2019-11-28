#include "NodeClothes.h"

NodeClothes::NodeClothes(int id, string type)
{
	cloth.setID(id);
	cloth.setType(type);
	next = NULL;
}

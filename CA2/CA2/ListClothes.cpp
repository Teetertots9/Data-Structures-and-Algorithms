#include "ListClothes.h"
#include "NodeClothes.h"
#include <iostream>

ListClothes::ListClothes()
{
	head = NULL;
}

ListClothes::~ListClothes()
{
	while (head != NULL) {
		ClothNode temp = head;
		head = head->next;
		delete temp;
	}
}

ListClothes::ListClothes(const ListClothes& l)
{
	*this = l;
}

ListClothes& ListClothes::operator=(const ListClothes& l)
{
	if (this != &l) {
		if (head != NULL) {
			this->~ListClothes();
		}
		ClothNode copy = NULL, original = l.head;
		while (original != NULL) {
			if (head == NULL) { 
				head = new NodeClothes(original->cloth.getID(), original->cloth.getType());
				copy = head;
			}
			else {
				copy->next = new NodeClothes(original->cloth.getID(), original->cloth.getType());
				copy = copy->next;
			}
			original = original->next; 
		}
		
	}
	return *this;
}

void ListClothes::addClothes(int id, string s)
{
	ClothNode temp = head;
	head = new NodeClothes(id, s);
	head->next = temp;
}

void ListClothes::displayType(string find)
{

	ClothNode temp = head;
	while (temp != NULL) {
		if (temp->cloth.getType() == find) {
			cout << "ID: " << temp->cloth.getID() << endl;
		}
		temp = temp->next;
 	}
}

bool ListClothes::findClothes(int findID)
{
	bool result = false;
	ClothNode temp = head;
	while (temp != NULL) {
		if (temp->cloth.getID() == findID) {
			result = true;
		}
		temp = temp->next;
	}
	return result;
}

bool ListClothes::deleteClothes(int findID)
{
	bool result = false;
	ClothNode temp = head;
	ClothNode delptr = NULL;
	ClothNode trailptr = head;
	while (temp != NULL) {
		if (temp->cloth.getID() == findID) {
			result = true;
			trailptr->next = temp->next;
			delptr = temp;
		}
		trailptr = temp;
		temp = temp->next;
	}
	delete delptr;
	return result;
}

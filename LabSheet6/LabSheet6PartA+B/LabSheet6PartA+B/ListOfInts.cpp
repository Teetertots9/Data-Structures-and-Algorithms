#include "ListOfInts.h"
#include <iostream>
using namespace std;

void ListOfInts::insert(int i)
{
	//adds node to start of list
	NodeofInt* newNode = new NodeofInt(i);
	newNode->next = head;

	head = newNode;
}

void ListOfInts::displayList()
{
	ListNodePtr tempptr = head;
	while (tempptr != NULL) {
		cout << tempptr->nodeInt << endl;
		tempptr = tempptr->next;
	}
}

int ListOfInts::deleteMostRecent()
{
	ListNodePtr deleteptr = head;
	head = head->next;
	return deleteptr->nodeInt;
	delete deleteptr;
}

void ListOfInts::deleteInt(int pos)
{
	ListNodePtr temptr = head;
	ListNodePtr trailptr = NULL;
	if (head->nodeInt == pos) {
		head = head->next;
		delete temptr;
	}
	else {
		while (temptr != NULL && temptr->nodeInt != pos) {
			trailptr = temptr;
			temptr = temptr->next;
		}
	}
	if (temptr == NULL) {
		return;
	}
	else {
		trailptr->next = temptr->next;
		delete temptr;
	}
	



}

ListOfInts::ListOfInts()
{
	head = nullptr;
}

ListOfInts::ListOfInts(const ListOfInts& l)
{
	*this = l;
}

ListOfInts::~ListOfInts()
{
	while (head) {
		ListNodePtr temptr = head;

		head = head->next;

		delete temptr;
	}
}


ListOfInts& ListOfInts::operator=(const ListOfInts& l)
{
	if (this != &l) {
		if (head != NULL) this->~ListOfInts();
		ListNodePtr copyPtr = NULL, origPtr = l.head;
		while (origPtr != NULL) {
			if (head == NULL) {
				head = copyPtr = new NodeofInt(origPtr->nodeInt);
			}
			else {
				copyPtr->next = new NodeofInt(origPtr->nodeInt);
				copyPtr = copyPtr->next;
			}
			origPtr = origPtr->next;
		}
	}
	return *this;
}

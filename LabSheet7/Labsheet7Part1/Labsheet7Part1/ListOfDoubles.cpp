#include "listofdoubles.h"
#include <iostream>
using namespace std;

DoubleListNode::DoubleListNode(double val)
	:next(NULL), theValue(val)
{}

double DoubleListNode::getDouble()
{
	return theValue;
}

DoubleListNode* DoubleListNode::getNext()
{
	return next;
}

ListOfDoubles::ListOfDoubles()
	: head(NULL)
{}

ListOfDoubles::~ListOfDoubles()
{
	DoubleListNode* temp;
	while (head)
	{
		temp = head;
		head = head->next;
		delete temp;
	}
}

void ListOfDoubles::insert(double val)
{
	DoubleListNode* newNode = new DoubleListNode(val);
	newNode->next = head;
	head = newNode;
}

void ListOfDoubles::displayList(ostream& str) const
{
	DoubleListNode* temp = head;
	while (temp)
	{
		str << temp->theValue << endl;
		temp = temp->next;
	}
}

double ListOfDoubles::deleteMostRecent()
{

	DoubleListNode* temp = head;

	double retval = 0;

	if (head)
	{
		retval = head->theValue;
		head = head->next;
	}


	delete temp;

	return retval;

}

double ListOfDoubles::deleteDouble(int pos)
{
	DoubleListNode* leader = head, * trailer = NULL;
	double retval = 0;

	if (pos < 1)
		return 0; //not a valid position
	if (head == NULL)
		return 0;  //no positions on list anyway!

	//otherwise, we're in business

	if (pos == 1) //to delete the head node
		//bypass the head node
		head = head->next;  //but leader is still pointing to the old head - we'll use it later to get the return value before reclaiming its memory
	else //otherwise count thro the list
	{
		for (int i = 1; leader != NULL && i < pos; i++)
		{
			//we are already on the first node, need to move through (pos - 1) times to get leader pointing to the pos-th node
			trailer = leader;
			leader = leader->next;
		}
		//if leader is NULL, we came to the end of the list before reaching that pos
		//otherwise, we can now bypass the leader!
		if (leader)
			trailer->next = leader->next;  //bypass leader
	}

	if (leader)
	{
		retval = leader->theValue;
		delete leader;
	}

	return retval;  //if leader was NULL - we came to the end of the list before reaching pos, but retval was init to 0 which is what we want!
}

void ListOfDoubles::push(double val)
{
	insert(val);
}

void ListOfDoubles::pop()
{
	deleteMostRecent();
}

double ListOfDoubles::top()
{
	return head->theValue;
}

 ostream& operator<<( ostream& outputStream, ListOfDoubles& dList)
{
	DoubleListNode* temp = dList.head;
	while (temp)
	{
		outputStream << temp->getDouble() << endl;
		temp = temp->getNext();
	}
	return outputStream;
}

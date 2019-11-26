#ifndef NODEOFINT_H
#define NODEOFINT_H
#pragma once

class NodeofInt
{
	friend class ListOfInts;

private:
	int nodeInt;
	NodeofInt* next;
public:
	 NodeofInt(int i);
	 

};
typedef NodeofInt* ListNodePtr;
#endif

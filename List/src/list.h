#include <iostream>

#include "node.h"

class List
{
protected:
	Node *first;
	int length;

public:
	List();

	void Add(int value); // Adds element at the end of the list
	void AddAfter(int value, int pos);
	void Remove(); // Remove last element of the list;
	void RemoveAt(int pos);
	void Print();

	~List();
	
};
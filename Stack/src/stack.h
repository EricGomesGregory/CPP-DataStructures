#include "node.h"

class Stack
{
protected:
	Node *top;
	
public:
	Stack();

	void Push(int value);
	void Pop();
	int Top();
	void Print();

	~Stack();
};
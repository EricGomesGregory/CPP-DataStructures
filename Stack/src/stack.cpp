#include <iostream>

#include "stack.h"


Stack::Stack()
{
	this->top = nullptr;
}

void Stack::Push(int value)
{
	Node *node = new Node(value);

	node->next = top;
	top = node;
}

void Stack::Pop()
{
	if(top)
	{
		Node *temp = top;
		top = top->next;

		delete(temp);
	}
}

int Stack::Top()
{
	if(top)
	{
		return top->value;
	}
}

void Stack::Print()
{
	Node *node = top;

	while(node)
	{
		std::cout << node->value << " ";
		node = node->next;
	}
	std::cout << std::endl;
}


Stack::~Stack()
{
	while(top)
	{
		Pop();
	}
}
#include "list.h"


List::List()
{
	this->first	 = nullptr;
	this->length = 0;
}

void List::Add(int value)
{
	Node *newNode = new Node(value);
	Node *node = this->first;

	while(node)
	{
		if(node->next == nullptr)
			node->next = newNode;
		
		node = node->next;
	}
	this->length++;
}

void List::Print()
{
	Node *node = this->first;

	std::cout << "List [" << this->length << "]: ";
	while(node)
	{
		std::cout << node->value << " ";
		node = node->next;
	}
	std::cout << std::endl;
}
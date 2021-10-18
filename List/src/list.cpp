#include "list.h"


List::List()
{
	this->first	 = nullptr;
	this->length = 0;
}

void List::Add(int value)
{
	Node *newNode = new Node(value);

	newNode->next = this->first;
	this->first = newNode;

	this->length++;
}

void List::AddAfter(int value, int pos)
{
	if(pos < 0 || pos > this->length) return;

	Node *newNode = new Node(value);
	Node *node = this->first;
	int i = 0;

	while(node && i != pos)
	{
		node = node->next;
		i++;
	}

	newNode->next = node->next;
	node->next = newNode;

	this->length++;
}

void List::Remove()
{
	Node *node = this->first;
	
	while(node->next)
	{
		node = node->next;
	}
	delete(node);

	this->length--;
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
#include <iostream>

#include "src/stack.h"

int main(int argc, char const *argv[])
{
	Stack *stack = new Stack();

	for (int i = 0; i < 10; ++i)
	{
		stack->Push(i);
	}

	stack->Print();

	stack->~Stack();
	return 0;
}
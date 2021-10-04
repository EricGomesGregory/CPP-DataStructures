#include <iostream>

#include "src/stack.h"

int main(int argc, char const *argv[])
{
	int run = 1;
	int option, value;

	Stack *stack = new Stack();

	while(run)
	{
		std::cout << "0-Exit" << std::endl;
		std::cout << "1-Push" << std::endl;
		std::cout << "2-Pop" << std::endl;
		std::cout << "3-Get Top" << std::endl;
		std::cout << "4-Print" << std::endl;
		std::cout << "Choose a option:";
		std::cin  >> option;

		while(option < 0 || option > 4)
		{
			std::cout << std::endl << "Choose a valid option" << std::endl << std::endl;

			std::cout << "0-Exit" << std::endl;
			std::cout << "1-Push" << std::endl;
			std::cout << "2-Pop" << std::endl;
			std::cout << "3-Get Top" << std::endl;
			std::cout << "4-Print" << std::endl;
			std::cout << "Choose a option:";
			std::cin  >> option;			
		}

		switch(option)
		{
			case 0:
			run = 0;
			break;

			case 1:
			std::cout << "Input a number:";
			std::cin  >> value;

			stack->Push(value);

			std::cout << "Value [" << value << "] has been added to the stack." << std::endl;
			break;

			case 2:
			std::cout << "Value [" << stack->Top();

			stack->Pop();

			std::cout << "] has been removed." << std::endl;
			break;

			case 3:
			std::cout << "Top value: " << stack->Top();
			std::cout << std::endl;
			break;

			case 4:
			std::cout << "Stack: ";
			stack->Print();
			break;
		}
	}

	stack->~Stack();
	return 0;
}
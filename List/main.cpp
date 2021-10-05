#include <iostream>

#include "src/list.h"

int main(int argc, char const *argv[])
{
	List *list = new List();

	list->Add(1);
	list->Add(2);
	list->Print();

	return 0;
}
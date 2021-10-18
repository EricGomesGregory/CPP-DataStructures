#include <iostream>

#include "src/list.h"

int main(int argc, char const *argv[])
{
	List *list = new List();

	list->Add(1);
	list->Add(2);
	list->Print();

	list->AddAfter(5, 0);
	list->Print();
	list->Remove();
	list->Print();

	return 0;
}
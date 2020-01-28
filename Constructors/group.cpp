#include "group.h"

group::group()
{
	//cout << "G constructor";
	//int i;
	//person newP;
	//p = &newP;
	p = new person();
	cout << "\nConstructor 1\n";
}
group::group(person* p)
{
	//p = _p;
	group::p = p;
	cout << "\nConstructor 1\n";
}

group::~group()
{
	cout << "\nDe Constructor 1\n";
	delete p;
	//delete p2;
}



void group::DestroyReferences()
{
	if (p != nullptr)
		delete p;
}

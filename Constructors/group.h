#pragma once
#include "person.h"
#include <iostream>

using namespace std;

class group
{	
	person* p;
	person* p2;
public:
	group();
	group(person*);
	~group();


	void DestroyReferences();
};
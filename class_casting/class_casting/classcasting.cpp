// classcasting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{	
	int i = 3;
	void *p = &i;

	short int *c = static_cast<short int *>(p);

	cout << *c<<endl;

	////////////////////

	const int j = 4;

	int* k = const_cast<int *>(&j);
	*k = 5;

	cout << *k;

	//////////////////////


	getchar();
    return 0;
}



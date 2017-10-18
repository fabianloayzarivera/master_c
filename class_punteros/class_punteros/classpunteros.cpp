// classpunteros.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char a = 'X';
	char *p = &a;
	char **px = &p;

	cout << *p <<" "<< a <<endl;

	*p = 'Z';
	cout << *p << " " << a << endl;

	**px = 'Y';
	cout << **px << " " << a << endl;

	const char *py = &a;
	//char *pw = py;
	char *pz = &a;
	
	py = pz;

	getchar();
    return 0;
}


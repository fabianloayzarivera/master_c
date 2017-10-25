// classoperadores.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Clase {
public:
	static int cant;
	int x;
	Clase *p;

};
int main()
{
	Clase z;
	Clase y;

	z.p = &y;
	

	cout << (z.p)->x;

	getchar();
	return 0;
}
// classtablaspunterosobjetos.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Clase {
public:
	static int cant;
	
};
int main()
{
	Clase o;
	Clase x;
	Clase p;

	Clase::cant = 3;

	cout << Clase::cant <<endl;

	Clase::cant -= 3;

	cout << Clase::cant <<endl;

	
	getchar();
    return 0;
}

int Clase::cant = 0;
// classpunteros.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
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

	char *palabra = "Holaa";
	char palabra2[] = "Hello";
	cout << strlen(palabra)<<endl;
	cout << strlen(palabra2)<<endl;
	cout << palabra2 <<endl;

	for each (char car in palabra2)
	{
		cout << car << " ";
	}

	char *ptrPalabra2 = palabra2;

	ptrPalabra2 = "Problemas";

	

	cout <<endl<< ptrPalabra2<<endl<<palabra2;

	 
	
	getchar();
    return 0;
}


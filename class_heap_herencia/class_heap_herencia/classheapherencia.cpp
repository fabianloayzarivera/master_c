// classheapherencia.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "class.h"
using namespace std;

int main()
{

	C1 obj;
	C2 obj2;
	cout << obj.getCount();

	

	cout << sacarCount(&obj2);


	// it's possible:
	C1 *ptr;

	ptr = &obj2;
	getchar();
    return 0;

}


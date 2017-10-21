// 02Practica_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Practica_2.h"

using namespace std;

int main()
{
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "First exercise -------------- " << endl;
	
	int *p = &number;
	//We can check pointer p value as it is the memory address assinged for the number
	//cout << p <<endl;
	//now let's cast the pointer into char* because int* grabs 4 bytes, and we need to grab 1 byte per loop

	bool *pc = reinterpret_cast<bool*>(static_cast<void *>(p)); //we use reinterpret cast because int and char don't have any relationship between them

																 //why bool? Because cast into char , unsigned char, signed char, __int8 DID NOT RETURN ANYTHING

	//We can check if pointer pc contains the same memory address of p after the casting															
	//cout << pc <<endl;

	//we can check the number of bytes each pointer is retrieving:
	//cout << sizeof(*p) << "  " << sizeof(*pc) << endl;

	cout << "After casting the pointer we display the Int byte per byte: " << endl;
	for (int i = 0; i < 4; i++)
		cout << *(pc + i) << "  " ;

	cout << endl<<endl;


	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "Second exercise -------------- " << endl;
	int *ptr;
	int count = 0;
	
	int highest = tabla[0];

	ptr = tabla;

	for each (int var in tabla)
	{
		//cout << *(ptr + count);
		if (*(ptr + count) > highest)
			highest = *(ptr + count);
		count++;
	}

	cout << "The highest value in the array is: " << highest << endl<<endl ;


	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "Third exercise -------------- " << endl;

	int tabla2[] = { 1, 3, 2, 5, 3, 0xFFFFFFFF, 2 };
	int size = sizeof(tabla2);
	int *ptr2 = tabla2;
	int heavier = 0;
	int x = 1;

	//Casting so we can read byte per byte
	bool *ptrb = reinterpret_cast<bool*>(static_cast<void *>(ptr2));
	
	for (int i = 0; i < size; i++) {

		if (*(ptrb + i) > heavier) {
			heavier = *(ptrb + i);
		}

		//We can display each number's bytes separatedly
		/*cout << *(ptrb + i);
		if (x % 4 == 0)
			cout << "  ";
		x++;*/
	}
	cout <<  "The Heaviest byte in the array is: " << heavier<<endl<<endl;

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "Fourth exercise -------------- " << endl;

	char *cad = _strdup("Hello World");  // We assing the char* value with _strdup so it won't be a constant, and we will be able to modify it
									// unless we use strcpy to a char[] (which is an array)
	int sizeCad = strlen(cad);
	int times = sizeCad / 2;
	int finalPos = sizeCad - 1;
	char carValue;

	for (int i = 0; i < times ; i++) {
		//cout << *(cad+i) << "  "<< *(cad+finalPos) <<endl ;
		carValue = *(cad + i);
		*(cad + i) = *(cad + finalPos);
		*(cad + finalPos) = carValue;

		finalPos--;


	}
	cout << "Inverted in the same variable using pointers: " <<cad<<endl ;
	

	getchar();
    return 0;
}


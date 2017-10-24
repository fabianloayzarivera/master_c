// 03Practica_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Practica_3.h"

using namespace std;
int length = 0;

int main()
{
	////////////////////////////////////////////////////////////////////////////////////

	cout << "First Excercise! --------------------- " << endl;
	length = sizeof(table) / sizeof(char *);

	char * result = returnCad(index, table);

	if (result)
		cout << "The result is: " << result <<endl;
	else
		cout << "The index is out of bounds!" << endl;
	
	

	
	///////////////////////////////////////////////////////////////////////////////////
	cout << "Second Excercise! --------------------- " << endl;

	result = returnCad2(index2, table);

	if (result)
		cout << "The result is: " << result << endl;
	else
		cout << "The index is out of bounds!" << endl;

	getchar();
    return 0;
}

char * returnCad(int index, char *table[]) {
	if (index < length)
		return table[index];
	else
		return nullptr;
	
}

char * returnCad2(int index, char *table[]) {
	if (index < length) {
		
		char *cad = _strdup(table[index]);
		int sizeCad = strlen(cad);
		int times = sizeCad / 2;
		int finalPos = sizeCad - 1;
		char carValue;

		for (int i = 0; i < times; i++) {
			
			carValue = *(cad + i);
			*(cad + i) = *(cad + finalPos);
			*(cad + finalPos) = carValue;

			finalPos--;


		}
		return cad;
	}
	else {
		return nullptr;
	}
}

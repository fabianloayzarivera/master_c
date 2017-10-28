// 05Practica_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "practica_5.h"

int main()
{
	open("myFile.txt");

	cout << ptrToFile <<endl;

	write("Hello World!", 4);

	close();

	getchar();
    return 0;
}

void open(char *filename) {
	ptrToFile = openFilePlease(filename, "at+");
}

void close() {
	closeFilePlease(ptrToFile);
}

void write(char *content, int cant) {
	writeInFilePlease(ptrToFile, content, cant);
}
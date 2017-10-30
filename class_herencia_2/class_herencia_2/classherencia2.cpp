// classherencia2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "class_herencia.h"

int main()
{
	CImagen *images[] = { new CPng(), new CJpg() };
	CPng *ptr = reinterpret_cast<CPng *>(images[0]);

	ptr->sayHello();

	
	
	CJpg *jpg = reinterpret_cast<CJpg *>(images[1]);
	

	jpg->sayHello();

	CImagen *ptrPng = new CPng();
	ptrPng->sayHello();


	getchar();
    return 0;
}


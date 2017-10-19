// classparametros.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int sum(int i, int j, int k=0);
char *GetGreeting();
void GetGreeting2(char *&p);
void overload(long i);
void overload(int i);
int main()
{

	int i, j, k;

	i = 1;
	j = 1;
	k = 1;


	cout << sum(i, j) << endl;
	cout << sum(i, j, k) << endl;
	
	cout << GetGreeting()<<endl;
	char *p;
	GetGreeting2(p);
	cout << p<<endl;

	overload('p');
	getchar();
    return 0;
}

int sum(int i, int j , int k) {
	return i + j +k;
}

char *GetGreeting() {
	char t[]= "Hola";
	return t;
}

void GetGreeting(char *&p) {
	char t[] = "Hola";
	p = t;
}

void GetGreeting2(char *&p) {
	p = "Hola";
}

void overload(int i) {
	cout << i;
}

void overload(long i) {
	cout << i<< endl;
}

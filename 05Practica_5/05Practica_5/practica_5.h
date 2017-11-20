#pragma once
#include "filesAPI.h"
#include <iostream>
using namespace std;

struct Employee {
	int code;
	char *name;
};

FILE* ptrToFile;

void open(char *filename);
void close();
int write(char *buffer, int cant);
int read(char buffer[], int cant);
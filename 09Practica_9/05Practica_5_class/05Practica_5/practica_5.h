#pragma once
#include "filesAPI.h"
#include <iostream>
using namespace std;

struct Employee {
	int code;
	char *name;
};

FILE* ptrToFile;

void open(char *filename, FilesAPI &api);
void close(FilesAPI &api);
int write(char *buffer, int cant, FilesAPI &api);
int read(char buffer[], int cant, FilesAPI &api);
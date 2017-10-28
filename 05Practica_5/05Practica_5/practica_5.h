#pragma once
#include "filesAPI.h"
#include <iostream>
using namespace std;

FILE* ptrToFile;

void open(char *filename);
void close();
void write(char *content, int cant);
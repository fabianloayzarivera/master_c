#pragma once

#include <stdio.h>
#include <string.h>
FILE* openFilePlease(char *filename, char* openMode);
void closeFilePlease(FILE *ptr);
void writeInFilePlease(FILE* ptr, char *content, int cant);

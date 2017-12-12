#pragma once

#include <stdio.h>
#include <string.h>

namespace FileTools {
	FILE* openFilePlease(char *filename, char* openMode);
	void closeFilePlease(FILE *ptr);
	int writeInFilePlease(FILE* ptr, char *buffer, int cant);
	int readFromFilePlease(FILE* ptr, char bufferRead[], int cant);
}

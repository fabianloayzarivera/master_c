#include "stdafx.h"
#include "filesAPI.h"

FILE* FileTools::openFilePlease(char *filename, char* openMode) {
	FILE *ptr;
	if (!fopen_s(&ptr, filename, openMode))
		return ptr;
	else
		return nullptr;	
}

void FileTools::closeFilePlease(FILE *ptr) {
	fclose(ptr);
}

int FileTools::writeInFilePlease(FILE* ptr, char *buffer, int cant) {
	
	int charWritten = fwrite(buffer, cant, 1, ptr) * cant;
	return charWritten;
}

int FileTools::readFromFilePlease(FILE* ptr, char bufferRead[], int cant) {

	int charRead = fread(bufferRead, cant, 1, ptr) * cant;
	return charRead;
}
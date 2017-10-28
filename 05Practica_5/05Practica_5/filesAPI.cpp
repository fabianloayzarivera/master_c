#include "stdafx.h"
#include "filesAPI.h"

FILE* openFilePlease(char *filename, char* openMode) {
	FILE *ptr;
	if (!fopen_s(&ptr, filename, openMode))
		return ptr;
	else
		return nullptr;	
}

void closeFilePlease(FILE *ptr) {
	fclose(ptr);
}

void writeInFilePlease(FILE* ptr, char *content, int cant) {
	
	char *subContent = "";
	strncpy_s(subContent, cant , content, sizeof(content));

	fputs(subContent, ptr);
}
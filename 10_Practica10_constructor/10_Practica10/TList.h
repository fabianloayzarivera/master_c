#pragma once
#include <iostream>
using namespace std;

class Node {
private:
	const char* value;
	Node* next;
public:
	Node(const char* v);
	Node(const Node& nodeB);
	const char* getValue();
	void setValue(const char* v);
	Node* getNextPtr();
	void setNextPtr(Node *ptr);

};

class TList {
private:
	//Node* list[100];
	Node* first;
	Node* end;
	int size;
	int index;
public:
	TList();
	TList(const TList& listB);
	int Size(); // Retorna el número de elementos.
	int Push(const char *psz); // Añade la cadena a la lista.
	const char * First(); // retorna el primer elemento de la lista.
	const char * Next(); // retorna el siguiente elemento de la lista.
	const char * Pop(); // Elimina y retorna el primer elemento de la lista.
	void Reset(); // Elimina todos los elementos de la lista.
	
};


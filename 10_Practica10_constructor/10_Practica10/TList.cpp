#include "stdafx.h"
#include "TList.h"

const char* Node::getValue() {
	return value;
}

void Node::setValue(const char* v) {
	value = v;
}

Node* Node::getNextPtr() {
	return next;
}

void Node::setNextPtr(Node *ptr) {
	next = ptr;
}

Node::Node(const char* v) {
	next = nullptr;
	value = v;
}

Node::Node(const Node& nodeB) {
	value = nodeB.value;
	next = nodeB.next;
}

TList::TList() {
	first = nullptr;
	end = nullptr;
	size = 0;
	index = 0;
}

TList::TList(const TList& listB) {
	size = listB.size;
	index = listB.index;
	for (int i = 0; i < size; i++) {
		list[i] = listB.list[i];
	}
}

int TList::Size() {
	return size;
} // Retorna el número de elementos.

int TList::Push(const char *psz) {
	Node *n = new Node(psz);
	if (size > 0) {
		list[size] = n;
		list[size - 1]->setNextPtr(n);
	}
	else
		list[0] = n;
	size++;
	return size;
}; // Añade la cadena a la lista.

const char * TList::First() {
	if (size > 0)
		return list[0]->getValue();
	else
		return "empty";
} // retorna el primer elemento de la lista.

const char * TList::Next() {
	if (index < size) {
		
		return list[index++]->getNextPtr()->getValue();
		//return list[index++]->getValue();
	}
	else {
		index = 0;
		return list[index++]->getValue();
	}
} // retorna el siguiente elemento de la lista.

const char * TList::Pop() {
	if (size > 0) {
		const char* value;
		value = list[0]->getValue();
		delete(list[0]);

		for (int i = 0; i < size - 1; i++) {
			list[i] = list[i + 1];
		}
		if (index > 0)
			index--;
		else
			index = 0;
		size--;
		return value;
	}
	else {
		return "empty";
	}
	
} // Elimina y retorna el primer elemento de la lista.

void TList::Reset() {
	for (int i = 0; i < size; i++) {
		delete(list[i]);
	}
	size = 0;
} // Elimina todos los elementos de la lista.
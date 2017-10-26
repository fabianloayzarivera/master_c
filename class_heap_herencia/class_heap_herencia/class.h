#pragma once

class C1 {
public:
	C1();
	int getCount();
private:
	void *m_p; //todas las propiedades privadas

};

class C2:public C1 {
public:
	int x;
};

int sacarCount(C1 *p);
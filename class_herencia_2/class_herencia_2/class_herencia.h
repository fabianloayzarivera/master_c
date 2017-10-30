#pragma once
#include <iostream>

using namespace std;

class CImagen {
private:
	int size;
public:
	virtual void sayHello() = 0;
};

class CPng:public CImagen {
private:
	int color;
public:
	virtual void sayHello();
};

class CJpg:public CImagen {
private:
	int background;
public:
	virtual void sayHello();
};

void CPng::sayHello() {
	cout << "Hello I'm a png!"<<endl;
}

void CJpg::sayHello() {
	cout << "Hello I'm a jpg!" << endl;
}


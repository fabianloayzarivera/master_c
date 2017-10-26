#include "stdafx.h"
#include "class.h"

struct TInternalInfo {
	int m_i;
};
C1::C1() {
	m_p = new TInternalInfo;
	static_cast<TInternalInfo *>(m_p)->m_i = 0;
}

int C1::getCount() {
	return (static_cast<TInternalInfo *>(m_p))->m_i++; //returns 0 because it returns the 0 first and then sums 1
}

int sacarCount(C1 *p) {
	return p->getCount();
}
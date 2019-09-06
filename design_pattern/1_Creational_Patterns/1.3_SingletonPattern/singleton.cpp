#include "singleton.h"

Singleton *Singleton::m_pSingleton = NULL;

Singleton* Singleton::GetInstance() {
	if (NULL == m_pSingleton) {
		m_pSingleton = new Singleton();
	}
	
	return m_pSingleton;
}

Singleton::GC Singleton::GC::gc; // 重要
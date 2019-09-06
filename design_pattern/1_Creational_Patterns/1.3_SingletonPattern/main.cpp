// main.cpp
//
#include "singleton.h"


int main()
{
    Singleton *pSingleton1 = Singleton::GetInstance();
    Singleton *pSingleton2 = Singleton::GetInstance();

    cout << (pSingleton1 == pSingleton2) << endl;

    return 0;
}
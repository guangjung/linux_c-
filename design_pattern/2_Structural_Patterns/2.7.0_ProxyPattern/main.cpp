// main.cpp
// https://blog.csdn.net/liang19890820/article/details/78533179
//  g++ main.cpp   -std=c++11
#include "proxy.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if (p) {delete(p); (p)=NULL;}}
#endif

int main()
{
	Proxy* proxy = new Proxy();
	proxy->Recharge(20);
	proxy->Recharge(100);
	
	SAFE_DELETE(proxy);
	
	return 0;
}
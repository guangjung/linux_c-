//https://blog.csdn.net/liang19890820/article/details/70652858
//g++ main.cpp 
#include "factory.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif


int main ()
{
	// 奔驰
	IFactory *pFactory = new BenzFactory();
	ICar *pCar = pFactory->CreateCar();
	
	cout << "Benz factory: " << pCar->GetName() << endl;
	SAFE_DELETE(pCar);
	SAFE_DELETE(pFactory);

	// 宝马
	pFactory = new BmwFactory();
	pCar = pFactory->CreateCar();
	
	cout << "Bmw factory: " << pCar->GetName() << endl;
	SAFE_DELETE(pCar);
	SAFE_DELETE(pFactory);
	
	// 奥迪
	pFactory = new AudiFactory();
	pCar = pFactory->CreateCar();
	
	cout << "Audi factory: " << pCar->GetName() << endl;
	SAFE_DELETE(pCar);
	SAFE_DELETE(pFactory);
	
	return 0;
}
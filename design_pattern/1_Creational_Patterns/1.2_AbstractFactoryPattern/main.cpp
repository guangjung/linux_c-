//https://blog.csdn.net/liang19890820/article/details/70653800
//g++ main.cpp factory.cpp
#include "factory.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif


int main ()
{
	// 奔驰
	IFactory *pFactory = IFactory::CreateFactory(IFactory::BENZ_FACTORY);
	ICar *pCar = pFactory->CreateCar();
	IBike *pBike = pFactory->CreateBike();
	
	cout << "Benz factory-Car: " << pCar->GetName() << endl;
	cout << "Benz factory-Bike: " << pBike->GetName() << endl;
	
	SAFE_DELETE(pBike);
	SAFE_DELETE(pCar);
	SAFE_DELETE(pFactory);

	// 宝马
	pFactory = IFactory::CreateFactory(IFactory::BMW_FACTORY);
	pCar = pFactory->CreateCar();
	pBike = pFactory->CreateBike();
	
	cout << "Bmw factory-Car: " << pCar->GetName() << endl;
	cout << "Bmw factory-Bike: " << pBike->GetName() << endl;
	
	SAFE_DELETE(pBike);
	SAFE_DELETE(pCar);
	SAFE_DELETE(pFactory);
	
	// 奥迪
	pFactory = IFactory::CreateFactory(IFactory::AUDI_FACTORY);
	pCar = pFactory->CreateCar();
	pBike = pFactory->CreateBike();
	
	cout << "Audi factory-Car: " << pCar->GetName() << endl;
	cout << "Audi factory-Bike: " << pBike->GetName() << endl;
	
	SAFE_DELETE(pBike);
	SAFE_DELETE(pCar);
	SAFE_DELETE(pFactory);
	
	return 0;
}
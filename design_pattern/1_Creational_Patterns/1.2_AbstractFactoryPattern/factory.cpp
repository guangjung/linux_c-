//factory.cpp
#include "factory.h"

IFactory* IFactory::CreateFactory(FACTORY_TYPE factory)
{
	IFactory *pFactory = NULL;
	switch (factory) 
	{
		case BENZ_FACTORY:     // 奔驰工厂
			pFactory = new BenzFactory();   
			break;
		case BMW_FACTORY:      // 宝马工厂
			pFactory = new BmwFactory();    
			break;
		case AUDI_FACTORY:     // 奥迪工厂
			pFactory = new AudiFactory();
			break;
		default:
			break;
	}
}
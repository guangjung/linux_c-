//factory.h

#ifndef FACTORY_H
#define FACTORY_H

#include "product.h"

// 工厂接口
class IFactory
{
public:
	enum FACTORY_TYPE {
		BENZ_FACTORY, // 奔驰工厂
		BMW_FACTORY,  // 宝马工厂
		AUDI_FACTORY  // 奥迪工厂
	};
	virtual ICar* CreateCar() = 0; // 生产汽车
	virtual IBike* CreateBike() = 0; // 生产汽车
	
	static IFactory* CreateFactory(FACTORY_TYPE factory); // 创建工厂
};

// 奔驰工厂
class BenzFactory : public IFactory
{
public:
	ICar* CreateCar() {
		return new BenzCar();
	}
	
	IBike* CreateBike() {
		return new BenzBike();
	}
};


// 宝马工厂
class BmwFactory : public IFactory
{
public:
	ICar* CreateCar() {
		return new BmwCar();
	}
	
	IBike* CreateBike() {
		return new BmwBike();
	}
};

// 奥迪工厂
class AudiFactory : public IFactory
{
public:
	ICar* CreateCar() {
		return new AudiCar();
	}
	
	IBike* CreateBike() {
		return new AudiBike();
	}
};

#endif
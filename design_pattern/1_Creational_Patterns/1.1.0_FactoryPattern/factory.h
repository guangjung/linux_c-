//factory.h

#ifndef FACTORY_H
#define FACTORY_H

#include "product.h"

// 工厂接口
class IFactory
{
public:
	virtual ICar* CreateCar() = 0; // 生产汽车
};

// 奔驰工厂
class BenzFactory : public IFactory
{
public:
	ICar* CreateCar() {
		return new BenzCar();
	}
};


// 宝马工厂
class BmwFactory : public IFactory
{
public:
	ICar* CreateCar() {
		return new BmwCar();
	}
};

// 奥迪工厂
class AudiFactory : public IFactory
{
public:
	ICar* CreateCar() {
		return new AudiCar();
	}
};

#endif
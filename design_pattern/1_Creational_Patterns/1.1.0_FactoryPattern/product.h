//product.h

#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

using namespace std;

// 汽车接口
class ICar
{
public:
	virtual string GetName() = 0; // 汽车名称
};

// 奔驰汽车
class BenzCar : public ICar
{
public:
	string GetName() {
		return "Benz Car";
	}
};

// 宝马汽车
class BmwCar : public ICar
{
public:
	string GetName() {
		return "Bmw Car";
	}
};

// 奥迪汽车
class AudiCar : public ICar
{
public:
	string GetName() {
		return "Audi Car";
	}
};
#endif
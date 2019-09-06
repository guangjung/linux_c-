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

// 自行车接口
class IBike
{
public:
	virtual string GetName() = 0; // 汽车名称
};
/***************************汽车********************************/
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

/***************************汽车********************************/
// 奔驰自行车
class BenzBike : public IBike
{
public:
	string GetName() {
		return "Benz Bike";
	}
};

// 宝马自行车
class BmwBike : public IBike
{
public:
	string GetName() {
		return "Bmw Bike";
	}
};

// 奥迪自行车
class AudiBike : public IBike
{
public:
	string GetName() {
		return "Audi Bike";
	}
};

#endif
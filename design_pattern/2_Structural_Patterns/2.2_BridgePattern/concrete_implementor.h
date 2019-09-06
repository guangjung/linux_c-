//concrete_implementor.h

#ifndef CONCRETE_IMPLEMENTOR_H
#define CONCRETE_IMPLEMENTOR_H

#include "implementor.h"
#include <iostream>

using namespace std;

// 电灯
class Light : public IElectricalEquipment
{
public:
	// 开灯
	virtual void PowerOn() override {
		cout << "Light is on." << endl;
	}
	
	// 关灯
	virtual void PowerOff() override {
		cout << "Light is off." << endl;
	}
};

// 风扇
class Fan : public IElectricalEquipment
{
public:
	// 打开风扇
	virtual void PowerOn() override {
		cout << "Fan is on." << endl;
	}
	
	// 关闭风扇
	virtual void PowerOff() override {
		cout << "Fan is off." << endl;
	}
};

#endif
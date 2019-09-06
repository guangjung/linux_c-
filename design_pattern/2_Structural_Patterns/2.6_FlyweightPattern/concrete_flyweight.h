#ifndef CONCRETE_FLYWEIGHT_H
#define CONCRETE_FLYWEIGHT_H

#include "flyweight.h"

// 恐怖分子
class Terrorist : public IPlayer
{
public:
	Terrorist() {
		m_task = "Plant a bomb";  //内部状态
	}
	
	 void assignWeapon(string weapon)  {
		m_weapon = weapon;
	}
	
	 void mission()  {
		cout << "Terrorist with weapon " + m_weapon + "," + "Task is " + m_task << endl;
	}
	
};

// 反恐精英
class CounterTerrorist : public IPlayer
{
public:
	CounterTerrorist() {
		m_task = "Diffuse bomb";  //内部状态
	} 
	
	virtual void assignWeapon(string weapon) override {
		m_weapon = weapon;
	}
	
	virtual void mission() override {
		cout << "Counter Terrorist with weapon " + m_weapon + "," + "Task is " + m_task << endl;
	}
	
};

#endif
// flyweight.h
#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

#include <iostream>
#include <string>
using namespace std;

// 玩家 - 有武器和使命
class IPlayer
{
public:
	virtual ~IPlayer() {}
	// 分配武器
	virtual void assignWeapon(string weapon) = 0;
	
	// 使命
	virtual void mission() = 0;

protected:
	string m_task;   // 内部状态
	string m_weapon; // 外部状态 
	
};

#endif
//refined_abstraction.h
#ifndef REFINED_ABSTRACTION_H
#define REFINED_ABSTRACTION_H

#include "abstraction.h"
#include <iostream>

using namespace std;

// 拉链式开关
class PullChainSwitch : public ISwitch
{
public:
	PullChainSwitch(IElectricalEquipment *ee) : ISwitch(ee) {}
	
	// 用拉链式开关打开电器
	virtual void On() override {
		cout << "Switch on the equipment with a pull chain switch." << endl;
		m_pEe->PowerOn();
	}
	
	// 用拉链式开关关闭电器
	virtual void Off() override {
		cout << "Switch off the equipment with a pull chain switch." << endl;
		m_pEe->PowerOff();
	}

};

// 两位开关
class TwoPositionSwitch : public ISwitch
{
public:
	TwoPositionSwitch(IElectricalEquipment *ee) : ISwitch(ee) {}
	
	// 用拉链式开关打开电器
	virtual void On() override {
		cout << "Switch on the equipment with a two-position switch." << endl;
		m_pEe->PowerOn();
	}
	
	// 用拉链式开关关闭电器
	virtual void Off() override {
		cout << "Switch off the equipment with a two-position switch." << endl;
		m_pEe->PowerOff();
	}

};
#endif
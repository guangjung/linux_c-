// concrete_prototype.h
#ifndef CONCRETE_PROTOTYPE_H
#define CONCRETE_PROTOTYPE_H

#include "prototype.h"
#include <iostream>
#include <string>

using namespace std;

// 孙悟空
class SunWukong : public Monkey {

public:
	SunWukong(string name) { m_strName = name;}
	 ~SunWukong() {}
	
	// 拷贝构造函数
	SunWukong(const SunWukong &other) { m_strName = other.m_strName; }
	
	// 调用拷贝构造函数
	Monkey* Clone() {
		return new SunWukong(*this);
	} 
	void Play() {
		cout << m_strName << " play Golden-Hoop-Stick" << endl;
	}

private:
	string m_strName;
};
#endif
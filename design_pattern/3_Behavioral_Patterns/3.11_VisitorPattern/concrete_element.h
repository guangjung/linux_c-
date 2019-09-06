//concrete_element.h
#ifndef CONCRETE_ELEMENT_H
#define CONCRETE_ELEMENT_H

#include "element.h"
#include "visitor.h"
#include <iostream>

using namespace std;

// 钟楼
class BellTower : public IPlace 
{
public:
	virtual void Accept(IVisitor *visitor)  {
		cout << "Bell Tower is accepting visitor." << endl;
        visitor->Visit(this);
	}
};

// 兵马俑
class TerracottaWarriors : public IPlace
{
public:
    virtual void Accept(IVisitor *visitor) override {
        std::cout << "Terracotta Warriors is accepting visitor." << std::endl;
        visitor->Visit(this);
    }
};

#endif
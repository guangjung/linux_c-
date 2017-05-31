#include "Prototype.h"
#include <iostream>
using namespace std;

Prototype::Prototype()
{}
Prototype::~Prototype()
{}
Prototype *Prototype::Clone() const
{
	return 0;
}

//
ConcretePrototype::ConcretePrototype()
{}
ConcretePrototype::~ConcretePrototype()
{}

ConcretePrototype::ConcretePrototype(const ConcretePrototype &cp)
{
	cout << "ConcretePrototype copy..." << endl;
}

Prototype *ConcretePrototype::Clone() const
{
	//此处是浅拷贝，需要考虑深拷贝
    return new ConcretePrototype(*this);
}
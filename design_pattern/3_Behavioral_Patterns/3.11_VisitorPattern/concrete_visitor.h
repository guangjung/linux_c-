//concrete_visitor.h
#ifndef CONCRETE_VISITOR_H
#define CONCRETE_VISITOR_H

#include "visitor.h"
#include "concrete_element.h"

using namespace std;

// 游客
class Tourist : public IVisitor 
{
public:
	virtual void Visit(BellTower *) override {
		cout << "I'm visiting the Bell Tower!" << endl;
	}
	virtual void Visit(TerracottaWarriors *) override {
		cout << "I'm visiting the Terracotta Warriors!" << endl;
	}
};

// 清洁工
class Cleaner : public IVisitor
{
public:
    virtual void Visit(BellTower *) override {
        cout << "I'm cleaning up the garbage of Bell Tower!" << endl;
    }

    virtual void Visit(TerracottaWarriors *) override {
        cout << "I'm cleaning up the garbage of Terracotta Warriors!" << endl;
    }
};

#endif
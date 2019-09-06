//concrete_handler.h
#ifndef CONCRETE_HANDLER_H
#define CONCRETE_HANDLER_H

#include "handler.h"

// 经理
class Manager : public IHandler
{
public:
	Manager() {}
	~Manager() {}
	virtual void HandleRequest(float days) override {
		if (days <= 1) {
			cout << "Manager approved " << days << "-day leave." << endl;
		} else {
			m_pSuccessor->HandleRequest(days);
		}
	}
};

// 总监
class Director : public IHandler
{
public:
	Director() {}
	~Director() {}
	virtual void HandleRequest(float days) override {
		if (days <= 3) {
			cout << "Director approved " << days << "-day leave." << endl;
		} else {
			m_pSuccessor->HandleRequest(days);
		}
	}
};

//总裁
class CEO : public IHandler
{
public:
	CEO() {}
	~CEO() {}
	virtual void HandleRequest(float days) override {
		if (days <= 7) {
			cout << "CEO approved " << days << "-day leave." << endl;
		} else {
			cout << "Give you a long vacation, and you won't have to come to work in the future! " << endl;
		}
	}
};
#endif
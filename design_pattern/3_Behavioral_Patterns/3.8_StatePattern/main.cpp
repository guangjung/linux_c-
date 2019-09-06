//https://blog.csdn.net/CoderAldrich/article/details/83183733
//g++ main.cpp 
#include <iostream>
#include <string>

using namespace std;

class Context;

class State
{
public:
	virtual void Handle(Context *pContext) = 0;
};

class ConcreteStateA : public State
{
public:
	virtual void Handle(Context *pContext) {
		cout << "I am concretestateA." << endl;
	}
};

class ConcreteStateB  : public State
{
public:
	virtual void Handle(Context *pContext) {
		cout << "I am concretestateB." << endl;
	}
};

class ConcreteStateC  : public State
{
public:
	virtual void Handle(Context *pContext) {
		cout << "I am concretestateC." << endl;
	}
};

class Context
{
public:
	Context(State *pState) : m_pState(pState) {}
	
	void Request()
	{
		if (m_pState)
		{
			m_pState->Handle(this);
		}
	}
	
	void ChangeState(State *pState)
	{
		m_pState = pState;
	}
	
	State *GetState()
	{
		return m_pState;
	}
private:
	State *m_pState;
};

int main() 
{
	State *pStateA = new ConcreteStateA();
	State *pStateB = new ConcreteStateB();
	State *pStateC = new ConcreteStateC();
	Context *pContext = new Context(pStateA);
	pContext->Request();
	
	pContext->ChangeState(pStateB);
	pContext->Request();
	
	pContext->ChangeState(pStateC);
	pContext->Request();
	
	return 0;
}
//handler.h
#ifndef HANDLER_H
#define HANDLER_H

#include <iostream>

using namespace std;

class IHandler
{
public:
	IHandler() { m_pSuccessor = NULL; }
	virtual ~IHandler() {}
	void SetSuccessor(IHandler *successor) { m_pSuccessor = successor;}
	virtual void HandleRequest(float days) = 0;

protected:
	IHandler *m_pSuccessor;
};

#endif

#include "Context.h"
#include "Strategy.h"
#include <iostream>

using namespace std;

Context::Context(Strategy *stg)
{
	_stg = stg;
}

Context::~Context()
{
	if (_stg != NULL)
	{
		delete _stg;
	}
}

void Context::DoAction()
{
	_stg->AlgrithmInterface();
}

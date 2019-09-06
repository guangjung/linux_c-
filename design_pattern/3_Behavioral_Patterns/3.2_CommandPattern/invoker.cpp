#include "invoker.h"

using namespace std;

Invoker :: Invoker()
{

}

void Invoker :: addCmd(Command *cmd)
{
	m_cmds.push_back(cmd);
}


void Invoker :: deleteCmd(Command *cmd)
{
	m_cmds.remove(cmd);
}

void Invoker :: notify()
{
	list<Command *>:: iterator it = m_cmds.begin();
	
	while (it != m_cmds.end()) {
		(*it)->execute();
		++it;
	}
}


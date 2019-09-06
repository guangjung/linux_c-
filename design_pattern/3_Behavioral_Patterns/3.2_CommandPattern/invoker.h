#ifndef INVOKER_H
#define INVOKER_H

#include <list>
using namespace std;
#include "command.h"

// 命令的持有者
class Invoker
{
public:
	Invoker();
	void addCmd(Command *cmd);    // 添加命令
	void deleteCmd(Command *cmd);  // 删除命令
	void notify();  // 执行命令

private:
	list<Command *> m_cmds;  // 命令队列
};


#endif
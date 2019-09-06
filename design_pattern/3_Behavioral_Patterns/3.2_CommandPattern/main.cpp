// g++ main.cpp invoker.cpp command.cpp receiver.cpp 
// https://blog.csdn.net/liang19890820/article/details/62060457

#include "invoker.h"
#include "receiver.h"
#include "command.h"

int main()
{
	Receiver *rec = new Receiver();
	Command *cmd1 = new TakeCommand(rec);
	Command *cmd2 = new PayCommand(rec);
	Invoker inv;
	
	inv.addCmd(cmd1);
	inv.addCmd(cmd2);
	inv.notify();
	
	inv.deleteCmd(cmd2);
	inv.notify();
	delete cmd1;
	delete cmd2;
	delete rec;
	return 0;
}
#ifndef  COMMAND_H
#define  COMMAND_H

class Receiver;

// 提供执行命令的接口
class Command
{
public:
	Command(Receiver *receiver);
	virtual void execute() = 0;  // 执行命令

protected:
	Receiver *m_pReceiver;
};

// 打车
class TakeCommand : public Command
{
public:
	TakeCommand(Receiver *receiver);
	void execute();
};

// 付款
class PayCommand : public Command
{
public:
	PayCommand(Receiver *receiver);
	void execute();
};

#endif
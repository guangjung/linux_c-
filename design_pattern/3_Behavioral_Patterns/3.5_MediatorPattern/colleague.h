#ifndef COLLEAGUE_H
#define COLLEAGUE_H

#include "mediator.h"
#include <string>

using namespace std;

class IMediator;

// 抽象同事类
class IColleague
{
public:
	IColleague(const string &name) : m_strName (name) {}
	string getName() const { return m_strName; }
	
	// 通过中介者，将自己的消息发布出去
	virtual void sendMessage(const IMediator& mediator, const string& message) const = 0;
	
	// 接收来自发送者的消息
	virtual void receiveMessage(const IColleague* sender, const string& message) const = 0;

private:
	string m_strName;
};
#endif
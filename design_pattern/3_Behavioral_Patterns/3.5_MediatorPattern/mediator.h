#ifndef MEDIATOR_H
#define MEDIATOR_H

#include "colleague.h"
#include <list>
#include <string>
using namespace std;

class IColleague;

// 抽象中介者
class IMediator
{
public:
	// 注册参与者
	virtual void registerColleague(IColleague *colleague)
	{
		m_colleagues.emplace_back(colleague);
	}
	
	const list<IColleague *>& getColleagues() const 
	{
		return m_colleagues;
	}
	// 将发送者的消息发送给所有参与者
	virtual void distributeMessage(const IColleague* sender, const string &message) const = 0;

private:
	list<IColleague *> m_colleagues;
};

#endif
#ifndef CONCRETE_MEDIATOR_H
#define CONCRETE_MEDIATOR_H

#include "mediator.h"

class ConcreteMediator : public IMediator
{
public:
	// 将发送者的消息发送给所有参与者（但不包括发送者自己）
	virtual void distributeMessage(const IColleague* sender, const string &message) const override {
		for (const IColleague *c : getColleagues()) {
			// 不要将消息发送给自己
			if (c != sender) { 
				c->receiveMessage(sender, message);
			}
		}
	}
};

#endif
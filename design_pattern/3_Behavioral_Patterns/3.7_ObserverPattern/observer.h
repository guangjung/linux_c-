//observer.h
#ifndef OBSERVER_H
#define OBSERVER_H

// 抽象主题
class IObserver
{
public:
	virtual void Update(float price) = 0;  // 注册观察者
};
#endif
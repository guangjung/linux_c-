#ifndef CONCRETE_ITERATOR_H
#define CONCRETE_ITERATOR_H

#include "iterator.h"
#include <iostream>

using namespace std;

template<class Item>
class ConcreteIterator : public Iterator <Item>
{
public:
	ConcreteIterator(Aggregate<Item> *a) : aggr(a), cur(0) {};
	virtual ~ConcreteIterator() {};
	
	virtual void first();
	virtual void next();
	virtual Item *curItem();
	virtual bool isDone();
	
private:
	Aggregate<Item> *aggr;
	int cur;
};


template<class Item>
void ConcreteIterator<Item> :: first()
{
	cur = 0;
}

template<class Item>
void ConcreteIterator<Item> :: next()
{
	if (cur < aggr->getSize()) cur++;
}

template <class Item>
Item *ConcreteIterator<Item> :: curItem()
{
	if (cur < aggr->getSize())
	{
		return &(*aggr)[cur];
	}
	else 
	{
		return NULL;
	}
}

template<class Item>
bool ConcreteIterator<Item> :: isDone()
{
	return cur >= aggr->getSize();
}
#endif

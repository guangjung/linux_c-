#ifndef CONCREATE_AGGREGATE_H
#define CONCREATE_AGGREGATE_H

#include <vector>
#include "aggregate.h"
#include "concrete_iterator.h"

using namespace std;

template <class Item>
class ConcreteAggregate : public Aggregate<Item>
{
public:
    ConcreteAggregate() {};
    virtual ~ConcreteAggregate() {};

    virtual void pushData(Item item);
    virtual Iterator<Item>* createIterator();
    virtual Item& operator[](int index);
    virtual int getSize();
private:
    vector<Item> data;
};

template <class Item>
void ConcreteAggregate<Item>::pushData(Item item)
{
    data.push_back(item);
}

template <class Item>
Iterator<Item>* ConcreteAggregate<Item>::createIterator()
{
    return new ConcreteIterator<Item>(this);
}

template <class Item>
Item& ConcreteAggregate<Item>::operator[](int index)
{
    return data[index];
}

template <class Item>
int ConcreteAggregate<Item>::getSize()
{
    return data.size();
}

#endif

#ifndef AGGREGATE_H
#define AGGREGATE_H 
#include "iterator.h"

template <class Item>
class Aggregate {
public:
	Aggregate() {};
	virtual ~Aggregate() {};

	virtual void pushData(Item item) = 0;
	virtual Iterator<Item> *createIterator() = 0;
	virtual Item& operator[](int index) = 0;
	virtual int getSize() = 0;
};

#endif
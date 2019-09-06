
#ifndef ITERATOR_H
#define ITERATOR_H 

template<class Item>

class Iterator
{
public:
    Iterator() {};
    virtual ~Iterator() {};

    virtual void first() = 0;
    virtual void next() = 0;
    virtual Item *curItem() = 0;
    virtual bool isDone() = 0;
};

#endif

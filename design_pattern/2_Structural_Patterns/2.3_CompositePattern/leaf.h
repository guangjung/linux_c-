//leaf.h
#ifndef LEAF_H
#define LEAF_H

#include "component.h"

class Leaf : public Component
{
public:
    Leaf(string name) : Component(name){}
    virtual ~Leaf(){}
#if 0
    void Add(Component *cmpt) {
        cout << "Can't add to a Leaf" << endl;
    }
    void Remove(Component *cmpt) {
        cout << "Can't remove from a Leaf" << endl;
    }
    Component* GetChild(int index) {
        cout << "Can't get child from a Leaf" << endl;
        return NULL;
    }
#endif
    void Operation(int indent) {
        string newStr(indent, '-');
        cout << newStr << " " << m_strName <<endl;
    }

private:
    Leaf();  // 不允许
};

#endif // LEAF_H

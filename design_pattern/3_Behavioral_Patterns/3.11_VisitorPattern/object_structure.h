//object_structure.h
#ifndef OBJECT_STRUCTURE_H
#define OBJECT_STRUCTURE_H
#include "element.h"
#include <list>

using namespace std;

// 访问者
class City 
{
public:
	void Attach(IPlace *place) {
		m_places.push_back(place);
	}
	
	void Detach(IPlace *place) {
		m_places.remove(place);
	}
	void Accept(IVisitor *visitor){
		for (list<IPlace*>::iterator it = m_places.begin(); it != m_places.end();) {
			(*it)->Accept(visitor);
			it++;
		}
	}

private:
	list<IPlace*> m_places;
};
#endif
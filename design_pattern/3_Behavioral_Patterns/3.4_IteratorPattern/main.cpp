//https://blog.csdn.net/u012611878/article/details/78010435

#include "concreate_aggregate.h"
#include "concrete_iterator.h"

int main(int argc, char *argv[])
{
	Aggregate<int> *aggr = new ConcreteAggregate<int>();
	
	aggr->pushData(3);
	aggr->pushData(2);
	aggr->pushData(1);
	
	Iterator<int> *it = aggr->createIterator();
	
	for (it->first(); !it->isDone(); it->next())
	{
		cout << *it->curItem() << endl;
	}
	delete it;
	delete aggr;
	
	return 0;
	
}
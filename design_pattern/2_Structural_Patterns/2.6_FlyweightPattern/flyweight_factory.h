#ifndef FLYWEIGHT_FACTORY_H
#define FLYWEIGHT_FACTORY_H

#include "concrete_flyweight.h"
#include <map>

// 用于获取玩家

class PlayerFactory
{
public:
	// 如果 T/CT 对象存在，则直接从享元池获取；否则，创建一个新对象并添加到享元池中，然后返回。
	static IPlayer* getPlayer(string type)
	{
		IPlayer *p = NULL;
		if (m_map.find(type) != m_map.end()) {
			p = m_map[type];
		}
		else {
			// 创建 T/CT 对象
			if (type == "T") {
				cout << "Terrorist Created" << endl;
				p = new Terrorist();
			}
			else if (type == "CT") {
				cout << "Counter Terrorist Created" << endl;
				p = new CounterTerrorist();
			}
			else {
				cout << "Unreachable code!" << endl;
			}
			
			// 一旦创建，将其插入到 map 中
			m_map.insert(make_pair(type, p));
		}
		
		return p;
	}
	
	//TBD: delete all players.
	
private:
	// 存储 T/CT 对象（享元池）
	static map<string, IPlayer *> m_map;
	
};

#endif
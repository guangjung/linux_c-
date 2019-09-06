
//https://blog.csdn.net/liang19890820/article/details/79629690
//g++ main.cpp  -std=c++11

#include "concrete_flyweight.h"
#include "flyweight_factory.h"
#include <ctime>

map<string, IPlayer *> PlayerFactory::m_map = map<string, IPlayer *>();

// 玩家类型和武器
static string s_playerType[2] = {"T", "CT"};
static string s_weapons[4] = { "AK-47", "Maverick", "Gut Knife", "Desert Eagle" };

#define GET_ARRAY_LEN(array, len) {len = (sizeof(array) / sizeof(array[0]));}

int main()
{
	srand((unsigned) time(NULL));
	
	int playerLen; 
	int weaponsLen;
	
	GET_ARRAY_LEN(s_playerType, playerLen);
	GET_ARRAY_LEN(s_weapons, weaponsLen);
	
	// 假设，游戏中有十位玩家
	for (int i = 0; i < 10; i++) {
		// 获取随机玩家和武器
		int typeIndex = rand() % playerLen;
		int weaponIndex = rand() % weaponsLen;
		
		string type = s_playerType[typeIndex];
		string weapon = s_weapons[weaponIndex];
		
		// 获取玩家
		IPlayer *p = PlayerFactory:: getPlayer(type);

		// 从武器库中随机分配武器
		p->assignWeapon(weapon);
		
		// 派玩家去执行任务
		p->mission();
		cout << "-----------------------------------------------------------------------" << endl;
		
	}
	
	return 0;
}
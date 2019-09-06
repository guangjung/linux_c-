//main.cpp
//https://blog.csdn.net/liang19890820/article/details/66973296

#include "adapter.h"

int main()
{
	// 创建适配器
	IRussiaSocket *pAdapter = new PowerAdapter();
	
	// 充电
	pAdapter->Charge();
	
	SAFE_DELETE(pAdapter);
	
	
	pAdapter = new  PowerAdapterClass();
	// 充电
	pAdapter->Charge();
	
	SAFE_DELETE(pAdapter);
	
	return 0;
	
}
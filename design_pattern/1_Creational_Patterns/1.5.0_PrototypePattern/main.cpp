#include "concrete_prototype.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

int main() 
{
	Monkey *pSWK = new SunWukong("Qi Tian Da Sheng");
	
	Monkey *pSWK1 = pSWK->Clone();
	Monkey *pSWK2 = pSWK->Clone();
	
	pSWK->Play();
	pSWK1->Play();
	pSWK2->Play();
	
	SAFE_DELETE(pSWK2);
	SAFE_DELETE(pSWK1);
	SAFE_DELETE(pSWK);
	
	return 0;
}
// adapter.h
#ifndef ADAPTER_H
#define ADAPTER_H

#include "target.h"
#include "adaptee.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

//电源适配器

//对象适配器模式
class PowerAdapter : public IRussiaSocket
{
public:
	PowerAdapter() : m_pCharger(new OwnCharger()) {}
	~PowerAdapter() {
		SAFE_DELETE(m_pCharger);
	}
	void Charge() {
		//  使用自带的充电器（两脚扁型）充电
		m_pCharger->ChargeWithFeetFlat();
	}
private:
	OwnCharger *m_pCharger;  // 持有需要被适配的接口对象 - 自带的充电器
};

//类适配器模式
class PowerAdapterClass : public IRussiaSocket, private OwnCharger
{
public:
	PowerAdapterClass() {}

	void Charge() {
		//  使用自带的充电器（两脚扁型）充电
		cout << "*******with class********" << endl;
		ChargeWithFeetFlat();
	}

};
#endif
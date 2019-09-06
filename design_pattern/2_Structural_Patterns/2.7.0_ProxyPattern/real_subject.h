// real_subject.h
#ifndef REAL_SUBJECT_H
#define REAL_SUBJECT_H

#include "subject.h"
#include <iostream>
using namespace std;

// 中国移动
class CMCC : public ITelco
{
public:
	void Recharge(int money) override {
		cout << "Recharge " << money << endl;
	}
};
#endif
#include "command.h"
#include "receiver.h"
#include <iostream>

using namespace std;

Command :: Command (Receiver *receiver) : m_pReceiver(receiver)
{

}

// 打车
TakeCommand :: TakeCommand(Receiver *receiver): Command(receiver)
{
	
}

void TakeCommand :: execute()
{
	cout << "Take command ..." << endl;
	m_pReceiver->takeOrder();
}


// 付款
PayCommand :: PayCommand(Receiver *receiver): Command(receiver)
{
	
}

void PayCommand :: execute()
{
	cout << "Pay command ..." << endl;
	m_pReceiver->receipt();
}

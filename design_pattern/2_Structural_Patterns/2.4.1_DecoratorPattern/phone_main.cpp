
#include <iostream>
#include <string>

using namespace std;

class Phone {
public :
	Phone() {}
	virtual ~Phone() {}
	virtual void ShowDecorate() {}
};

class IPhone : public Phone 
{
private:
	string m_name;
public:
	IPhone(string name): m_name(name) {}
	~IPhone() {}
	void ShowDecorate() { cout << m_name << " [IPhone]" << endl;}
};

class NokiaPhone : public Phone 
{
private:
	string m_name;
public:
	NokiaPhone(string name): m_name(name) {}
	~NokiaPhone() {}
	void ShowDecorate() { cout << m_name << " [NokiaPhone]" << endl;}
};

class DecoratorPhone : public Phone
{
private:
	Phone *m_phone;
public:
	DecoratorPhone(Phone *phone):m_phone(phone) {}
	virtual void ShowDecorate() { m_phone->ShowDecorate(); }

};

class DecoratorPhoneA : public DecoratorPhone
{
public:
	DecoratorPhoneA(Phone *phone) : DecoratorPhone(phone){}
	void ShowDecorate() { DecoratorPhone :: ShowDecorate(); AddDecorate();}

private:
	void AddDecorate() {cout << " 4G" << endl;}
};

class DecoratorPhoneB : public DecoratorPhone
{
public:
	DecoratorPhoneB(Phone *phone) : DecoratorPhone(phone){}
	void ShowDecorate() { DecoratorPhone :: ShowDecorate(); AddDecorate();}

private:
	void AddDecorate() {cout << " 5G" << endl;}
};

int main() {
	
	Phone *iphone = new NokiaPhone("Type_6300");
	Phone *iphone4G = new DecoratorPhoneA(iphone);
	Phone *iphone5G = new DecoratorPhoneB(iphone4G);
	
	iphone5G->ShowDecorate();
	delete iphone5G;
	delete iphone4G;
	delete iphone;
	return 0;
}
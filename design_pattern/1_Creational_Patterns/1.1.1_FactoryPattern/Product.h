#ifndef __PRODUCT_H__
#define __PRODUCT_H__
class Product 
{
	public:
		virtual ~Product() = 0;
	protected:
		Product(); //���ι��캯��
};

class ConcreteProduct : public Product
{
	public:
		~ConcreteProduct();
		ConcreteProduct();
		
};

#endif
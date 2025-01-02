#include<iostream.h>
#include<conio.h>
//Base Class
class Base
{
	public:
	void dispb()
	{
		cout<<"Base Class Method Colled"<<endl;
	}
};
//Derived class
class div1: public Base
{
	public:
	void dispb1()
	{
		cout<<"Derived Class Method Called"<<endl;
	}
};
//Another Derived Class
class div2: public Base
{
	public:
	void dispb2()
	{
		cout<<"Derived Class Method Called"<<endl;

	}
};
//Hybrit Class
class hybrit: public div1, public div2
{
	public:
	void disph()
	{
		cout<<"Hybrid Class Method Called"<<endl;
	}
};
void main()
{
	clrscr();
	hybrit h;
	Base b;
	b.dispb();
	h.dispb1();
	h.dispb2();
	h.disph();
	getch();
}
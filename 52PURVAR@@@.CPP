#include<iostream.h>
#include<conio.h>
class Base
{
	public:
	Base()
	{
		cout<<"Good Morning From Parent Class .....";
	}
	virtual void display()=0;
};
class Derived: Base
{
	public:
	Derived()
	{
		cout<<"\n Good Morning From Child Class....";
	}
	void display()
	{
		cout<<"\n Good Bye From Derived Display....";
	}
};
void main()
{
	Derived D1;
	D1.display();
	getch();
}
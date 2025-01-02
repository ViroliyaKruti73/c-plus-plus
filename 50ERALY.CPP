//eraly binding
#include<iostream.h>
#include<conio.h>
class Base
{
	public:
	void display(int x=10)
	{
		cout<<"\n Helloww Good Byee.....";
		cout<<"\n Base Value of X is :"<<x;
	}
};
class Derived: public Base
{
	public:
	void display(int x=100)
	{
		cout<<"\n Thank You For Calling me.....";
		cout<<"\n Base Value of X is :"<<x;
	}
};
void main()
{
	Base*b=new Derived();
	b->display();
	b->display(1000);
	getch();
}
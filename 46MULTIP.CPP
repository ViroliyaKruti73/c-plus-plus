#include<iostream.h>
#include<conio.h>
class Demo1
{
	public:
	void display()
	{
		cout<<"Demo1 Class Method Called"<<endl;
	}
};
class Demo2
{
	public:
	void display2()
	{
		cout<<"Demo2 Class Method Called"<<endl;
	}
};
class Derived: public Demo1, public Demo2
{
	public:
	void dispDerived()
	{
		cout<<"Derived Class Method Called"<<endl;
	}
};
void main()
{
	clrscr();
	Derived obj;
	obj.display();
	obj.display();
	obj.dispDerived();
	getch();
}
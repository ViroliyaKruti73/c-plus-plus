#include<iostream.h>
#include<conio.h>
class AccessSpec
{
	private:
	int a;
	protected:
	int b;
	public:
	int c;
	AccessSpec()
	{
		a=1;
		b=2;
		c=3;
	}
	void display()
	{
		cout<<"\n Value of A is :"<<a;
		cout<<"\n Value of B is :"<<b;
		cout<<"\n Value of C is :"<<c;
	}
};
class Sub_Class: public AccessSpec
{
	public:
	Sub_Class()
	{
		b=1000;
	}
	void displaySub()
	{
		//cout<<"\n Sub Class Value of A is: "<<a;
		cout<<"\n Sub Class Value of B is: "<<b;
		cout<<"\n Sub Class Value of C is: "<<c;
	}
};
void main()
{
	clrscr();
	AccessSpec as;
	//as.a=10;
	//as.b=20;
	as.c=30;
	as.display();
	Sub_Class sc;
	//sc.a=100;
	//sc.b=200;
	sc.c=300;
	sc.displaySub();
	sc.display();
	getch();
}
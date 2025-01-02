#include<iostream.h>
#include<conio.h>
class DemoA
{
	public:
	int a;
	DemoA()
	{
		cout<<"\n Good Morning From Demo A Constructor.....";
	}
	void displayA()
	{
		cout<<"\n Value of A is :"<<a;
	}
};
class DemoB: public DemoA
{
	public:
	int b;
	DemoB()
	{
		cout<<"\n Good Morning From Demo B Consructor.....";
	}
	void displayB()
	{
		cout<<"\n Value of B is :"<<b;
	}
};
class DemoC: public DemoB
{
	public:
	int c;
	DemoC()
	{
		cout<<"\n Good Morning From Demo C Consructor.....";
	}
	void displayC()
	{
		cout<<"\n Value of C is :"<<c;
	}
};
void main()
{
	clrscr();
	DemoC C1;
	C1.a=10;
	C1.b=20;
	C1.c=30;
	C1.displayA();
	C1.displayB();
	C1.displayC();
	getch();
}
//Single Inheritense
#include<iostream.h>
#include<conio.h>
class DemoA
{
	public:
	int a;
	DemoA()
	{
		cout<<"\n Good Morning From DemoA Constructor.....";
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
void main()
{
	clrscr();
	DemoB B1;
	B1.a=10;
	B1.b=20;
	B1.displayA();
	B1.displayB();
	getch();
}
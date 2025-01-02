#include<iostream.h>
#include<conio.h>
class DemoA
{
	public:
	int a;
	void inputdata()
	{
		cout<<"\n Parent Class....";
		cout<<"\n Enter Value of A :";
		   cin>>a;
	}
	void display()
	{
		cout<<"\n Value of A is :"<<a;
	}
};
class DemoB: public DemoA
{
	public:
	int a,b;
	void inputdata()
	{
	DemoA::inputdata();
		cout<<"\n Child Class....";
		cout<<"\n Enter Value of A :";
		   cin>>a;
		cout<<"\n Enter Value of B :";
		   cin>>b;
	}
	void display()
	{
	DemoA::display();
		cout<<"Sum of A And B :"<<(a+b);
	}
};
void main()
{
	clrscr();
	DemoB db;
	db.inputdata();
	db.display();
	getch();
}
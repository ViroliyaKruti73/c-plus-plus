///Copy Construction
#include<iostream.h>
#include<conio.h>
class DemoA
{
	public:
	DemoA()
	{
		cout<<"\n From DemoA Construction.....";
	}
	void message()
	{
		cout<<"\n Good Morning";
	}
};
class DemoB
{
	public:
	DemoB(DemoA d)
	{
		d.message();
	}
};
void main()
{
	DemoA DA;
	DemoB DB(DA);
	getch();
}


//Constructor Overloading
#include<iostream.h>
#include<conio.h>
class ConstOver
{
	public:
	int grno;
	ConstOver()
	{
		cout<<"\n Hi I am Default Constructer......";
	}
	ConstOver(int grno)
	{
	ConstOver::grno=grno;
		cout<<"\n Consteractor One Parameter :"<<grno;
	}
	ConstOver(int grno,char*nm)
	{
	ConstOver::grno=grno;
		cout<<"\n Constructor Two Parameterized";
		cout<<"\n Grno is :"<<grno<<" And Student Name is :"<<nm;
	}
};
void main()
{
	ConstOver co1;
	ConstOver co2(234);
	ConstOver co3(2234,"Nandani");
	getch();
}
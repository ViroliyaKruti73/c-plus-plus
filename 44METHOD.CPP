//Method Overloding
#include<iostream.h>
#include<conio.h>
class MethOver
{
	public:
	int grno;
	void display()
	{
		cout<<"\n Hi I am Default Method";
	}
	void dispgrno(int grno)
	{
		cout<<"\n Method One Parameter :"<<grno;
	}
	void disp(int grno,char*nm)
	{
		cout<<"\n Method Two Parameter";
		cout<<"\n Grno is :"<<grno<<" And Student Name is  :"<<nm;
	}
};
void main()
{
	clrscr();
	MethOver m1;
	m1.display();
	m1.dispgrno(234);
	m1.disp(2412,"Avani");
	getch();
}

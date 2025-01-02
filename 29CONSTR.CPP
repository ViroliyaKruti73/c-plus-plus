//cleclaration
#include<iostream.h>
#include<conio.h>
class A
{
	public:
	A()
	{
		cout<<"\n Good Morning From Default Constructor";
	}
	A(char*a)
	{
		cout<<"\n From Parameterized Contructor Good Bye......"<<a;
	}
};
void main()
{
	clrscr();
	A a1;
	A a2("XYZ");
	getch();
}
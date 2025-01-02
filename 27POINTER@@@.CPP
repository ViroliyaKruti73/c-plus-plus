//Pointer to Member
#include<iostream.h>
#include<conio.h>
class Demo
{
	public:
		int val;
		void input(int v)
	     {
		val=v;
	     }
		void display()
	     {
		cout<<"\n Value is :"<<val;
	     }
};
void main()
{
	clrscr();
	Demo d1;
	d1.input(10);
	int*ptr=&d1.val;
	int Demo::*p=&Demo::val;
		cout<<"\n Pointer Value is :"<<ptr;
		cout<<"\n Pointer Assign Value is :"<<*ptr;
		//cout<<"\n Member Pointer Value is:"<<Demo::p;
		cout<<"\n Member Pointer Assign Value is :"<<d1.*p;
	d1.display();
	getch();
}
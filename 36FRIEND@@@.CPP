//Friend Function.
#include<iostream.h>
#include<conio.h>
class ArithOpr
{
	public:
	int a,b;
	void inputdata()
	{
		cout<<"Enter Value of A :";
		   cin>>a;
		cout<<"Enter Value of B :";
		   cin>>b;
	}
	friend ArithOpr operator+(ArithOpr a1,ArithOpr a2);
	void display()
	{
		cout<<"\n Value of A is :"<<a;
		cout<<"\n Value of B is :"<<b;
	}
};
ArithOpr operator+(ArithOpr a1,ArithOpr a2)
{
	ArithOpr a3;
	a3.a=a1.a+a2.a;
	a3.b=a1.b+a2.b;
	return a3;
}
void main()
{
	clrscr();
	ArithOpr A1,A2,A3;
		cout<<"Enter First Object Values :\n";
	A1.inputdata();
		cout<<"Enter Second Object Values :\n";
	A2.inputdata();
	A3=A1+A2;
		cout<<"\n First Object Data "<<endl;
	A1.display();
		cout<<"\n Second Object Data"<<endl;
	A2.display();
		cout<<"\n Third Answer Object Data"<<endl;
	A3.display();
	getch();
}
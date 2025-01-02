//Arithmetic operation for two different object
#include<iostream.h>
#include<conio.h>
class ArithOpr
{
	public:
	int a,b;
	void inputdata()
	{
		cout<<"Enter Value of a :";
		   cin>>a;
		cout<<"Enter Value of b :";
		   cin>>b;
	}
	ArithOpr operator+(ArithOpr a1)
	{
		ArithOpr a3;
		a3.a=a+a1.a;
		a3.b=b+a1.b;
		return a3;
	}
	void display()
	{
		cout<<"\n Value of A is :"<<a;
		cout<<"\n Value of B is :"<<b;
	}
};
void main()
{
	clrscr();
	ArithOpr A1,A2,A3;
		cout<<"Enter First Object Value \n";
	A1.inputdata();
		cout<<"Enter Second Object Value \n";
	A2.inputdata();
	A3=A1+A2;
		cout<<"\n First Object Data "<<endl;
	A1.display();
		cout<<"\n Second Object Data "<<endl;
	A2.display();
		cout<<"\n Third Answer Object Data "<<endl;
	A3.display();
	getch();
}



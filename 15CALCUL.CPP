#include<iostream.h>
#include<conio.h>
class arithoper
{
	int firstvalue,secondvalue;
	public:
	void inputdata(int first,int second)
	{
	     firstvalue=first;
	     secondvalue=second;
	}
	void addition()
	{
		cout<<"\n Addition is :"<<(firstvalue+secondvalue);
	}
	void substraction()
	{
		cout<<"\n Substraction is :"<<(firstvalue-secondvalue);
	}
	void multiplication()
	{
		cout<<"\n Multiplication is :"<<(firstvalue*secondvalue);
	}
	void division()
	{
		cout<<"\n Division is :"<<(firstvalue/secondvalue);
	}
	void modulus()
	{
		cout<<"\n Modulus is :"<<(firstvalue%secondvalue);
	}
};
void main()
{
	arithoper ao;
	int x,y;
	clrscr();
		cout<<"Enter First Value :";
		   cin>>x;
		cout<<"Enter Second Value :";
		   cin>>y;
	ao.inputdata(x,y);
	ao.addition();
	ao.substraction();
	ao.multiplication();
	ao.division();
	ao.modulus();
	getch();
}
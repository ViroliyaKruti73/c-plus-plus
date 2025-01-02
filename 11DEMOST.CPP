//write a program to demostrate inline function
#include<iostream.h>
#include<conio.h>
inline void calculatesum(int x,int y)
{
	cout<<"Sum of x and y is :"<<(x+y)<<endl;
}
void main()
{
	int first,second;
	clrscr();
		cout<<"Enter First Value :";
		   cin>>first;
		cout<<"Enter Second Value :";
		   cin>>second;
		   calculatesum(first,second);
		   calculatesum(55,22);
		   calculatesum(100,200);
	getch();
}
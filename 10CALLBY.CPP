//Call by Value.
#include<iostream.h>
#include<conio.h>
void swapping(int first,int second)
{
	first=first+second;
	second=first-second;
	first=first-second;
		cout<<"After Swapping First Value is :"<<first<<" and Second value is :"<<second;
}
void main()
{
	int mainvalue1,mainvalue2;
	clrscr();
		cout<<"Enter First Value :";
		   cin>>mainvalue1;
		cout<<"Enter Second Vlaue :";
		   cin>>mainvalue2;
	swapping(mainvalue1,mainvalue2);
	getch();
}
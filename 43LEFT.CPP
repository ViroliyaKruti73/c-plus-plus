//Left Shift,Right Shift
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class ShiftOpr
{
	public:
	void operator<<(char*c)
	{
		puts(c);
		puts("Thank You....");
	}
	void operator>>(char*c)
	{
		puts(c);
		puts("Thank You....");
	}
};
void main()
{
	ShiftOpr cout,cin;
	clrscr();
		cout<<"\n Good Morning";
	char*c="Good Bye";
		   cin>>c;
	getch();
}

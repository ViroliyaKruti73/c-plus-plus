//demostrate outside fuction
#include<iostream.h>
#include<conio.h>
class DemoA
{
	public:
	char*user;
	void welcomeuser(char*c);
	void displayuser();
};
void main()
{
	clrscr();
	char*ch;
		cout<<"Enter User Name :";
		  cin>>ch;
	DemoA da;
	da.welcomeuser(ch);
	da.displayuser();
	getch();
}
void DemoA::welcomeuser(char*c)
{
	user=c;
}
void DemoA::displayuser()
{
		cout<<"Welcom "<<user<<" into C++ OO Programming.....";
}

//Write the Program to demo 5 declareation and method.
#include<iostream.h>
#include<conio.h>
class greetings
{
	public:
	char*name;
void getdata(char*nm)
    {
	name=nm;
    }
void welcomemsg()
    {
		cout<<"welcome to c++ OOP....."<<name;
    }
};
void main()
{
	clrscr();
	greetings obj;//=new greeting gs();
	char*nm="MJKACC";
	obj.getdata(nm);
	obj.welcomemsg();
	getch();
}
//Variable using oparetar overloading.
#include<iostream.h>
#include<conio.h>
class Time
{
	int hrs,min;
	public:
	   Time(int a,int b)
	{
		cout<<"Constructor called with two parameters...."<<endl;
	hrs=a;
	min=b;
	}
	operator int();
	~Time()
	{
		cout<<"DEstructor Called..."<<endl;
	}
};
Time::operator int()
{
		cout<<"Class Type to Bassic Type Conversion...."<<endl;
	return(hrs*60+min);
}
void main()
{
	clrscr();
	int h,m,duration;
		cout<<"Enter Hours ";
		   cin>>h;
		cout<<"Enter Minutes";
		   cin>>m;
	Time t(h,m);   		//Construct Object
	duration=t;	     	//Casting conversion or duration=(int)t
		cout<<"Total Minutes are "<<duration;
		cout<<"2nd Method Operator Overloading"<<endl;
	duration=t.operator int();
		cout<<"Total Minutes are "<<duration;
	getch();
}
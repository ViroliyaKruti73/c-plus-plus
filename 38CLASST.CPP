#include<iostream.h>
#include<conio.h>
class Time
{
	int hrs,min;
	public:
	    Time(int t)
	{
		cout<<"Basic Type To ==> Class Type Conversion...."<<endl;
	hrs=t/60;
	min=t%60;
	}
	void display();
};
void Time::display()
{
		cout<<hrs<<": Hours(s)"<<endl;
		cout<<min<<"Minutes"<<endl;
}
void main()
{
	clrscr();
	int duration;
		cout<<"Enter Time Duration in Minutes";
		   cin>>duration;
	Time t1=duration;
	t1.display();
	getch();
}
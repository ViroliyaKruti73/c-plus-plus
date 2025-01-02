//Friend Function to Return Object.
#include<iostream.h>
#include<conio.h>
class MyCalc
{
	public:
	int val;
	   void inputdata(int v)
	   {
		val=v;
	   }
	    friend MyCalc sum(MyCalc m1,MyCalc m2)
	    {
		MyCalc m3;
		m3.val=m1.val+m2.val;
		return m3;
	    }
};
void main()
{
	int value;
	clrscr();
	MyCalc c1,c2,c3;
	    cout<<"Enter Value :";
	       cin>>value;
	c1.inputdata(value);
	    cout<<"Enter Value :";
	       cin>>value;
	c2.inputdata(value);
	c3=sum(c1,c2);
	    cout<<"\n Sum is :"<<c3.val;
	getch();
}
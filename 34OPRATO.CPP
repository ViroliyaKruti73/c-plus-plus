//Oprator Overloading
#include<iostream.h>
#include<conio.h>
class Demo
{
	public:
	int x;
	Demo(int a)
	{
		x=a;
	}
	void operator*()      {    x=x*x;        }
	void operator-()      {    x=-x;         }
	void operator+()      {    x=x+x;        }
       //void operator/()     {    x=x/10.0;     }
       void display()
       {
		cout<<"\n Value of X is :"<<x;
       }
};
void main()
{
	clrscr();
	int data;
		cout<<"Enter Value";
		   cin>>data;
	Demo d(data);
	d.display();
	*d;     d.display();
	-d;     d.display();
	+d;     d.display();
       //	/d;    d.display();
       getch();
}

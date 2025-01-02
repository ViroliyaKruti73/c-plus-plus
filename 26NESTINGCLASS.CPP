//nesting of Class
#include<iostream.h>
#include<conio.h>
class Outer
{
	class Inner
	{
	  public:
	  void display()
	  {
		cout<<"\n Good Morning From Inner Class Method";
	  }
	};
	public:
	void outdisplay()
	{
		cout<<"\n Good Morning From Outer Class Method";
	}
	 //Inner i1;
};
void main()
{
	clrscr();
	Outer s1;
	s1.outdisplay();
	Outer::Inner i1;        //Private Inneer Class Member Object Creation
	i1.display();
	//s1.i1.display();     //Object to Object of Inner Class Member
	getch();
}
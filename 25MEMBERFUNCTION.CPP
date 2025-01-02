//Member Function
#include<iostream.h>
#include<conio.h>
class ConstDemo
{
	public:
	void addition(int a,int b)const
	{
		cout<<"\n Addition is "<<(a+b);
	}
};
void main()
{
	ConstDemo cs;
	cs.addition(10,20);
	getch();
}
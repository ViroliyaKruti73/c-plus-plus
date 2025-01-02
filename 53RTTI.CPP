#include<iostream.h>
#include<conio.h>
class B{};
class D: public B{};
	int main()
{
	B*b=new D;
	D*d=dynamic_cast<<D*>(b);
	if(d!=null)
		cout<<"Works";
	else
		cout<<"Cannot Cast B* to D*";
	getchar();
	return 0;
}
#include<iostream.h>
#include<conio.h>
int main(int ac,char*av[])
{
	clrscr();
	if(ac<=1)
	{
		cout<<"There is no Arguments Passed...";
		return 0;
	}
	for(int x=1;x<ac;x++)
	{
		cout<<"\n Your Argument Number "<<x<<"is="<<av[x];
	}
	getch();
	return 1;
}
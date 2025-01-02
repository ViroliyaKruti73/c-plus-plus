//distray allocated memory.
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class Arrmem
{
	public:
	int *p;
	Arrmem()
	{
		p=new int [5];
		for(int x=0; x<5; x++)
		p[x]=rand()/100;
		for(x=0; x<5; x++)
			cout<<p[x] <<"\t";
		delete p;
	}
	Arrmem(int n)
	{
		p=new int[n];
		for(int x=0; x<n; x++)
		p[x]=rand()/100;
		for(x=0; x<n; x++)
			cout<<p[x] <<endl;
		delete p;
	}
	~Arrmem()
	{	delete p;
			cout<<"\n Destructor Execute Success Fully......";
	}
};
void main()
{
	clrscr();
	Arrmem am1;
	int n;
			cout<<"Enter No. of Element :";
			    cin>>n;
	Arrmem am2(n);
			cout<<"\n Dynamic Constructor Array :"
			    <<endl;
	Arrmem *am3=new Arrmem[5];
	getch();
}
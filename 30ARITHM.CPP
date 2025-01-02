//Multipal consuctur declerestion to calculete arithmertic
#include<iostream.h>
#include<conio.h>
class ArithConst
{
	public:
	float x,y;
	ArithConst()
	{
		x=50.5;
		y=30.5;
	}
	ArithConst(float a)
	{
		x=a;
		y=20.5;
	}
	ArithConst(float a,float b)
	{
		x=a;
		y=b;
	}
	void Addition()
	{	cout<<"\n Addition is :"<<(x+y);    }
	void Substraction()
	{	cout<<"\n Substraction is :"<<(x-y);   }
	void Multiplication()
	{	cout<<"\n Multiplication is :"<<(x*y);    }
	void Division()
	{	cout<<"\n Division is :"<<(x/y);    }
	//void Modulus()
       //{	cout<<"Modulus is :"<<x%y);    }
};
void main()
{
	clrscr();
	ArithConst ac1;
	ArithConst ac2(10.5);
	ArithConst ac3(5.5,5.5);
		cout<<"\n Default Constructor Data:";
	ac1.Addition();         ac1.Substraction();
	ac1.Multiplication();  ac1.Division();
       //ac1.modulus();
		cout<<"\n Single Parameter Constructor Data:";
       ac2.Addition();         ac2.Substraction();
       ac2.Multiplication();  ac2.Division();
       //ac2.modulus();
		cout<<"\n Two Parameter Constructor Data:";
       ac3.Addition();         ac3.Substraction();
	ac3.Multiplication();  ac3.Division();
       //ac1.modulus();
	getch();
}
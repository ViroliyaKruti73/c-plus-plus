//Manipularars
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdio.h>
void main()
{
	struct stud
	{
		int grno;
		char*stnm, *result;
		double per;
	};
	struct stud s1[3];
	clrscr();
	for(int i=0; i<1; i++)
	{
		clrscr();
		flushall();
			cout<<"Enter Grno:";
			   cin>>s1[i].grno;
			cout<<"Enter Student Name:";
			   cin>>s1[i].stnm;                //gets(s1[i].stnm);
			cout<<"Enter Result:";
			   cin>>s1[i].result;            //gets(s1[i].result);
			cout<<"Enter Percentage:";
			   cin>>s1[i].per;
			cout<<"Grno"<<setw(20)<<"Srudent Name"<<setw(30)<<"Result"<<setw(20)<<"Percentage";
		for(i=0; i<1; i++)
		{
			cout<<setfill('*');
			cout<<endl<<s1[i].grno<<setw(20)<<s1[i].stnm<<setw(30)<<s1[i].result<<setw(20)<<s1[i].per;
		}
		getch();
		}
}
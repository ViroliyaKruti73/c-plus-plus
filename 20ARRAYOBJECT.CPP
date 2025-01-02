//Write a Program to create student information for ten records with data grno, student Name City content Number as array
#include<iostream.h>
#include<conio.h>
class stud_info
{
	public:
	int grno;
	char stnm[20],city[15],contactno[10],gender[6];
	void inputdata()
	{
		cout<<"Enter GrNo. :";
		  cin>>grno;
		cout<<"Enter Student Name :";
		  cin>>stnm;
		cout<<"Enter City :";
		  cin>>city;
		cout<<"Enter Contact Number :";
		  cin>>contactno;
		cout<<"Enter Gender :";
		  cin>>gender;
	}
	void displaydata()
	{
		cout<<"\n"<<grno<<"\t"<<stnm<<"\t"<<city<<contactno<<"\t"<<gender;
	}
};
void main()
{
	stud_info s[10];
	for(int x=0;x<10;x++)
	{
		s[x].inputdata();
	}
		cout<<"\n GrNo. \t Student Name \t City \t Contact Number \t Gender";
		for(x=0;x<10;x++)
	{
		s[x].displaydata();
	}
}
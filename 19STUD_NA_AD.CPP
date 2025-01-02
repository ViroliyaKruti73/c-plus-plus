//Write Program to display and set five students name with its age.Create Student into class and set the array for all variables.
#include<iostream.h>
#include<conio.h>
class stud_into
{
	int age[5];
	char stnm[5][10];
	public:
	 void inputdata()
	 {
		for(int x=0; x<5; x++)
	 {
		  cout<<"Enter Student Name :";
		    cin>>stnm[x];
		  cout<<"Enter Student Age :";
		    cin>>age[x];
	 }
	 }
	   void dispdata()
	 {
		for(int x=0;x<5;x++)
	 {
		  cout<<"\n Student Name is :"<<stnm[x] <<"and it's Age is :"<<age[x];
	 }
	 }
};
void main()
{
	stud_into s1;
	  s1.inputdata();
	  s1.dispdata();
	getch();
}
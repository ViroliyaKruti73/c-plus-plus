#include<iostream.h>
#include<iomanip.h>
#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	int num;
		cout<<"boolalpha:"<<"true"<<endl;
		cout<<"showbase:"<<hex<<122<<endl;
		cout<<"showprint:"<<254<<endl;
		cout<<"show pos:"<<12<<","<<-12<<endl;
		cout<<"unitbuf:"<<"this flushed"<<endl;
		cout<<"uppercase:"<<hex<<123<<endl;
		cout<<setfill('8')<<setw(10)<<endl;
		cout<<"setprecision(3):"<<3.1415<<endl;
		cout<<"setbase(16):"<<5<<endl;
		cout<<"restiosflgs:"<<dec<<42<<endl;
		cout<<"setiosflags:"<<3.1416<<endl;
		cout<<"noboolalpha:"<<"true"<<endl;
		cout<<"noshowbase:"<<hex<<255<<endl;
		cout<<"noshowprint:"<<256<<endl;
		cout<<"noshowpos:"<<+13<<endl;
		cout<<"nounitbuf:"<<42;
		cout.flush()<<endl;
		cout<<"decimal:"<<dec<<255<<endl;
		cout<<"octal:"<<oct<<255<<endl;
		cout<<"hexadecimal:"<<hex<<12<<endl;
		cout<<"fixed:"<<3.1426<<endl;
		cout<<"scientific:"<<3.14159<<endl;
		cout<<"left:"<<setw(10)<<"left"<<endl;
		cout<<"rigtt:"<<setw(10)<<"right"<<endl;
		cout<<"internal:"<<setw(10)<<42<<endl;
		cout<<"Enter number:";
			cin>>ws>>num;
		cout<<"you entered:"<<num<<endl;
		cout<<setfill('*')<<setw(5)<<42<<endl;
			return 0;
}
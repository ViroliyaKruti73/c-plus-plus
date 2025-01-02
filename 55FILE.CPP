#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
    ofstream filew("bcamorning.txt");
    clrscr();
    char*input;
	cout<<"Enter Your Message";
	   cin>>input;
           filew<<input;
	cout<<endl<<"File Data Written....";
            filew.close();
    getch();
}
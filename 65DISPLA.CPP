#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
	clrscr();
	char *data=" ";
	ifstream ifs;
	ifs.open("demo.txt");
	while(ifs)
	{
		ifs>>data;
		cout<<"\n file data is"<<endl;
		cout<<data;
	}
	char ch;
	int vowel=0;
	while(ifs.get(ch));
	{
		ch=tolower(ch);
		if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u')
		{
			vowel++;
		}
	}
	ifs.close();
	cout<<"number of vowels:"<<vowel<<endl;
}
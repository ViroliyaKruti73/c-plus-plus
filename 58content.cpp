#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char *data=" ";
	ifstream ifs;
	ifs.open("Demo.txt");
		cout<<"\n Your file Pointer Position is:"<<ifs.tellg()<<endl;
	ifs>>data;
		cout<<data;
		cout<<"\n Your File Pointer Position is:"<<ifs.tellg()<<endl;
	ifs.seekg(10);
		cout<<"\n Your File Pointer Position is:"<<ifs.tellg()<<endl;
		cout<<"\n Single data Reading \n";
	char c;
while(ifs)
	{
	c=ifs.get();
		//cout<<"\n File Data is :"<<endl;
		cout<<c;
	}
	cout<<"\n Your File Pointer Position is:"<<ifs.tellg();
	ifs.close();
}
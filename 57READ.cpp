#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char *data=" ";
	ifstream ifs;
	ifs.open("Demo.txt");
	//while(ifs)
	//{
		ifs>>data;
		//cout<<"\n File Data is:"<<endl;
		cout<<data;
	//}
	/*while(ifs)
	{
		ifs.getline(ifs,data);
		//cout<<"\n File Data is:"<<endl;
		cout<<data;
	}*/
		cout<<"\n Single data Reading\n";
	char c;
	while(ifs)
	{
		c=ifs.get();
		//cout<<"\n File Data is:"<<endl;
		cout<<c;
	}
	ifs.close();
}


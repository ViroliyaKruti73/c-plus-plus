//Write a Program to demostrate private member function declaration and multiple object creation.
 #include<iostream.h>
 #include<conio.h>
 class test
 {
	int n;
	void readdata();
	public:
	void inputdata(int a);
 };
 void main()
 {
	clrscr();
	int val;
	cout<<"\n Enter value:";
	  cin>>val;
	test T1,T2,T3;
	T1.inputdata(val);
	cout<<"\n Enter Value:";
	  cin>>val;
	T2.inputdata(val);
	cout<<"\n Enter Value:";
	  cin>>val;
	T3.inputdata(val);
	cout<<"\n Enter Value:";
	  cin>>val;
}
void test::readdata()
{
	cout<<"\nValue is :"<<n;
}
void test::inputdata(int a)
{
	 n=a;
	readdata();
}
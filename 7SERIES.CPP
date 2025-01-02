//series 1 3 4 5 8 12...n
#include<iostream.H>
void main()
{
	int no,x,n;
		cout<<"\n Enter nNo of Value :";
		   cin>>no;
	int a=0, b=1, c=0;
		cout<<(a+1)<<(b+2);
	for(x=3; x<=n; x++)
	{
		c=a+b;
		cout<<(c+x);
		a=b;
		b=c;
	}
}
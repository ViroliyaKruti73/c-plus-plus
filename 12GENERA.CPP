//write a code to generate dimand pyramid.
#include<iostream.h>
#include<conio.h>
int main()
{
	int n,i,j;
	clrscr();
		cout<<"Enter The Number of Rows for the Dimand Pyramid :";
		  cin>>n;
	for(i=0; i<=n; i++)
	{
	for(j=1; j<=n-i; j++)
		cout<<"   ";
	for(j=1; j<=2*i-1; j++)
		cout<<" * ";
		cout<<endl;
	}
	for(i=n-1; i>+1;i--)
	{
	for(j=1;j<n-i;j++)
		cout<<"    ";
	for(j=1; j<=2*i-1; j++)
		cout<<" * ";
		cout<<endl;
	}
	return 0;
}
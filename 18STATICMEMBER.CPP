#include<iostream.h>
#include<conio.h>
class totalstudent
{
	int grno;
	static int cnt;
	public:
	int count;
	void setgrno(int gr)
	  {
	    grno=gr;
	    cnt++;
	    count++;
	  }
	  void gettotalstudent()
	  {
	    cout<<"\n Total Number of Students Are :"<<cnt;
	    cout<<"\n Total Number of Students as per Object :"<<count;
	  }
};
	int totalstudent::cnt=0;
	void main()
     {
	clrscr();
	int grno;
	totalstudent ts1,ts2,ts3;;;
	ts1.count=ts2.count=ts3.count=0;
	cout<<"\n Enter First Object Values :"<<endl;
	    for(int x=1; x<=3; x++)
	      {
		 cout<<"Enter GRNo. :";
		 cin>>grno;
		 ts1.setgrno(grno);
	      }
		 cout<<"\n Enter Second Object Values :"<<endl;
		 for(x=1;x<=5;x++)
		   {
		      cout<<"Enter GRNo. :";
			cin>>grno;
		      ts2.setgrno(grno);
		   }
		      cout<<"\n Enter Third Object Values :"<<endl;
		      for(x=1;x<=2;x++)
		   {
		      cout<<"Enter GRNO :";
			cin>>grno;
		      ts3.setgrno(grno);
		   }
		      cout<<"\n Value of First Object :"<<endl;
		       ts1.gettotalstudent();
		      cout<<"\n Value of Second Object :"<<endl;
		       ts2.gettotalstudent();
		      cout<<"\n Value of Third Object :"<<endl;
		       ts3.gettotalstudent();
		       getch();
     }
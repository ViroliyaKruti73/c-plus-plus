#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
    try
    {
        int x;
        char c;
             cout<<"Enter Number Value:";
                 cin>>x;
             cout<<"Enter Your Name First Character:";
                 cin>>c;
        if(x<0)
    {
        throw x;
    }
                cout<<"\n Successfully Passed from number input.....";
                if(c=='P'||c=='p')
                throw c;
                cout<<"\n Program Exection Sucess.....";
    }
    catch(int e)
    {
        cout<<endl<<e<<"is negative number not allowed to execute";
    }
    catch(char ch)
    {
        cout<<endl<<ch<<"Must out from class...";
    }
    catch(...)
    {
        cout<<"\n Default Exception catch.....";;;
    }
    return 0;
}

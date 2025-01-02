//mil
#include<iostream.h>
#include<conio.h>
class Something
{
	private:
	int m_value1;
	double m_value2; char m_value3;
	public:
	Something():m_value1(1),m_value2(2.2),m_value3('c')
	//directly initialize our member variables
	{
		//No need for assignment here
	}
	void print()
	{
		cout<<"Something ("<<m_value1<<","<<m_value2<<","<<m_value3<<")\n";
	}
};
int main()
{
	Something Something;
	Something.print();
	return 0;
}

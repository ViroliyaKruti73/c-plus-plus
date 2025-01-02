#include<iostream.h>
#include<conio.h>
class Animal
{
	public:
	void sound()
	{
		cout<<"Animal Make A Sound"<<endl;
	}
};
class Dog: public Animal
{
	public:
	void sound()
	{
		cout<<"Dog Barks....."<<endl;
	}
};
class Cat: public Animal
{
	public:
	void sound()
	{
		cout<<"Cat Meows...."<<endl;
	}
};
void main()
{
	clrscr();
	Animal Animal;
	Dog Dog;
	Cat Cat;
	Animal.sound();
	Dog.sound();
	Cat.sound();
	getch();
}
#include<iostream.h>
#include<conio.h>
class employee
{
	protected:
	int id;
	char name[100];

	public:
	void get()
	{
		cout<<"Enter id: "<<endl;
		cin>>id;
		cout<<"Enter name: "<<endl;
		cin>>name;
	}
	void put()
	{
		cout<<"ID:"<<id<<endl;
		cout<<"Name:"<<name<<endl;
	}
};

class empinfo:public employee
{
	protected:
	float sal;

	public:
	void infoget()
	{
		cout<<"Enter salary:"<<endl;
		cin>>sal;
	}
	void infoput()
	{
		cout<<"Salary:"<<sal<<endl;
	}
};

void main()
{
	clrscr();
	empinfo b;
	b.get();
	b.infoget();
	b.put();
	b.infoput();
	getch();
}
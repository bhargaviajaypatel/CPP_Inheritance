#include<iostream.h>
#include<conio.h>
class student
{
	protected:
	char name[10],gender[10];
	int age;

	public:
	void getbasicinfo()
	{
		cout<<"Enter Name:";
		cin>>name;
		cout<<"Enter gender:";
		cin>>gender;
		cout<<"Enter age:";
		cin>>age;
	}
	void displaybasicinfo()
	{
		cout<<"Name:"<<name<<endl;
		cout<<"Gender:"<<gender<<endl;
		cout<<"Age:"<<age<<endl;
	}
};
class result:public student
{
	protected:
	int totalmarks,mark1,mark2,mark3,mark4,mark5;
	float percentage;

	public:
	void getresult()
	{
		cout<<"Enter Marks for Subject 1:";
		cin>>mark1;
		cout<<"Enter Marks for Subject 2:";
		cin>>mark2;
		cout<<"Enter Marks for Subject 3:";
		cin>>mark3;
		cout<<"Enter Marks for Subject 4:";
		cin>>mark4;
		cout<<"Enter Marks for Subject 5:";
		cin>>mark5;

		totalmarks=mark1+mark2+mark3+mark4+mark5;
		percentage=totalmarks/5.0;
	}
	void putresult()
	{
		cout<<"Marks for Subject 1:"<<mark1<<endl;
		cout<<"Marks for Subject 2:"<<mark2<<endl;
		cout<<"Marks for Subject 3:"<<mark3<<endl;
		cout<<"Marks for Subject 4:"<<mark4<<endl;
		cout<<"Marks for Subject 5:"<<mark5<<endl;
		cout<<"Total Marks:"<<totalmarks<<endl;
		cout<<"Percentage:"<<percentage<<endl;
	}
};
void main()
{
	clrscr();
	result std1;
	std1.getbasicinfo();
	std1.getresult();
	std1.displaybasicinfo();
	std1.putresult();

	getch();
}
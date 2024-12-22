/* Write a program of Addition, Subtraction, Division, Multiplication using 
constructor. */

#include<iostream>
using namespace std;

class cal
{
	int a;
	int b;
	
	public:
		cal()
		{
			a=10;
			b=5;
		}
		int add()
		{
			return a+b;
		}
		int sub()
		{
			return a-b;
		}
		int mul()
		{
			return a*b;
		}
		int div()
		{
			return a/b;
		}
};

main()
{
	cal c;
	int choice;
	
	cout<<"\n 1. Addition ";
	cout<<"\n 2. Subtraction ";
	cout<<"\n 3. Division ";
	cout<<"\n 4. Multiplication ";
	
	cout<<"\n\n Enter your choice : ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			int a;
			a = c.add();
			cout<<"\n\n Addition : "<<a;
			break;
		
		case 2:
			int s;
			s = c.sub();
			cout<<"\n\n Subtraction : "<<s;
			break;
		
		case 3:
			int m;
			m = c.mul();
			cout<<"\n\n Multiplication : "<<m;
			break;
			
		case 4:
			int d;
			d = c.div();
			cout<<"\n\n Division : "<<d;
			break;
	}
}

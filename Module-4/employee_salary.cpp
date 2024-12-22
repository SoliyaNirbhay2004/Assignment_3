#include<iostream>
using namespace std;

class Employee
{
	int id;
	string ename;
	string dept;
	int salary;
	
	public:
		void getdata()
		{
			cout<<"\n Enter Employee Id : ";
			cin>>id;
			
			cout<<"\n Enter Employee Name : ";
			cin>>ename;
			
			cout<<"\n Enter Employee Dept : ";
			cin>>dept;
			
			cout<<"\n Enter Employee Salary : ";
			cin>>salary;	
		}
		
		void display()
		{
			cout<<"\n Employee Id : "<<id;
			cout<<"\n Employee Name : "<<ename;
			cout<<"\n Employee Dept : "<<dept;
			cout<<"\n Employee Salary : "<<salary;	
		}
		
		void commision()
		{
			int com;
		     if(salary>=60000)
			 {
			 	com = salary * 10/100;
			 	cout<<"\n Total Salary : "<<salary+com;
			 }
			 else if(salary>=50000)
			 {
			 	com = salary * 8/100;
			 	cout<<"\n Total Salary : "<<salary+com;
			 }
			 else if(salary>=40000)
			 {
			 	com = salary * 5/100;
			 	cout<<"\n Total Salary : "<<salary+com;
			 }	
			 else if(salary>=30000)
			 {
			 	com = salary * 2/100;
			 	cout<<"\n Total Salary : "<<salary+com;
			 }
			 else if(salary<30000)
			 {
			 	cout<<"\n Total Salary : "<<salary;
			 }
		}	
};

main()
{
	Employee e;
	e.getdata();
	cout<<"\n";
	e.display();
	cout<<"\n";
	e.commision();
}

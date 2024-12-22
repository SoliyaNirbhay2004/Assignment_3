/* Write a C++ program to implement a class called Employee that has 
private member variables for name, employee ID, and salary. Include 
member functions to calculate and set salary based on employee 
performance. Using of constructor  */

#include<iostream>
using namespace std;

class employee
{
	string emp_name;
	int emp_id;
	int salary;
	
	public :
		 employee(string n,int i,int s)
		 {
		 	emp_name = n;
		 	emp_id = i;
		 	salary = s;
		 }
		 
		 void display()
		 {
		 	cout<<"\n\n Employee Name : "<<emp_name;
		 	cout<<"\n\n Employee Id : "<<emp_id;
		 	cout<<"\n\n Employee Salary : "<<salary;
		 }
		 
		 void setsalary(int rating)
		 {
		 	if (rating >= 9) 
			{
            	salary += salary * 0.2;
				cout<<"\n\n Base Salary : "<<salary; 
        	}
			else if (rating >= 7)
			{
            	salary += salary * 0.1;
				cout<<"\n\n Base Salary : "<<salary;  
        	}
			else if (rating >= 5) 
			{
            	salary += salary * 0.05;
				cout<<"\n\n Base Salary : "<<salary;  
        	}
			else
			{
            	salary -= salary * 0.1; 
				cout<<"\n\n Base Salary : "<<salary; 
        	}
		 }
};

main()
{
	string name;
	int id,salary;
	
	cout<<"\n\n Enter Employee Name : ";
	cin>>name;
	
	cout<<"\n\n Enter Employee Id : ";
	cin>>id;
	
	cout<<"\n\n Enter Employee Salary : ";
	cin>>salary;
	
	employee e(name,id,salary);
	
	int rating;
	
	cout<<"\n\n Enter Employee performance Rating : ";
	cin>>rating;
	
	e.display();

	e.setsalary(rating);
}

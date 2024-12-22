/* Write a C++ program to create a class called Car that has private 
member variables for company, model, and year. Implement member 
functions to get and set these variables.  */

#include<iostream>
using namespace std;

class car
{
	string company;
	string model;
	int year;
	
	public :
		car()
		{
			company = "Jaguar ";
			model = "F-Type Convertible ";
			year = 2024;
		}
		void setdata()
		{
			cout<<"\n\n Car Company Name : "<<company;
			cout<<"\n\n Car Model Name : "<<model;
			cout<<"\n\n Car Model Year : "<<year;
		}
};

main()
{
	car c;
	c.setdata();
}

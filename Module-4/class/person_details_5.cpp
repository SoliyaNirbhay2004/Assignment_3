/*  Write a C++ program to create a class called Person that has private 
member variables for name, age and country. Implement member 
functions to set and get the values of these variables.  */

#include<iostream>
using namespace std;

class person
{
	string name;
	int age;
	string country;
	
	public :
		 void get_value()
		 {
		 	cout<<"\n Enter Person Name : ";
		 	cin>>name;
		 	
		 	cout<<"\n Enter Person Age : ";
		 	cin>>age;
		 	
		 	cout<<"\n Enter Person country : ";
		 	cin>>country;
		 }
		 void set_value()
		 {
		 	cout<<"\n Name : "<<name;
		 	cout<<"\n Age : "<<age;
		 	cout<<"\n Country : "<<country;
		 }
};

main()
{
	person p;
	p.get_value();
	p.set_value();
}

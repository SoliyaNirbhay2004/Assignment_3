/* Write a C++ Program to show access to Private Public and Protected using 
Inheritance  */

#include<iostream>
using namespace std;


class Base
{
	private : int pri_var; 
	
	protected : int pro_var; 
	
	public : int pub_var; 
			
		     void get_base()
		     {
		     	pri_var=100;
			 }
			 
			 void print_base()
			 {
			 	cout<<"\n\n Private : "<<pri_var;
			 }
};

class Derived : public Base
{
	public :
				void get_derived()
				{
					pro_var=200;
					pub_var=300;
				}
				
				void print_derived()
				{
					cout<<"\n\n Protected : "<<pro_var;
					cout<<"\n\n Public : "<<pub_var;
				}
};

main()
{
	Derived D;
	D.get_base();
	D.get_derived();
	
	D.print_base();
	D.print_derived();
	
	D.pub_var=400;
	cout<<"\n\n Public in main() : "<<D.pub_var;
}

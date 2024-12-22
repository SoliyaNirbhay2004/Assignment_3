/* Write a C++ program to implement a class called Circle that has private 
member variables for radius. Include member functions to calculate the 
circle's area and circumference. */

#include<iostream>
using namespace std;

class circle
{
	int redius;
	float pi;
	
	public:
		void getdata()
		{
			cout<<"\n Enter Redius : ";
			cin>>redius;
			pi=3.14;
		}
		void area()
		{
			cout<<"\n Area of circle : "<<pi*redius*redius;
		}
		void circum()
		{
			cout<<"\n\n circumference of circle : "<<2*pi*redius;
		}
};

main()
{
	circle c;
	c.getdata();
	c.area();
	c.circum();
}

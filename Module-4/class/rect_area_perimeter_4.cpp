/*  Write a C++ program to create a class called Rectangle that has private 
member variables for length and width. Implement member functions to 
calculate the rectangle's area and perimeter.  */

#include<iostream>
using namespace std;

class rect
{
	int length;
	int width;
	
	public:
		void getdata()
		{
			cout<<"\n Enter Rectangle length : ";
			cin>>length;
			
			cout<<"\n Enter Rectangle width : ";
			cin>>width;
		}
		void area()
		{
			cout<<"\n Area of Rectangle : "<<length*width;
		}
		void perimeter()
		{
			cout<<"\n\n Perimeter of Rectangle : "<<2*(length+width);
		}
};

main()
{
	rect r;
	r.getdata();
	r.area();
	r.perimeter();
}

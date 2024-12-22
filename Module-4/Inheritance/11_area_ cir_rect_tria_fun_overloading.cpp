/* Write a program to calculate the area of circle, rectangle and triangle 
using Function Overloading 
Rectangle: Area * 
breadth Triangle: ½ 
*Area* breadth Circle: 
Pi * Area *Area */

#include<iostream>
using namespace std;

void area(int r);
void area(int l,int w);
void area(double h,double b);

main()
{
	area(5);
	area(10,15);
	area(12.2,15.4);
}

void area(int r)
{
	float pi = 3.14;
	cout<<"\n\n Area of circle : "<<pi*r*r;
}

void area(int l,int w)
{
	cout<<"\n\n Area of rectangle : "<<l*w;
}

void area(double h,double b)
{
	cout<<"\n\n Area of triangle : "<<(h*b)/2;
}

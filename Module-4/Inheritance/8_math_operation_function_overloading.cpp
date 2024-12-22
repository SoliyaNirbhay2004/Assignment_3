/* Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading  */

#include<iostream>
using namespace std;

void cal(int a,int b);
void cal(int a,double b);
void cal(double a,int b);
void cal(double a,double b);

main()
{
	cal(10,20);
	cal(10,2.5);
	cal(5.5,4);
	cal(10.5,4.2);
}

void cal(int a,int b)
{
	cout<<"\n\n Addition of two numbers :  "<<a+b;
}

void cal(int a,double b)
{
	cout<<"\n\n Subtraction of two numbers : "<<a-b;
}

void cal(double a,int b)
{
	cout<<"\n\n Multiplication of two numbers : "<<a*b;
}

void cal(double a,double b)
{
	cout<<"\n\n Division of two numbers : "<<a/b;
}

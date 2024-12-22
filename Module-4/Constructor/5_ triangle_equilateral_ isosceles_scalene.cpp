/* Write a C++ program to create a class called Triangle that has private 
member variables for the lengths of its three sides. Implement member 
functions to determine if the triangle is equilateral, isosceles, or scalene. */

#include<iostream>
using namespace std;

class triangle
{
	int s1,s2,s3;
	
	public :
		  
			triangle(int l1,int l2,int l3)
			{
				s1 = l1;
				s2 = l2;
				s3 = l3;
			}
			
			void determine()
			{
				if(s1==s2 && s2==s3 && s1==s3)
				{
					cout<<"\n\n Triangle is equilateral";
				}
				else if(s1==s2 || s2==s3 || s1==s3)
				{
					cout<<"\n\n Triangle is isosceles";
				}
				else
				{
					cout<<"\n\n Triangle is scalene";
				}
			}
};

main()
{
	int l1,l2,l3;
	
	cout<<"\n\n Enter Length of First Side : ";
	cin>>l1;
	
	cout<<"\n\n Enter Length of Second Side : ";
	cin>>l2;
	
	cout<<"\n\n Enter Length of Third Side : ";
	cin>>l3;
	
	triangle t(l1,l2,l3);
	
	t.determine();
	
}

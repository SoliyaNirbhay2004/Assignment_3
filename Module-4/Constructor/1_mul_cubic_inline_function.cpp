/* Write a program to find the multiplication values and the cubic values using 
inline function  */

#include<iostream>
using namespace std;

class num
{
	private:
	    int a,b;
	
	public :
		void getdata()
		{
			a=10;
			b=5;
		}
		inline int mul()
		{
			return a*b;
		}
		inline int cubic()
		{
			return a*a*a;
		}
};

main()
{
	num n;
	int Ans1,Ans2;
	
	n.getdata();
	
	Ans1 = n.mul();
	
	Ans2 = n.cubic();

	cout<<"\n multiplication : "<<Ans1;
	cout<<"\n";
	cout<<"\n cubic : "<<Ans2;
}

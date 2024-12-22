/* Write a C++ Program to illustrates the use of Constructors in multilevel 
inheritance  */

#include<iostream>
using namespace std;

class class1
{
	protected:
			int a;
	
	public :
		   class1()
		   {
		   		a = 10;
		   }
		   
};

class class2 : public class1
{
	protected :
			int b;
			
	public : 
			class2()
			{
				b = 20;
			}
};

class class3 : public class2
{
	int c;
	
	public :
		    class3()
		    {
		    	c = 30;
			}
			
			void print()
			{
				cout<<"\n\n Class 1 -> a = "<<a;
				cout<<"\n\n Class 2 -> b = "<<b;
				cout<<"\n\n Class 3 -> c = "<<c;
			}
};

main()
{
	class3 c;
	c.print();
}

//  Wap_to_create_simple_calculator_using_class//
#include<iostream>
using namespace std;
class cal
{
	int a;
	int b;
	public :
			void getdata()
			{
				cout<<"\n Enter first number : \n";
				cin>>a;
				
				cout<<"\n Enter second number : \n";
				cin>>b;
				
			}
			void sum()
			{
				cout<<"\n Sum = "<<a+b;
			}
			void sub()
			{
				cout<<"\n Sub = "<<a-b;
			}
			void mul()
			{
				cout<<"\n Mul = "<<a*b;
			}
			void div()
			{
				cout<<"\n Div = "<<a/b;
			}
};
main()
{
	cal c;
	int choice;
	cout<<"\n 1. Sum \n";
	cout<<"\n 2. Sub \n";
	cout<<"\n 3. Mul \n";
	cout<<"\n 4. Div \n";
	cout<<"\n Enter your choice : \n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			 c.getdata();
			 c.sum();
			 break;
		
		case 2:
			 c.getdata();
			 c.sub();
			 break;
			 
		case 3:
			 c.getdata();
			 c.mul();
			 break;
			 
		case 4:
			 c.getdata();
			 c.div();
			 break;
	}
}

/* Write a C++ program to implement a class called Bank Account that has 
private member variables for account number and balance. Include 
member functions to deposit and withdraw money from the account. */

#include<iostream>
using namespace std;

class bank
{
	int acnum;
	int balance;
	
	public:
		bank()
		{
			acnum = 101;
			balance = 50000;
		}
		
		void display();
		
		int deposit();
		
		int withdraw();
};

void bank :: display()
{
	cout<<"\n\n Account Number : "<<acnum;
	cout<<"\n\n Account Balance : "<<balance;
}

int bank :: deposit()
{
	int dep;
	cout<<"\n\n Enter deposit Amount : ";
	cin>>dep;
	balance = balance + dep;
		
	return balance;
}

int bank :: withdraw()
{
	int wid;
	cout<<"\n\n Enter withdraw Amount : ";
	cin>>wid;
	balance = balance - wid;
			
	return balance; 
}

main()
{
	bank b;
	b.display();
	
	int dep;
	dep = b.deposit();
	cout<<"\n\n Total Balance : "<<dep;
	
	int wid;
	wid = b.withdraw();
	cout<<"\n\n Total Balance : "<<wid;
	
}

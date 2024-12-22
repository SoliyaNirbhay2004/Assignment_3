/* Define a class to represent a bank account. Include the following members: 
3. Data Member: 
    -Name of the depositor 
	-Account Number 
	-Type of Account 
	-Balance amount in the account
	 
 Member Functions:
    -To assign values 
	-To deposited an amount 
	-To withdraw an amount after checking balance 
	-To display name and balance 
*/

#include<iostream>
using namespace std;


class bank
{
	private :
			string name;
			int acno;
			string acname;
			int balance;
			
	public :
		
			void get_details()
			{
				cout<<"\n Enter Name of Account Holder : \n";
				cin>>name;

				cout<<"\n Enter Account no. : \n";
				cin>>acno;
		
			    cout<<"\n Enter Name of Account : \n";
				cin>>acname;
		
				cout<<"\n Enter balance : \n";
				cin>>balance;
			}	
	
			void display()
			{
				cout<<"\n Name of Acount Holder : "<<name;
				cout<<"\n Account No. : "<<acno;
				cout<<"\n Name of Account : "<<acname;
				cout<<"\n Salary : "<<balance;
			}
			
			void deposited()
			{
				int dep;
				
				cout<<"\n Enter deposited Amount : \n";
				cin>>dep;
				
				cout<<"\n Total Balance : "<<balance+dep;
			}
			
			void withdraw()
			{
				int wid;
				
				cout<<"\n Enter withdraw Amount : \n";
				cin>>wid;
				
				cout<<"\n Total Balance : "<<balance-wid;
			}
};


main()
{
	int choice;
	
	bank b;  
	b.get_details();
	b.display();
	
	cout<<"\n";
	cout<<"\n 1. deposited";
	cout<<"\n 2. withdraw \n";
	
	cout<<"\n Enter your choice :";
	cin>>choice;
	
	switch(choice)
	{
		case 1:		
			b.deposited();
			break;
			
		case 2:
			b.withdraw();
			break;
	}
}

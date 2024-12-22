/*  Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance)  */

#include<iostream>
using namespace std;

class cricket
{
	protected:
				string name;
				int match;
				int run[50];
				int total;
				
	public:
			void get_data()
			{
				cout<<"\n\n Enter Player Name : ";
				cin>>name;
				
				cout<<"\n\n Player Total match : ";
				cin>>match;
				
				cout<<"\n\n Enter Player Runs : ";
				for(int i=0;i<match;i++)
				{
					cout<<"\n\n Enter Match "<<i+1<<" Run : ";
					cin>>run[i];
					
					total = total+run[i];
				}
				
			}
};

class batsman : public cricket
{
	float avg;
	
	public :
		 void print()
		 {
		 	avg = total/match;
		 	
		 	cout<<"\n\n Player Name : "<<name;
				
			cout<<"\n\n Player Total match : "<<match;
				
			cout<<"\n\n Player Runs : ";
			for(int i=0;i<match;i++)
			{
				cout<<"\n\n Match "<<i+1<<" Run : "<<run[i];
			}
			
			cout<<"\n\n Player Total Run : "<<total;
			
			cout<<"\n\n Player Avarege Run : "<<avg;
		 }
};

main()
{
	batsman b;
	b.get_data();
	b.print();
}

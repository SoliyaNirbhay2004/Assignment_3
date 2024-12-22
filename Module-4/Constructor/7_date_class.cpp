/* Write a C++ program to implement a class called Date that has private 
member variables for day, month, and year. Include member functions to 
set and get these variables, as well as to validate if the date is valid. */

#include<iostream>
using namespace std;

class date
{
	int day;
	int month;
	int year;
	
	public :
		 date(int d,int m,int y)
		 {
		 	day = d;
		 	month = m;
		 	year = y;
		 }
		 
		 void set()
		 {
		 	cout<<"\n\n Day : "<<day;
		 	cout<<"\n\n Month : "<<month;
		 	cout<<"\n\n Year : "<<year;
			cout<<"\n\n Date : "<<day<<"/"<<month<<"/"<<year;		 	
		 }
		 
};

main()
{
	int day,month,year;
	
	cout<<"\n\n Enter Day : ";
	cin>>day;
	
	cout<<"\n\n Enter Month : ";
	cin>>month;
	
	cout<<"\n\n Enter Year : ";
	cin>>year;
	
	date d(day,month,year);
	d.set();
}

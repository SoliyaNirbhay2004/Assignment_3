/* Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the 
marks obtained in two subjects and class result contains the total marks 
obtained in the test. The class result can inherit the details of the marks 
obtained in the test and roll number of students. (Multilevel Inheritance) */

#include<iostream>
using namespace std;

class student
{
	protected:
			int roll_no;
			
	public:
			void get_data()
			{
				cout<<"\n\n Enter Student Roll Number : ";
				cin>>roll_no;
			}
};

class test : public student
{
	protected :
		 		int mark[2];
	
	public :
		 		void get_mark()
		 		{
		 			cout<<"\n\n Enter student test marks : ";
					for(int i=0;i<2;i++)
					{
						cout<<"\n\n Enter student test "<<i+1<<" mark : ";
						cin>>mark[i];	
					}	
				}
};

class result : public test
{
	int total;
	
	public : 
			void mark_total()
			{
				cout<<"\n\n Student Roll No. : "<<roll_no;
				for(int i=0;i<2;i++)
				{
					cout<<"\n\n Enter student test "<<i+1<<" mark : "<<mark[i];
				}
				for(int i=0;i<2;i++)
				{
					total = total + mark[i];
				}
				cout<<"\n\n Student total test mark : "<<total;
			}
};

main()
{
	result r;
	r.get_data();
	r.get_mark();
	r.mark_total();
}

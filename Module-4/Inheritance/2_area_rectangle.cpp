/* Write a C++ Program to find Area of Rectangle using inheritance  */

#include<iostream>
using namespace std;

class rect
{
	protected:
			int length;
			int width;
	
	public:
		  void get_data()
		  {
		  	 cout<<"\n\n Enter Rectangle Length : ";
		  	 cin>>length;
		  	 
		  	 cout<<"\n\n Enter Rectangle Width : ";
		  	 cin>>width;
		  }
};

class area : public rect
{
	int ans;
	
	public :
			void display()
			{
				cout<<"\n\n Rectangle Length : "<<length;
				cout<<"\n\n Rectangle Width : "<<width;
			}
		    void result()
		    {
		    	cout<<"\n\n Area of rectangle : "<<length*width;
			}
};

main()
{
	area a;
	a.get_data();
	a.display();
	a.result();
}


#include<iostream>
using namespace std;

template<class T>
void fibo(T num)
{
	T  a = 0;
	T  b = 1;
	
	cout<<a<<" ";
	cout<<b<<" ";
	
	for(T i=1;i<=num;i++)
	{
		T c = a+b;
		
		T temp = a;
		a = b;
		b = c;
		
		cout<<" "<<c;
	}
}

main()
{
	int num;
	
	cout<<"\n\n Enter any number : ";
	cin>>num;
	
	fibo(num);
}

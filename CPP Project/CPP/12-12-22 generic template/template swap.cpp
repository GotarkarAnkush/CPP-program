#include<iostream>
using namespace std;
template < class T>
void swap (T& x, T& y)
{
	T temp;
	temp =x;
	x=y;
	y=temp;
}
main()
{
	int x,y;
	cout<<"Enter two numbers:";
	cin>>x>>y;
	cout<<"before swap:";
	
	cout<<"\nx value is"<<x;
	cout<<"\ny value is"<<y;
	swap(x,y);
	cout<< "\n After Function Templates:";
	
	cout<<"\nx value is:"<<x;
	cout<< "\ny balue is:"<<y;
	float p=2.3,q=4.5;
	swap(p,q);
	cout<<"\n value is p:"<<p;
	cout<<"\n value is q:"<<q;
	
	char i='a',j='b';
	cout<< "\n value is i:"<<i;
	cout<<"\n value is j :"<<j;
}

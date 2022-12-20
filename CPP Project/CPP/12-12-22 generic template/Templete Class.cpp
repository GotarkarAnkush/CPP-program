// class Template
#include<iostream>
using namespace std;
template<class T>
class A
{
	T a;
	T b;
	public:
	A(T x, T y)
	{
		a = x;
		b = y;
	}
	void display()
	{
		cout<<"Values of a and b are :"<<a<<","<<b;
	}
};
main()
{
	A<int>d(4,6);
	d.display();
	A<float> d1(4.3,6.5);
	d1.display();
	
}

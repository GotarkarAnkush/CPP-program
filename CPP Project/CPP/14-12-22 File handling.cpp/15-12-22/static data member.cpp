#include<iostream>
using namespace std;
// static data member
class student
{
	public :
		static int count;// static variable name
		void get()
		{
			count ++;
			cout<<"\n count="<<count;
		}
};
//datatype class name : : staticvariablename
int student::count =0;
main()
{
	student s1;
	student s2;
	student s3;
	s1.get();
	s2.get();
	s3.get();
	
}

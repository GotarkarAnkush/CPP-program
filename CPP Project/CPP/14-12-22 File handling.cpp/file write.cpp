#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream fout;
	fout.open("spark.cpp");
	
	char data[20]="Welcome to spark";
	fout<<data;
	fout.close();
}

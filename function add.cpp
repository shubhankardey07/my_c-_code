#include<iostream>
using namespace std;
int add(int a,int b)
{
	//create function;
	int c = a+b;
	return c;
}
int multi(int a, int b)
{
	int d = a*b;
	return d;
}
float floatvalue(float n)
{
	float h = n;
	return h;
}
int main()
{
	int a,b;
	//function call
	cout<<add(12,12)<<endl;
	cout<<multi(12,12)<<endl;
	cout<<floatvalue(1.2);
	return 0;
}

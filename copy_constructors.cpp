#include<iostream>
using namespace std;
class A
{
	public :
		int x;
		A (int a)
		{
			x =a;
			cout<<"im orignal "<<x<<endl;
		}
		A (A&a1)
		{
			cout<<"im copy"<<endl;
			x = a1.x;
		}
			
};
int main()
{
	A c(20);
	A c2(c);
	cout<<c2.x;
	return 0;
}

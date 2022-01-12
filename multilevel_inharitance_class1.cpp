#include<iostream>
using namespace std;
class A
{
	public :
		int a,b;
		void get()
		{
			cin>>a;
			cin>>b;
		}
};
class B :  public A
{
	public :
		void display()
		{
			cout<<a;
			cout<<b<<endl;
		}
};
class C : public B
{
	public :
		int c;
		int add()
		{
			c = a+b;
			cout<<c;
			return c;	
		}
};
int main()
{
	C c1;
	c1.get();
	c1.display();
	c1.add();
	return 0;
}


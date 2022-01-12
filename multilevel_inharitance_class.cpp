#include<iostream>
using namespace std;
class A
{
	private:
		
	public :
		int a,b;
		void get()
		{
			cout<<"I m class A"<<endl;
			cout<<"please enter two variable\n";
			cin>>a>>b;
		}
};
class B : public A
{
	public :
		void display()
		{
			cout<<"I m class B"<<endl;
			cout<<"Show = "<<a<<endl<<b<<endl;
		}
};
class C : public B
{
	public:
		int c;
		void add()
		{
			c = a+b;
			cout<<"I m class C"<<endl;
			cout<<"ADD = "<<c<<endl;
		}
};
class D : public C
{
	public :
		int d;
		void multi()
		{
			d= a*b;
			cout<<"I m class D"<<endl;
			cout<<"multi = "<<d<<endl;
		}
};
class E : public D
{
	public :
		int e;
		void divid()
		{
			e=a/d;
			cout<<"I m class E"<<endl;
			cout<<"divide = "<<e;
		}
};
int main()
{
//	A a1;
//	B b1;
//	C c1;
//	D d1;
	E e1;
	e1.get();
	e1.display();
	e1.add();
	e1.multi();
	e1.divid();
	return 0;
}

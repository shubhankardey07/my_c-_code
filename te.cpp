#include<iostream>
using namespace std;
int main()
{
	int i,n=12;
	char alphabet = 'a';
	for(int i = 1;i<n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<alphabet++;
		}
		cout<<endl;
	}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int i,n=10;
	string c[1]={"shubhankar"};
	for(int i = 1;i<n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<c[i];
		}
		i++;
		cout<<endl;
	}
	return 0;
}

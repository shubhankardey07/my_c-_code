#include<iostream>
#include<string>
using namespace std;
int main()
{
	char str[14] = {'G','e','e','k','s','f','o','r','G','e','e','k','s','\0'};
	for(int j =0; j<12;j++)
	{
	
		for(int i = 0;i<j;i++)
		{
		cout<<str;
		}
		cout<<endl;
	}
	return 0;
}

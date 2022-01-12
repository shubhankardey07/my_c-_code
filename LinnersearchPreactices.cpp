#include<iostream>
using namespace std;
int main()
{
	int arr[6] = {1,2,3,4,5,6};
	int key , i, index;
	cout<<"Linner search = "<<endl;
	for(i = 0 ;i<6;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<"enter key for search in array :) = ";
	cin>>key;
	for(i = 0 ;i<6;i++)
	{
		if(arr[i] == key)
		{
			index =  i;
			break;
		}
	}
	cout<<"index no."<<index;
	return 0;
}

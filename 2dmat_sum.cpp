#include<iostream>
using namespace std;
//linner search in 2d
bool ispresent(int arr[][4],int target,int i,int j)
{
	for(int i=0;i<4;i++)
	{
		for(int j =0 ; j<3 ; j++)
		{
			if(arr[i][j] == target)
			{
				return 1;
			}
		}
	}
	return 0;
}
void printsum(int arr[][4],int i,int j)
//sum of matrix row
{
	for(int i=0;i<4;i++)
	{
		int sum =0;
		for(int j =0 ; j<3 ; j++)
		{
			sum += arr[i][j];
			cout<<endl;
		}
		cout<<"sum of row in matrix \n"<<sum;
	}
}
void printcsum(int arr[][4],int i,int j)
//sum of matrix colume
{
	for(int i=0;i<3;i++)
	{
		int sum =0;
		for(int j =0 ; j<4 ; j++)
		{
			sum += arr[i][j];
			cout<<endl;
		}
		cout<<"sum of colum in matrix \n"<<sum;
	}
}
int main()
{
	int arr[3][4];
	//in 2d
	for(int i=0;i<4;i++)
	{
		for(int j =0 ; j<3 ; j++)
		{
			cin>>arr[i][j];
		}
	}
	//out 2d
	for(int i=0;i<4;i++)
	{
		for(int j =0 ; j<3 ; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n enter the element to search "<<endl;
	int target;
	cin>>target;
	if(ispresent(arr,target,3,4))
	{
		cout<<"found";
	}
	else 
	{
		cout<<"not found";
	}
	printsum(arr,3,4);
	printcsum(arr,4,3);
	return 0;
}

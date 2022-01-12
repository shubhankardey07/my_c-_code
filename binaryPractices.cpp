#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key)
{
	int st =0;
	int end = size -1;
	int mid = st + (end-st)/2;
	while(st<=end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		if(key>arr[mid])
		{
			st = mid +1;
		}
		else
		{
			end = mid -1;
		}
		mid = st + (end-st)/2;
	}
	return -1;
}
int main()
{
	int odd[5] = {3,8,11,14,16};
	int even[6] ={2,4,6,8,10,12};
	int index = binarySearch(odd,5,14);
	int indexeven = binarySearch(even,6,12);
	cout<<"index odd no. is = "<<index<<endl;
	cout<<"index even no. is = "<<indexeven;
	return 0;
}

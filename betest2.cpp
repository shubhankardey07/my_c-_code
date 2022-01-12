#include<iostream>
using namespace std;
//O(logN) compalxility
int binary(int arr[],int size,int key)
{
	int start = 0;
	int end = size -1;
	int mid = (start + (start - end)/2);
	while(start <= end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		if (key>arr[mid])
		{
			start = mid +1;
		}
		else 
		{
			end = mid -1;
		}
	mid = (start + (start - end)/2);
	}
	cout<<"not found";
	return -1;
}
int main ()
{
	int even[6] = {2,4,6,8,12,16};
	int odd[5] = {3,8,11,14,16};
	int index =  binary(even , 6 ,18);
	int indexodd = binary(odd,5,14);
	cout<<"index no."<<index<<endl;
		cout<<"index no."<<indexodd<<endl;
	return 0;
}

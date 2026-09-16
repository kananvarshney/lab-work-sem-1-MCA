#include<iostream>
using namespace std;
int main()
{
	int n,arr[100],num,count=0;
	int i;
	
	cout<<"Enter number of elements:";
	cin>>n;
	
	cout<<"Enter array elememts:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter number to find its frequency:";
	cin>>num;
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==num)
		{count++;
		}
	}
	cout<<"Frequency of "<<num<<" is: "<<count;
	
	return 0;
}

#include<iostream>
using namespace std ;
int main()
{
	int n;
	cout<<"Enter No. of elements:";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Array elements are:[";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
		if(i<n-1)
		cout<<",";
	}
	cout<<"]";
	return 0;
}

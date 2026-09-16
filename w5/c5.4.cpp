#include<iostream>
using namespace std;
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
    int largest=arr[0];
	int secondlargest=arr[0];
	
	for(int i=1;i<n;i++)
	{
		if(arr[i]>largest)
		{
			secondlargest=largest;
			largest=arr[i];
		}
		else if(arr[i]>secondlargest&&arr[i]!=largest)
		{
			secondlargest=arr[i];
		}
	}
	cout<<"The second largest No. in the above list is "<<secondlargest<<endl;
	return 0;
}

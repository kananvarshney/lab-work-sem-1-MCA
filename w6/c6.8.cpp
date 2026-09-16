#include<iostream>
using namespace std;
int main()
{
	int arr[100],n;
	int *ptr;
	int sum=0;
	
	cout<<"Enter no. of elements: ";
	cin>>n;
	ptr=arr;
	
	cout<<"Enter "<<n<<" elements: "<<endl;
	for(int i=0;i<n;i++){
		cin>>*ptr;
		ptr++;
	}
	ptr=arr;
	
	for(int i=0;i<n;i++){
		sum+=*ptr;
		ptr++;
	}
	cout<<"Sum = "<<sum;
	return 0;
}

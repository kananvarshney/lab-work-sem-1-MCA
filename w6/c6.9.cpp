#include<iostream>
using namespace std;
int main()
{
	int arr[100],n;
	int *ptr;
	
	cout<<"Enter no. of elements: ";
	cin>>n;
	ptr=arr;
	
	cout<<"Enter "<<n<<" elements: "<<endl;
	for(int i=0;i<n;i++){
		cin>>*ptr;
		ptr++;
	}
	ptr=arr;
	cout<<"Array elements are: "<<endl;
	for(int i=0;i<n;i++){
		cout<<*ptr<<"";
		
		if(i<n-1)
		cout<<",";
		ptr++;
	}
	return 0;
}

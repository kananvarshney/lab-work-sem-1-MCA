#include<iostream>
using namespace std;
int main()
{
	int arr[100],n;
	int *ptr;
	
	cout<<"Enter no. of elements: ";
	cin>>n;
	// Initialize pointer to first element
	ptr=arr;
	//read elements using pointer
	cout<<"Enter "<<n<<" elements: "<<endl;
	for(int i=0;i<n;i++){
		cin>>*ptr;
		ptr++;
	}
	//Initialize pointer again to first element
	ptr=arr;
	//Display elements using pointer
	cout<<"Array elements are: ";
	while(ptr<arr+n){
		cout<<*ptr;
		
		if(ptr<arr+n-1)
		  cout<<",";
		  
		ptr++;  
	}
	return 0;
}

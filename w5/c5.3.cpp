#include<iostream>
using namespace std;
int main()
{
	int arr[]={10,20,30,40,50};
	cout<<"arr[]={10,20,30,40,50}\n";
	
	int length=sizeof(arr)/sizeof(arr[0]);
	
	cout<<"Length of the array is : "<<length;
	return 0;
}

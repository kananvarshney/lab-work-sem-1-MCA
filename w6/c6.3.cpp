#include<iostream>
using namespace std;
int main()
{
	int num;
	int *ptr;
	
	cout<<"Enter a number: ";
	cin>>num;
	
	ptr=&num;
	
	cout<<"Value is: "<<num<<endl;
	cout<<"Address is: "<<ptr<<endl;
	
	return 0;
}

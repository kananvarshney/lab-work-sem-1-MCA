#include<iostream>
using namespace std;
int main()
{
		int num;
	int *ptr;
	
	cout<<"Enter a number: ";
	cin>>num;
	
	ptr=&num;
	
	(*ptr)++;
	cout<<"After increment = "<<*ptr<<endl;
	
	(*ptr)--;
	cout<<"After decrement = "<<*ptr<<endl;
	
	return 0;
}

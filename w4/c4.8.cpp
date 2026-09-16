#include<iostream>
using namespace std;

int main()
{
	int n,original,digit,sum=0;
	cout<<"Enter a 3-digit No.";
	cin>>n;
	original=n;
	while(n!=0)
	{
		digit=n%10;
		sum=sum+digit*digit*digit;
		n=n/10;
	}
	if(sum==original)
	cout<<original<<" is an Armstrong No."<<endl;
	else
	cout<<original<<" is not an Armstrong No."<<endl;
	
	return 0;
}

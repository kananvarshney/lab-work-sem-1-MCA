#include<iostream>
using namespace std ;

int main()
{
	
	int a,b;
	cout<<"Enter two No.s: ";
	cin>>a>>b;
	
	while(b>0)
	{
		a++;
		b--;
	}
	cout<<"Sum is: "<<a<<endl;
	return 0;
}


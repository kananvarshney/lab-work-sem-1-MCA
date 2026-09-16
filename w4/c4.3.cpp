#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g;
	int result;
	cout<<"Enter values of a: ";
	cin>>a;
	cout<<"Enter values of b: ";
	cin>>b;
	cout<<"Enter values of c: ";
	cin>>c;
	cout<<"Enter values of d: ";
	cin>>d;
	cout<<"Enter values of e: ";
	cin>>e;
	cout<<"Enter values of f: ";
	cin>>f;
	cout<<"Enter values of g: ";
	cin>>g;
	result=((a+b/c*d-e)*(f-g));
	cout<<"Result is : "<<result;
	return 0;
}

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float a,b,c,d,root1,root2;
	cout<<"Enter a,b,c:";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	
	if(d>0)
	{
		root1=((-b+sqrt(d))/(2*a));
		cout<<"Root 1 ="<<root1<<endl;
		root2=((-b-sqrt(d))/(2*a));
		cout<<"Root 2 ="<<root2<<endl;
	}
	else if(d==0)
	{
		root1=(-b/(2*a));
		cout<<"Both roots ar equal."<<endl;
		cout<<"Roots ="<<root1<<","<<root1<<endl;
	}
	else
	{
		cout<<"Roots are imaginary."<<endl;
	}
	return 0;
}

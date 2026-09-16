#include<iostream>
using namespace std;
int main()
{
	int a[50],n;
	int positive=0,negative=0;
	int odd=0,even=0;
	
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter elements of array: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//count
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		positive++;
		if(a[i]>0)
		negative++;
		if(a[i]%2==0)
		even++;
		else
		odd++;
	}
	//Dispaly positive no.s
	cout<<"\nPositive numbers: ";
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		cout<<a[i]<<" ";
	}
		//Dispaly negative no.s
	cout<<"\nnegative numbers: ";
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		cout<<a[i]<<" ";
	}
		//Dispaly even no.s
	cout<<"\neven numbers: ";
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		cout<<a[i]<<" ";
	}
		//Dispaly odd no.s
	cout<<"\nodd numbers: ";
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		cout<<a[i]<<" ";
	}
	cout<<"\nCount of positive numbers:"<<positive;
	cout<<"\nCount of negative numbers:"<<negative;
	cout<<"\nCount of even numbers:"<<even;
	cout<<"\nCount of odd numbers:"<<odd;
	
	return 0;
}

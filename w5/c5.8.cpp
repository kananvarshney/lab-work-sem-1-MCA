#include<iostream>
using namespace std;
int main()
{
	int A[100],B[100],C[200];
	int n1,n2;
	int i=0,j=0,k=0;
	
	//Input first array
	cout<<"Enter size of the first array:";
	cin>>n1;
	cout<<"Enter elements of first sorted array:";
	for(i=0;i<n1;i++)
	{
		cin>>A[i];
	}
	//Input second array
	cout<<"Enter size of the second array:";
	cin>>n2;
	cout<<"Enter elements of second sorted array: ";
	for(i=0;i<n2;i++)
	{
		cin>>B[i];
	}
	//Merge both arrays
	i=0;
	j=0;
	k=0;
	
	while(i<n1&&j<n2)
	{
		if(A[i]<B[j])
		{
			C[k]=A[i];
			i++;
		}
		else
		{
			C[k]=B[j];
			j++;
		}
		k++;
	}
	//copy remaining elements of first array
	while(i<n1)
	{
		C[k]=A[i];
		i++;
		k++;
	}
	//copy rest of the elememts of second array
	while(j<n2)
	{
		C[k]=B[j];
		j++;
		k++;
	}
	//Display merges array
	cout<<"Merged array in sorted order: [";
	for(i=0;i<k;i++)
	{
		cout<<C[i];
		
		if(i<k-1)
		cout<<",";
	}
	cout<<"]";
	
	return 0;
	
}

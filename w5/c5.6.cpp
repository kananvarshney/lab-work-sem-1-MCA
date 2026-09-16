#include <iostream>
using namespace std;
int main()
{
	int A[10][10],B[10][10],sum[10][10],product[10][10];
	int r1,r2,c1,c2;
	char x;
	int i,j,k;
	//input dimensions
	cout<<"Enter dimensions of first matrix(rxc):";
	cin>>r1>>x>>c1;
	cout<<"Enter dimension of second matrix(rxc):";
	cin>>r2>>x>>c2;
	
	cout<<"Enter elements of first matrix:\n";
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cin>>A[i][j];
		}
	}
	
	cout<<"Enter elements of second matrix:\n";
	for(int i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			cin>>B[i][j];
		}
	}

	//Matrix addition
	if(r1==r2&&c1==c2)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				sum[i][j]=A[i][j]+B[i][j];
			}
		}
		cout<<"\nAddition of given two matrices is: \n";
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				cout<<sum[i][j]<<" ";
			}
			cout<<endl;	
	    }
   }
   else
   {
   	cout<<"\nMatrix addition is not possible.\n";
   }
   //Matrix Multiplication
   
  if(c1==r2)
  {
  	for(i=0;i<r1;i++)
  	{
  		for(j=0;j<c2;j++)
  		{
  			product[i][j]=0;
  			
  			for(k=0;k<c1;k++)
  			{
  				product[i][j]+=A[i][k]*B[k][j];
			  }
		  }
	  }
	  cout<<"\nMultiplication of given two matrices is : \n";
	  for(i=0;i<r1;i++)
	  {
	  	for(j=0;j<c2;j++)
	  	{
	  		cout<<product[i][j]<<" ";
		  }
		  cout<<endl;
	  }
  }
  else
  {
  	cout<<"\nMatrix multiplication is not possible.\n";
  }
  return 0;
}


    

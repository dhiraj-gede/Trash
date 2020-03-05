#include<iostream>
using namespace std;
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,n,m,o,p;
	cout<<"enter the order of matrix 1:";
	cin>>n>>m;
	cout<<"enter order of matrix 2: ";
	cin>>o>>p;
	if(m==p && n==o)
	{
		cout<<"enter elements of matrix 1:";
		for (i=0 ; i<n; i++)
		{
			for(j=0; j<m; j++)
			{
				cin>>a[i][j];
			}
		}
		cout<<"enter elements of matrix 2:";
		for (i=0 ; i<o; i++)
		{
			for(j=0; j<p; j++)
			{
				cin>>b[i][j];
			}
		}
		for(i=0;i<o;i++)
		{
			for(j=0; j<p; j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		for (i=0 ; i<n; i++)
		{
			for(j=0; j<m; j++)
			{
				cout<<c[i][j]<<"\t";
			}
			cout<<"\n";
		}
	}
	else
	{
		cout<<"addition cannot be performed";
	}
	
}
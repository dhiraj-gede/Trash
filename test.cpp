#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int i,j,n,temp;
    cout<<"enter value of n";
    cin>>n;
    cout<<"enter array elements";

    for(i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    cout<<"entered elements are:\n";
    for(int i=0; i<n; i++)
    {
        cout<<"\t"<<arr[i];
    }
    for(i=0;i<n;i++)
	{
	for(j=0;j<(n-(n-1));j++)
	{
	if(arr[j]>arr[j+1])
	{
		temp = arr[j];
		arr[j] = arr[j+1];
		arr[j+1]=temp;
	}
	}
    
	}
	cout<<"\n sorted array is... \n";
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
	int array[10];
	int i,j,n,temp,item;
	int beg,mid,end;
	cout<<"enter the value of n \n";
	scanf("%d",&n);
	printf("enter the elements one by one \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",array[i]);
	}
		printf("input array elements \n");
		for(i=0;i<n;i++)
	{
		printf("%d \n",array[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=0;j<(n-n-1);j++)
	{
	if(array[j]>array[j+1])
	{
		temp = array[j];
		array[j] = array[j+1];
		array[j+1]=temp;
	}
	}
	}
		printf("sorted array is... \n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",array[i]);
	}
	printf ("enter the element to be searched \n");
	scanf("%d",&item);
	 beg=1;end=n;
	 do
	 {
		 mid=(beg+end)/2;
		if(item<array[mid])
		end=mid-1;
		else if(item>array[mid])
		beg=mid+1;
	 }while(item!=array[mid]&&beg<=end);
	 if(item==array[mid])
	 {
		 printf("successful search loc is %d \n ",mid+1);
	 }
	 else
	 {
		printf("search is failed \n");
	 }
	 return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int data[6],n=5,item ,loc=1,i;
	printf("enter any 5 elements:\n");
	for(i=1;i<=n;i++)
    {
		scanf("\n %d",&data[i]);
	}
	printf("\n enter item to be searched");
	scanf("%d",&item);
	while(data[loc]!=item)
	{
		loc=loc+1;
	}
	if(loc==n+1)
	{
		loc=0;
		printf("\n item not found");
	}
	else
	{
		printf("\n location of item is %d",loc);
	}
	return 0;
}
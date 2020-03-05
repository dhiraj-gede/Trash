#include<iostream>
using namespace std;
void selection(int arr[], int n); 
void selectionsort(int arr[], int a);
void swap(int *w, int x);
void print(int arr[], int size);
int main()
{
    int arr[10],n, i, j;
    cout<<"enter number of elements \n";
    cin>>n;
    
    cout<<"enter elements of array\n ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }    
    cout<<"Entered array elements are: \n";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n sorted array: \n";
    
    selection(arr, n);
    print(arr,n);
    selectionsort(arr, n);
    print(arr,n);
    return 0;
  
}
void swap(int *w, int *x) 
{  
    int temp = *w;  
    *w = *x;  
    *x = temp;  
}  

void selectionsort(int arr[], int a)
{
    int min, i,j;
    
    for(i=0; i<a-1; i++)
    {
        min=i;
        for(j=i+1; j=a; j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
            swap(&min, &arr[i]);

        }
        
    }
}

void print(int arr[], int size)
{
    int i;
    for(i=0; i<size ; i++)
        {
            cout<<arr[i]<<"\t";
        }
}




void selection(int arr[], int n)  
{  
    int i, j, min_idx;  
  
   
    for (i = 0; i < n-1; i++)  
    {  
       
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
  
        
        swap(&arr[min_idx], &arr[i]);  
    }  
}  
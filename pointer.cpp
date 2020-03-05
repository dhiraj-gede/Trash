#include<iostream>
using namespace std;
int main()
{
    int x[5]={10,20,30,40,50};
    int *p;
    p=&x;
    for(int i=0;i<5;i++)
    {
        cout<<&(x+i)<<"\n";
    }
    return 0;
}
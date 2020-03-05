#include<iostream>
using namespace std;
int main()
{
    int x;

    int *p;
    p=&x;
    cin>>x;
    cout<<"value of var"<<endl<<x<<endl<<"ptr: "<<p<<endl<<*&x<<"\n"<<*p<<endl;
    return 0;
}

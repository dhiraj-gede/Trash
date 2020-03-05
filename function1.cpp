#include<iostream>
using namespace std;
int sum(int , int);
int main()
{
    int a,b,c;
    cout<<"enter two numbers to add\n";
    cin>>a>>b;
    c=sum(a,b);
    cout<<" sum= "<<c;
    return 0;
}
int sum( int x, int y)
{
    int c;
    c=x+y;
    return c;
}
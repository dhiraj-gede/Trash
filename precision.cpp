#include<iostream>
using namespace std;
int main()
{
    float a,b,c,d;
    a=1.234567890;
    b=3.56;
    c=1.34E2;
    d=-123.5677;
    cout.setf(ios::showpoint);
    cout.precision(6);
    cout<<"a= "<<a<<"\n";
    cout<<"b= "<<b<<"\n";
    cout<<"c= "<<c<<"\n";
    cout<<"d= "<<d<<"\n";
    return 0;
}
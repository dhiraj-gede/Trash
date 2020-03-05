#include<iostream>
using namespace std;
int myfunc(int );
float myfunc(float );
double myfunc(double );
int main()
{
    int y;
    float p;
    double w;
    y=myfunc(y);
    p=myfunc(p);
    w=myfunc(w);
    cout<<y<<endl<<p<<endl<<w;
}
int myfunc(int a)
{
    int x;
    x=10;
    return x;
}
float myfunc(float b)
{
    float y;
    y=60;
    return y;
}
double myfunc( double k)
{
    double h;
    h=50;
    return h;
}

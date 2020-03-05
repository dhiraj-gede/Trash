#include<math.h>
#include<iostream>
using namespace std;
float det(int x, int y,int z)
{
    float k,l,j;
    k=(y*y-(4*x*z));
    if (k<0)
    {
        return(sqrt(-1*k));
    }
    else
    {
        return(sqrt(k));
    }
}
float r1(float k,float l, float j)
{
    float a,b,c;
   // a=det(k,l,j);
    //b=(-l+a)/(2*k);
    return((-l+det(k,l,j))/(2*k));                          //Recussion
}
float r2(float k,float l, float j)
{
    float a,b,c;
  //  a=det(k,l,j);
   // c=(l+a)/(2*k);
    return ((l+det(k,l,j))/(2*k));                              //(recussion)
}
int main()
{
    int a,b,c;
    float d,o,p;
    double i,t;
    cout<<"enter coeficients of quadratic equation"<<endl;
    cin>>a>>b>>c;
    d=det(a,b,c);
    t=r1(a,b,c);
    i=r2(a,b,c);
    if(((b*b)-(4*a*c))<0)
    {
        cout<<"\n root1= "<<t<<"i"<<"\n root2= "<<t<<"i"<<endl;
    }
    else
    {    
        cout<<d<<"\n root1= "<<t<<"\nroot2= "<<i<<endl;
    }
    return 0;

}
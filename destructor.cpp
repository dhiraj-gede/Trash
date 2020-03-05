#include<iostream>
using namespace std;
class geeks
{
    public :
    int id;
    ~geeks()
    {
        cout<<"destructor called: "<<id<<"\n";
    }
};
int main()
{
    geeks obj;
    obj.id=9;
    int i=0;
    while(i<5)
    {      
        geeks obj1;
        obj1.id=i;
        i++;
    }
    return 0;
} 
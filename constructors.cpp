#include<iostream>
using namespace std;
class geeks{
    public:

    int id;
    geeks()
    {
        cout<<"default constructor ";
        id=2;
    }
    geeks(int x)
    {
        cout<<"parameterised connstructor ";
        id=x;
    }
};
int main()
{
    geeks obj;
        cout<<"id= "<<obj.id<<"\n";
    geeks obj1(52);
        cout<<"id= "<<obj1.id;
return 0;

}
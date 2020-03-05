#include<iostream>
using namespace std;
class math
{
    int x,y;
    public:
    int s;
    void input()
    {
    cout<<"enter two numbers to add";
    cin>>x>>y;
    }
    void output()
    {
        s=x+y;
        cout<<"sum= "<<s<<endl;
    }    
};
int main()
{
    math one;
    one.input();
    one.output();
    return 0;

}

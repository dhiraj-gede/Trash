#include<iostream>
using namespace std;
int main()
{
    string a="food";
    string &meal= a;
    cout<<a<<endl<<meal;
    return 0;
}
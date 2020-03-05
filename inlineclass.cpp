#include<iostream>
using namespace std;
class S
{
    int a=4;
    public:
        inline int cube(int s)
        {
            return s*s*s;
        }
        void square();
};
inline void S :: square()
{
    cout<<a*a<<endl;
}
int main()
{
    S i;
    i.square();
    cout<<i.cube(3);
    return 0;
}
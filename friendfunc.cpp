#include<iostream>
using namespace std;
class box{
    double width;
    public:
        friend void printwidth(box b);
        void setwidth(double wid);
};
void box::setwidth( double wid)
{
    width= wid;
}
void printwidth(box b){
    cout<<"width of box: "<<b.width<<endl;
}
int main()
{
    box b;
    b.setwidth(10.0);
    printwidth(b);
    return 0;
}
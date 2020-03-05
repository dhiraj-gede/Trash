#include<iostream>
using namespace std;
class student
{
    public: 
    int roll;
    string name;
    void put()
    {
        cout<<"Enter student roll number: ";
    }
    void insert()
    {
        cout<<"Enter student name: ";
    }
    void sname();
    void sroll();
};
void student :: sname()
{
    cout<<"Student name: ";
}
void student :: sroll()
{
    cout<<"Student roll no.: ";
}


int main()
{
    student a;
    int z;
    string k;
    a.insert();
    
    cin>>k;
    a.put();
    cin>>z;
    
    a.name=k;
    a.roll=z;
    return 0;
    

}


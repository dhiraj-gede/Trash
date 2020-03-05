#include<iostream>
using namespace std;
class circle
{
	public:
	float r;
	float calcarea()
	{
		return 3.14*r*r;
	}
};
int main()
{
	circle obj;
	cin>>obj.r;
	cout<<"radius= "<<obj.r;
	cout<<"\n area= "<<obj.calcarea();
	return 0;
} 
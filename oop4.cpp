#include<iostream>
using namespace std;
class math
{	
	private:
	int x,y;
	public:
	void insert()
	{
		cout<<"enter two numbers"<<endl;
		cin>>x>>y;
	}
	void display()
	{
	cout<<"sum= "<<sum()<<endl;
	cout<<"sub= "<<sub()<<endl;
	cout<<"multiplication= "<<multi()<<endl;
	}
	int sum()
	{
		return (x+y);
	}
	int sub()
	{
		return (x-y);
	}
 	int multi()
	{
		return (x*y);
	}
};
int main()
{
	math m;
	m.insert();
	m.display();
	return 0;
}
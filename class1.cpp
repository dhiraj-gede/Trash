
#include<iostream>
using namespace std;
class geeks{
	public:
char fn;
void iam();
void print()
	{
		cout<<"ABC"<<fn;
	}
	void a()
	{
		cout<<"asdf";
	}
};
void geeks::iam()
{
	cout<<"\tDhiraj";
}
int main()
{
	geeks object;
	object.fn='a';
	object.print();
	object.iam();
	object.a();
	return 0;
}
	
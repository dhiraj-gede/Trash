
#include<iostream>
using namespace std;

int main()
{
	char grade= 'A';
	switch(grade)
		{
			case'A': 
				cout<<"passed\n";
			break;

			case 'B':
				cout<<"fail";
			break;
		}
cout<<"your grade is "<< grade;
return 0;
}
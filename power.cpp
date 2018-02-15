#include <iostream>
using namespace std;

int main()
{
	int num,i,mul=1;
	cout<<"enter the number : ";
	cin>>num;
	cout<<num<<endl;
	int power;
	cout<<"enter the power : ";
            cin>>power;
            cout<<power<<endl;
	for(i=1;i<=power;i++)
	{
	mul=mul*num;
	}
	cout<<"the power of given number is:" <<mul;

	
}

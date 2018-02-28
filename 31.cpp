#include<iostream>
using namespace std;

int main( )
{
	int n1;
	int n2;
	cin>>n1;
	cout<<"number1 :"<<n1<<endl;
	cin>>n2;
	cout<<"number2 :"<<n2<<endl;
	int n3;
	cout<<"swpping"<<endl;
	if(n1<=1000000&&n2<=1000000)
	{
	n3=n1;
	n1=n2;
	n2=n3;
	cout<<"number1 after swap :"<<n1<<endl;
	cout<<"num2 after swap :"<<n2<<endl;
	}
	else
	{
		cout<<"invalid input";
	}
}

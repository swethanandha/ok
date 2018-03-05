#include<iostream>
using namespace std;

int main( )
{
	int num1;
	int n2;
	cin>>num1;
	cout<<"number1 :"<<num1<<endl;
	cin>>n2;
	cout<<"number2 :"<<n2<<endl;
	int n3;
	cout<<"swpping"<<endl;
	if(num1<=1000000&&n2<=1000000)
	{
	n3=num1;
	num1=n2;
	n2=n3;
	cout<<"number1 after swap :"<<num1<<endl;
	cout<<"num2 after swap :"<<n2<<endl;
	}
	else
	{
		cout<<"invalid input";
	}
}37.cpp

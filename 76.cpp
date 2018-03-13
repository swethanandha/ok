#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int number,i;
	cin>>number;
	if(num<=1000)
	  {
	for(i=2;i<number;i++)
	{
	if(number%i==0)
	{
		cout<<number<<" notprime";
		break;
	}
	else
	{
		cout<< number<<" prime number";
		break;
	}
	}
	
	}

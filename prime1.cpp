#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int num,i;
	cin>>num;
	if(num<=1000)
	  {
	for(i=2;i<num;i++)
	{
	if(num%i==0)
	{
		cout<<num<<" notprime";
		break;
	}
	else
	{
		cout<< num<<" prime number";
		break;
	}
	}
	
	}
	else{
	cout<<" number greater than 1000";	
	}
	return 0;
}

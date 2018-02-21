#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int num,i;
	cin>>num;
	if(cin)
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
	cout<<" enter the input";	
	}
	return 0;
}

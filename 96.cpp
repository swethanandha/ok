#include <iostream>
using namespace std;

int main() {
	int num,i;
	cout<<"enter number :";
	cin>>num;
	if(num<=1000)
	  {
	for(i=1;i<num;i++)
	{
	if(num%i==0)
	{
		cout<<num<<" composite";
		break;
	}
	else
	{
		cout<< num<<" prime number";
		break;
	}
	}
	  }
	}

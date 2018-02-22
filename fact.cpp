#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int num,i;
	int fact=1;
	cout<<"enter the number for factorial";
	cin>>num;
	if(num>0)
	{
		
	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	cout<<fact;
	}
		
	else
	{
		cout<<"negative input";
	}
	return 0;
}

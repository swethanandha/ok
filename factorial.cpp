#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int num,i;
	int fact=1;
	cout<<"enter the number for factorial"<<endl;
	cin>>num;
	cout<<num<<endl;
	if(num>0)
	{
		
	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	cout<<fact<<endl;
	}
		
	else
	{
		cout<<"negative input";
	}
	return 0;
}

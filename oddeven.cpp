#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int number;
	cin>>number;
	if(number>=1&&number<=100000)
	{
	if(number%2==0)
	{
		cout<<number<<"  even number";
	}
	else
	{
		cout<<number<<"  odd number";
	}
	}
	else
	{
		cout<<number<<"  invalid input";
	}
	return 0;
}

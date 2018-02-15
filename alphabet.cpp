#include<iostream>
using namespace std;
int main()
{
	char alpha;
	cout<<"Enter a character: ";
	cin>>alpha;
	if((alpha>='a'&& alpha<='z') || (alpha>='A' && alpha<='Z'))
	{
		cout<<alpha<<" is an alphabet";
	}
	else
	{
		cout<<alpha<<" is not an alphabet";
	}
}

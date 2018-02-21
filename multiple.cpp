#include <iostream>
using namespace std;

int main() {
	if(cin)
	{
	int num,result,i;
	cin>>num;
	for(i=1;i<=5;i++)
	{
		result=num*i;
		cout<<result<<endl;
	}
	
	}
	else
	{
		cout<<"invalid input";
	}
}

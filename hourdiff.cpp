#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int hr,min,hr1,min1,res,res1,o,i;
	
	cin>>hr;
	cout<<"hours"<<hr<<endl;
	cin>>min;
	cout<<"minutes"<<min<<endl;
	cin>>hr1;
	cout<<"hours"<<hr1<<endl;
	cin>>min1;
	cout<<"minutes"<<min1<<endl;
	if(hr<=24&&min<=60)
	{
	res=hr-hr1;
	res1=min-min1;
	if(res<0)
	{
		o=-(res);
	cout<<"diffrence between hours"<<o<<endl;
	}
	else
	{
		cout<<"diffrence between hours"<<res<<endl;
	}
	if(res1<0)
	{
		i=-(res1);
	cout<<"diffrence between minutes"<<i<<endl;	
	}
	else
	{
		cout<<"diffrence between minutes"<<res1;
	}
	
	}
	else
	{
		cout<<"input invlid";
	}
}

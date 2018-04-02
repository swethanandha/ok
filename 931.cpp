#include <iostream>
 using namespace std;
int main() 
{
	int n,a[30],i;
	cout<<"Enter the nummber of inputs";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		if(i!=a[i])
		{
		cout<<a[i]<<endl;
			
		}
	}
 
	return 0;
}

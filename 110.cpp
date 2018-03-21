#include <iostream>
using namespace std;
 
int main() {
	
	int n,sum=0,i;
	cout<<"enter the number :";
	cin>>n;
	for(i=0;i<=n;i++)
	{
	    sum=sum+i;
	}
	cout<<"sum of "<<n<<"natural numbers :"<<sum;
}

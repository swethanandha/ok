#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,i,count=0,j;
	cin>>a;
	cin>>b;
	for(i=a;i<b;i++)
	{          
		count=0;
		for(j=2;j<b;j++)
		{
		if(i%j==0)
		{
			
			count++;
			break;
		}
	            
		}
		if(count==0&&i!=1)
		{
			cout<<i;
		}
	}
	
	
	return 0;
}

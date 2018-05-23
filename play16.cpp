#include <iostream>
using namespace std;
int main()
{
    
      int n,i,j;
	int a[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		int c=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j] && i!=j )
			{
				c=c+1;	
			}
			
		}
	if(c==0)
	{
		cout<<a[i];
	}
	}

	
	
	return 0;
}

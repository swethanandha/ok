#include <iostream>
using namespace std;
 
int main() {
	
	int i,j,temp,n;
	int a[10];
	cout<<"array size :";
	cin>>n;
	cout<<n<<endl;
	 cout<<"array elements"<<endl;
	 if(n>=1&&n<=1000)
	 {
	for(i=0;i<n;i++)
	{           cin>>a[i];
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			
		}
	}
	 
	
         cout<<"minimum element :"<<a[0];
	 }
	 else
	 {
	 	cout<<"array size is invalid";
	 }
	return 0;
}

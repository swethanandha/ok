#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int i,j,tem,n1;
	int a[18];
	cout<<"array size :";
	cin>>n1;
	cout<<n1<<endl;
	 cout<<"array elements"<<endl;
	 if(n1>=1&&n1<=1000)
	 {
	for(i=0;i<n1i++)
	{           cin>>a[i];
		cout<<a[i]<<endl;
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n1-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			
		}
	}
	 
	cout<<"array in ascending order"<<endl;
	for(i=0;i<n1;i++)
	{           
		cout<<a[i]<<endl;
		
	}
         cout<<"middle element"<<a[n1/2];
	 }
	 else
	 {
	 	cout<<"array size is invalid";
	 }
	return 0;
}

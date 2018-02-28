#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a[10];
	int i,temp;
	 for(i=0;i<=10;i++)
	 {
	 	cin>>a[i];
		
		
	 }
	

	for(i=1;i<10;i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
		
	}
	cout<<"maximum element"<<a[0];
	return 0;
}

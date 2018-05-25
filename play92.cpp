#include<iostream>
using namespace std;
int main()
{
	
	long int n, decnum=0, i=1, rem;
	cout<<"Enter any binary number : ";
	cin>>n;
	while(n!=0)
	{
		rem=n%10;
		decnum=decnum+rem*i;
		i=i*2;
		n=n/10;
	}
	cout<<"Equivalent decimal value = "<<decnum;

}

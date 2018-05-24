#include<iostream>
using namespace std;
int main()
{
int n,r,sum=0;
cout<<"enter the number";
cin>>n;
if(1<=n<=1000000000000)
{
while(n!=0)
{
    r=n%10;
    n=n/10;
    sum=sum+r*r;
    
}
cout<<"sum of digits of a number:"<<sum;
}
else
{
    cout<<"invalid input:";
}
}

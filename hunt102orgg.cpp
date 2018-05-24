#include<iostream>
using namespace std;
int main()
{
int n1,r1,summ=0;
cout<<"enter the number";
cin>>n1;
if(1<=n<=1000000000000)
{
while(n1!=0)
{
    r1=n%10;
    n1=n1/10;
    summ=summ+r1*r1;
    
}
cout<<"sum of digits of a number:"<<summ;
}
else
{
    cout<<"invalid input:";
}
}

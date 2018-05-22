#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int n1,n2,i,count=0,j,flag;
cin>>n1;
cin>>n2;
for(i=n1;i<=n2;i++)
{
    flag=0;
for(j=2;j<=i/2;j++)
{
    if((i%j)==0)
    {
      flag=1;
    }
    
    
}
}
if(flag==0)
    {
        count++;
    }
cout<<count;

return 0;
}

#include<iostream>
using namespace std;
int main()
{
	
int n,i,rem[10],n1,j,flag=1;
int count=0;
cout<<"enter the number:";
cin>>n;
n1=n;

 while(n1>0)
 {
 n1 =n1/10;
     count=count+1;;
}
//cout<<count<<endl;
for(i=0;i<count;i++)
{   
    rem[i]=n%10;
    n=n/10;
   // cout<<rem[i];
    
}
for(i=0;i<count;i++)
{
    for(j=i+1;j<count;j++)
    {
      if(rem[i]==rem[j])
      {
        flag=0;
        break;
      }
    }
}
if(flag==0)
{
    cout<<"yes,this number has repeated elements";
}
else
{
    cout<<"no,tne number does not have repeated elements";
}
}

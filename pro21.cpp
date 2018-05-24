#include <iostream>
using namespace std;

int main()
{
    int a[98],i,j,n,sum=0,sum1=0,count=0,count1=0,m;
    float avg,avg1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
     if(n%2!=0)
     {
         m=(n/2)+1;
     }
     else
     {
         m=n/2;
     }
    cout<<"first half";
        for(i=0;i<m;i++)
        {
            cout<<a[i];
            sum=sum+a[i];
            count++;
        }
    cout<<"sec half";
    for(i=m;i<n;i++)
       {  
        cout<<a[i];
        sum1=sum1+a[i];
        count1++;
       }
    
    avg=sum/count;
    avg1=sum1/count1;
    if(avg==avg1)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    
    }

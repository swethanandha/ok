#include <iostream>
using namespace std;

int main()
{
    int a[34],n,i,j,b[56];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    for(i=0;i<n;i++)
    { 
       int count=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
               count=count+1;
            }
        }
        if(count==1)
        {
            cout<<a[i];
            break;
        }else
        {
            cout<<"unique";
            break;
        }
    }
    
    
}

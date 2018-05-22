#include <iostream>
    using namespace std;
    int main()
    {
        int a[10],i,n,k,temp;
        cout<<"enter the number of shift :";
        cin>>k;
        cout<<"enter the number of elements :";
        cin>>n;
        cout<<"enter the array elements :";
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<k;i++)
        
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            
        }
        cout<<"shifted array elements :";
        for(i=0;i<n;i++)
        
        {
            cout<<a[i];
        }
    }

#include<iostream>
using namespace std;
int main()
{
    int a[70],n,avg,tot,i;
    cout<<"Enter the number";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        tot=tot+a[i];
        
    }
    avg=tot/n;
    cout<<"Average of numbers:"<<avg;

    return 0;
}


48

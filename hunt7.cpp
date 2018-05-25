#include <iostream>
using namespace std;

int main()
{
    cout<<"hunter 7";
    int a[34],n,i,j,b[56];
    cout<<"enter the numbe of input:";
    cin>>n;
    if(1<=n<=100000)
    {
    cout<<"enter the array elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    for(i=0;i<n;i++)
    { 
       if(a[i]==i)
       {
           break;
       }
       else
       {
           cout<<a[i]<<" ";
       }
}
}
else
{
    cout<<"invalid input";
}
}

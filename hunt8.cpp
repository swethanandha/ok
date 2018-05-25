#include <iostream>
using namespace std;

int main()
{
    cout<<"hunter 7";
    int a[34],n,i,j,b[56],c[78];
    cout<<"enter the numbe of input:";
    cin>>n;
    if(1<=n<=100000)
    {
    cout<<"enter the array elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    cout<<"array elements which are giving sum into equvalent another number:"<<endl;
    for(i=0;i<n;i++)
    { 
       for(j=i+1;j<=n;j++)
       {
           c[i]=a[i]+a[j];
           if(c[i]==a[j+1])
           {
               cout<<a[i]<<" "<<a[j]<<" "<<c[i]<<endl;
           }
       }
}
}
else
{
    cout<<"invalid input";
}
}

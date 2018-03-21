#include<iostream>
#include<string>
using namespace std;

int main()
{
 
    int a,n,d,sum,tn,i;
    cout<<"Enter the starting number :";
    cin>>a;
    cout<<"Enter the number of sries :";
    cin>>n;
    cout<<"Enter the interva:";
    cin>>d;
     sum = (n * (2 * a + (n - 1)* d ))/ 2;
     tn=a+(n-1)*d;
   
    
    for(i=a;i<=tn;i=i+d)
    {  
        if(i!=tn)
    {
        cout<<i<<endl;
    }
    else
    {   cout<<i<<endl;
        cout<<" sum of ap series :";
        cout<<" "<<sum;
    }
    }
    return 0;
}

#include<iostream>
#include<string.h>
using namespace std;
 
int main()
{
    int n1,n2,n3;
    cout<<"Enter the first number :";
    cin>>n1;
    cout<<"Enter the second number :";
    cin>>n2;
    n3=n1+n2;
    cout<<"the sum of "<<n1<<" "<<"and"<<n2<<"is:"<<n3<<endl;
    if(n3%2==0)
    {
        cout<<n3<<" is even number ";
    }
    else
    {
        cout<<n3<<" is odd number";
    }
 
      return 0;
}

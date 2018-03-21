#include <iostream>
using namespace std;
int main()
{
    int n,n1,i,mul=1,mult;
    cout<<"enter the number :";
    cin>>n;
    cout<<"enter the power :";
    cin>>n1;
    for(i=0;i<n1;i++)
    {
      mul=mul*n;
    }
    cout<<"answer :"<<mul;
    return 0;
}

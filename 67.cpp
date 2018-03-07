#include<iostream>
#include<string.h>
using namespace std;
 
int main()
{ 
    int n1,n2,i;
    cout<<"Enter the first number :";
    cin>>n1;
    for(i=0;n1 % 10!=0;n1++)
    {
       n2=n1;
    }
    cout<<n2+1;
}

#include<iostream>
#include<string.h>
using namespace std;
 
int main()
{ 
    int n1,n2,n3;
    cout<<"Enter the first number :";
    cin>>n1;
    cout<<"enter the second number";
    cin>>n2;
    n3=n1-n2;
    if(n3%2==0)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
}

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number";
    cin>>a;
    if(a>=10000000)
    {
    cout<<a<<"next number is:"<<a+1;
}
else
{
cout<<"number not in range";
}
    return 0;
}

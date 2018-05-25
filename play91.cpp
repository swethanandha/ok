#include <iostream>
using namespace std;

int main()
{
    int n,rem;
    cout<<"enter the number:";
    cin>>n;
    cout<<"binary representation of a number"<<n<<"is:";
    while(n!=0)
    {
        rem=n%2;
        n=n/2;
        cout<<rem;
    }
}

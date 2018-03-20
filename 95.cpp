 #include <iostream>
#include<math.h>
using namespace std;
int main()
{
    float p,n,r,si;
    cout<<"enter principle amount :";
    cin>>p;
    cout<<"enter the time interval :";
    cin>>n;
    cout<<"enter the rate  of interest :";
    cin>>r;
    si=p*n*r/100;
    cout<<"simple interest :";
    cout<<floor(si);
    return 0;
}

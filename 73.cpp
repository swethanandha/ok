#include <iostream>
using namespace std;
int main()
{
   int n;
   cout<<"enter the number to check";
   cin>>n;
   int n2,n3;
   cout<<"enter the first limit";
   
   cin>>n2;
   cout<<"enter the second limit";
   cin>>n3;
   if(n>=n2&&n<=n3)
   {
       cout<<"yes";
   }
   else
   {
       cout<<"no";
   }
    return 0;
}

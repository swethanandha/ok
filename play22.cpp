#include <iostream>
using namespace std;

int main()
{
   int n1,n2,i,b;
   cout<<"number1:";
   cin>>n1;
   cout<<"number2:";
   cin>>n2;
   for(i=1;i<=n2;i++)
   {
       if(n1%i==0&&n2%i==0)
       {
           b=i;
       }
   }
    cout<<"greatest common element that divides "<<n1<<"and "<<n2<<"is:"<<b;
}

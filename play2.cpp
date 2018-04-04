#include <iostream>
#include<string>
using namespace std;

int main()
{
 int n,fact=1,i;
 cout<<"Enter number :";
 cin>>n;
 for(i=1;i<=n;i++)
 {
     fact=fact*i;
 }
 cout<<"factorial of number:"<<fact;
}

#include <iostream>

using namespace std;

int main()
{
 int n,count;
 cout<<"Enter the number :";
 cin>>n;
 if(n>=10000000000)
 {
 while(n!=0)
 {
     n=n/10;
     count++;
 }
 cout<<"number ofnumeric digits in a number:"<<count;
 }
 else
 {
     cout<<"invalid number";
 }
}

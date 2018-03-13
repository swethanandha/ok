#include <iostream>
#include <string>
using namespace std;
int main()
{
   string st,s;
   cout<<"Enter the string :";
   getline(cin,st);
   int n,i;
   cout<<"Enter the number :";
   cin>>n;
   for(i=0;i<n;i++)
   {
       s=st[i];
       cout<<s;
   }
   
    return 0;
}

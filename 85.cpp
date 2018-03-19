#include <iostream>
#include<string>
using namespace std;

int main()
{
   string s;
   int i;
   cout<<"Enter the string :";
   getline(cin,s);
   cout<<"odd position of string :";
   for(i=0;i<s.size();i++)
   {
       if(i%2==0)

      {
       cout<<s[i];

          }
        
   }
   cout<<" "<<endl;
   cout<<"even position of strings :";
   for(i=0;i<s.size();i++)
   {
       if(i%2!=0)
       {
           cout<<s[i];
       }
   }
    return 0;
}

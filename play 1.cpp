#include <iostream>
#include<string>
using namespace std;

int main()
{
  string s;
  int i;
  cout<<"Enter the string :";
  cin>>s;
  cout<<"The reverse string :";
  for(i=s.size();i>=0;i--)
  {
      cout<<s[i];
  }
}

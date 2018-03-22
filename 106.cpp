#include<iostream>
#include<string>
using namespace std;

int main()
{
 char a;
 int i;
 cout<<"Enter the character :";
 cin>>a;
 for(i=(int)a-96;i<=26;i++)

    {
    if((int)a-96==i)
    {
        cout<<i;
    }
    }
}

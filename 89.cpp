#include <iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
    string s;
    int i,j;
    char temp;
    cout<<"enter the string :";
    getline(cin,s);
    cout<<"number :";
    for(i=0;i<s.size();i++)
    {
        for(j=i+1;j<s.size();j++)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
        
    }
    cout<<"lexicographical order :";
    for(i=0;i<=s.size();i++)
    {
        cout<<s[i];
    }

    return 0;
}

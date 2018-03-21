#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string :";
    getline(cin,s);
    int n,i;
    cin>>n;
    for(i=s.size()-n;i<=s.size();i++)
    {
        cout<<s[i];
    }
    return 0;
}

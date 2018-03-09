#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string :";
    getline(cin,str);
    string st; 
    int i;
for (int i = 0; i < str.size(); i++)
{
    
    str[str.size()/2]='*';
    cout<<str[i];
}

}

#include <iostream>
#include<string>
using namespace std;
string is_isogram(string str)
{
    int len = str.length();
  
    for (int i = 0; i < len; i++)
    {
        if (str[i] == str[i + 1])
        return "False";
    }
    return "True";
}
     
int main()
{
    cout<<is_isogram("yyy");
}

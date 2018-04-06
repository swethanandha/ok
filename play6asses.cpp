#include <iostream>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<string>
using namespace std;


    bool iso(string x,string y)
    {
        int i;
        if(x.length()!=y.length())
        {
            return false;
        }
        unordered_map<char,char>map;
        unordered_set<char>set;
        for(i=0;i<=x.length();i++)
        {
            char x=x[i];y=y[i];
            if(map.find(x)!=map.end())
            {
                if(map[x]!=y)
                {
                    return flase;
                }
                else
                {
                    if(set.find(y)!=set.end())
                    return false;
                    map[x]=y;
                    set.insert(y);
                }
            }
            return true;
        }
    }

    int main()
    {
        string x="acab";
        string y="xcxy";
        if(iso(x,y))
        {
            cout<<"ok";
        }
        else
        {
            cout<<"no";
        }
    }


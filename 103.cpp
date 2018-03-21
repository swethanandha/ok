#include<iostream>
#include<string>
using namespace std;

int main()
{
 
    int i;
   string a;
   cout<<"Enter the string :";
   getline(cin,a);
   
   
 
    for(i=0;i<a.size();++i)
    {
        if(i==0)
        {
            if(islower(a[i]))
            a[i]=toupper(a[i]);
        }
        else
        {
            if(a[i]!=' ')
            {
                if(isupper(a[i]))
                    a[i]=tolower(a[i]);
            }
            else
            {
                i++;
                if(islower(a[i]))
                    a[i]=toupper(a[i]);
            }
        }
    }
    cout<<"\nUpdated New String is :: "<<a<<"\n";
 
    return 0;
}

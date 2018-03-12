#include<iostream>
 #include<string>
using namespace std;
 
int main()
{
    char x[10];
    int flag=1;
    int n,i,s=0;
    cout<<"Enter any string\n";
    cin>>x;
    //n=strlen(x);
    for(i=0;x[i]!='\0';++i)
    {
        if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
        {
            s=s+1;
            flag=0;
           
       }
    }
    if(flag==0)
    {
        cout<<"vowel is present in string"<<endl;
    }
    else
    {
        cout<<"vowels not present in string"<<endl;
    }
    cout<<"number of vowels present in string :"<<s;
    return 0;
}

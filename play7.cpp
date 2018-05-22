#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char s[100],t; 
int len,i;

cin>>s;
len=strlen(s);

if(len%2==0)
{
for(i=0;i<len;i+=2)
{
t=s[i];
s[i]=s[i+1];
s[i+1]=t;

}
cout<<s;
}
else
{
for(i=0;i<(len-1);i+=2)
{
t=s[i];
s[i]=s[i+1];
s[i+1]=t;

}
cout<<s;
}
return 0;
}

#include<iostream>
 #include<string>
using namespace std;
 
int main()
{
    int num,flag=1;
    cout<<"Enter  a number :";
    cin>>num;
    int i;
    for(i=1;i<=num;i++)
    {
        if(num==i*i)
        {
            flag=0;
            
        }
        
    }
    if(flag==0)
    {
        cout<<"yes,number is perfect square";
    }
    else
    {
        cout<<"no,number is not perfect square";
  }
}

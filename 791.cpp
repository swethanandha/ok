#include<iostream>
 #include<string>
using namespace std;
 
int main()
{
    int num,num1,flag=0;
    cout<<"Enter  a number :";
    cin>>num;
    cout<<"second number:";
    cin>>num1;
    cout<<"product of two given numbers  :"<<num*num1<<endl;
    int i;
    for(i=1;i<=num*num1;i++)
    {
        if(num*num1==i*i)
        {
            flag=1;
            
        }
        
    }
    if(flag==1)
    {
        cout<<"yes,number is perfect square";
    }
    else
    {
        cout<<"no,number is not perfect square";
  }

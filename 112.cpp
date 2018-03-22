#include<iostream>
#include<string>
using namespace std;

int main()
{
 
 int n,a[10],num,i;
 cout<<"Enter the number of elements :";
 cin>>n;
 cout<<"Array elements :";
 for(i=0;i<n;i++)
 {
    cin>>a[i];
 }
 cout<,"Enter the number to check :";
 cin>>num;
 for(i=0;i<n;i++)
 {
     if(num==a[i])
     {
        cout<<"yes ,number is present";
        break;
     }
     else
     {
         cout<<"no,number not present";
         break;
     }
 }
 

}

#include<iostream>
#include<string>
using namespace std;

int main()
{
 
 int n,a[10],num,i,count=0,j;
 cout<<"Enter the number of elements :";
 cin>>n;
 cout<<"Array elements :";
 for(i=0;i<n;i++)
 {
    cin>>a[i];
 }
 cout<<"Enter the number to check :";
  cin>>num;
 for(i=0;i<=n;i++)
 {
    
     if(a[i]==num)
     {
        count++;
       
    
     }
     else
     {
         
         break;
     }
      
 }
 cout<<"number of repetitions :"<<count;

}

#include <iostream>
using namespace std;
int main()
{
   int a[98],i,n,n2,count=0;
   cout<<"Enter the numbers :";
   cin>>n;
   cout<<"array elements :";
   for(i=0;i<n;i++)
      {
         cin>> a[i];
         
      }
    for(i=0;i<n;i++)
      {   
          
          cout<<a[i]<<endl;
      }
    cout<<"Enter the position of element :";
    cin>>n2;
    for(i=0;i<n;i++)
     {
          
          if(a[i]%2!=0)
          {   
              
              count++;
          }
          
      
      if(count==n2)
      {
          cout<<a[i]<<endl;
          break;
      }
      }   
      
      
   
}

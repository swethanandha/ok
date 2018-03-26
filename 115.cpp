#include <iostream>
using namespace std;
int main()
{
   int a[98],i,n,n2,count=0,j,temp;
   cout<<"Enter the numbers :";
   cin>>n;
   cout<<"array elements :";
   for(i=1;i<=n;i++)
      {
         cin>> a[i];
         
      }
    
     
    for(i=1;i<=n;i++)
     {
          
          for(j=i+1;j<=n;j++)
          {  
              if(a[i]>a[j])
            {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
            }
          }
         
      }   
       cout<<"Enter the position of element :";
       cin>>n2;
       cout<<"The "<<n2<<"nd smallest number :"<<a[n2]; 
     
   
}

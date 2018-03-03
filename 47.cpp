#include <iostream>

using namespace std;

int main()
{
 int n,i,small,gr;
 int a[10];
 cout<<"Enter the number :";
 cin>>n;
 if(n<1000)
 {
 cout<<"Enter the array elements";
 for(i=0;i<n;i++)
 {
     cin>>a[i];
 }
 
 
 
     for(i=0;i<n;i++)
     {
         small=a[0];
         if(small>a[i])
         {
             small=a[i];
         }
         for(i=0;i<n;i++)
         {
             gr=a[0];
             if(gr<a[i])
             {
                 gr=a[i];
             }
         }
     }
     cout<<"Minimum element"<<small<<endl;
     cout<<"Maximum element"<<gr<<endl;
 }
 else
 {
     cout<<"number not in range";
 }
}




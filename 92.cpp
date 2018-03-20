#include <iostream>
using namespace std;
int main()
{
   int a[10],sum=0,i;
    int n;
    cout<<"enetr the numbern of inputs :";
   cin>>n;
   cout<<"enter the array elements :"<<endl;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
  for(i=0;i<n;i++)
  {
      sum=sum+a[i];
  }
  cout<<"sum of array elements :";
   cout<<sum;
    return 0;
}

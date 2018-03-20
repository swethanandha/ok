#include <iostream>
using namespace std;
int main()
{
  int a[10];
  int n,d,i;
  cout<<"enter the number of elements :";
  cin>>n;
 cout<<"array elements :";
  for(i=1;i<=n;i++)
  {
      cin>>a[i];
      
      
  }
  for(i=1;i<=n;i++)
  {
      cout<<a[i]<<endl;
  }
   cin>>d;
  for(i=1;i<=n;i++)
  {
  if(i==d)
      {
          cout<<a[i];
      }
  }
}

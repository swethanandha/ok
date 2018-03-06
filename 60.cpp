#include <iostream>
using namespace std;

int main()
{
    int n1=0,n2=1,n,i,f=0;
    cout<<"fibonacci series"<<endl;
    cout<<n1<<endl;
    cout<<n2<<endl;
    cout<<"Enter the number";
    cin>>n;
  for(i=0;i<=n;i++)
  {
      f=n1+n2;
      n1=n2;
      n2=f;
      cout<<f<<endl;
      
  }
 

    return 0;
}

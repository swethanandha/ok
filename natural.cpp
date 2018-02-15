#include <iostream>
using namespace std;

int main()
{
    int num,i,sum=0;
    cout<<" enter number"<<endl;
    cin>>num;
    cout<<" " <<num<<endl;
    for(i=0;i<=num;i++)
    {
    sum=sum+i;	
    }
    cout<<"sum of natural numbers "<<sum;
}

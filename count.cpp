#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    cout<<" " <<num<<endl;
    int count;
    while(num!=0)
    {
    	num=num/10;
    	count++;
    }
    cout<<"count is "<<count;
}

   

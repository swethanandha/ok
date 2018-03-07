#include<iostream>
#include<string.h>
using namespace std;
 
int main()
{ 
    int n1,n2,n,i;
    cout<<"Enter the first number :";
    cin>>n1;
    if(n1 >= 0 && n1 <= 10){
        cout<<"10";
    }else{
        n2 = n1/10;
        n2=n2+1;
        n = n2*10;
    }
    cout<<n;
}

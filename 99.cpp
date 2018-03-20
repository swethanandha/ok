#include <iostream>
#include<string>

using namespace std;
int main()
{
    int n,n1,n2,res,res1;
    cout<<"enter the numbers :";
    cin>>n>>n1>>n2;
    res=n*n1;
    res1=res%n2;
    cout<<"answer for number1*number2%number3:"<<res1;
}

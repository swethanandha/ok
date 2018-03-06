#include <iostream>
using namespace std;

int main()
{int n,digit,sum=0,remainder;
cout<<"Enter the number";
cin>>n;
     while (n>0) {
       remainder = n%10;
        sum = sum + remainder;
       
        n = n/10;
        cout << "The digits are: " << remainder<< endl;
        cout<<sum;
        }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
     int remainder;
    int n,digit;
    cin>>n;

    while (n>0) {
        remainder = n%10;
        
        int digit = n%10;
        n = n/10;
        cout << "The digits are: " << digit << endl;
        }
   

    return 0;
}

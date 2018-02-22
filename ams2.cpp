#include <iostream>
using namespace std;

int main()
{
  int num1, num2, i, num, d, result;

  cout << "Enter first number: ";
  cin >> num1;

  cout << "Enter second number: ";
  cin >> num2;

  cout << "Armstrong numbers between " << num1 << " and " << num2 << " are: " << endl;
  for(i = num1; i <= num2; i++)
  {
        result= 0;
        num = i;

        for(;num>0;num/10)
        {
            d = num % 10;
           result = result + d * d* d;
        }

        if(result == i)
        {
            cout << i << endl;
        }
  }
}


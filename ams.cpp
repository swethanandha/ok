#include <iostream>
using namespace std;


int main()
{
    int number;
    int remain;
    int result=0;
    int y;
    

    cout<<"Enter a three digit integer: ";
    cin>>number;

    y = number;
if(y<=1000)
{
    while (y != 0)
    {
        remain = y%10;
        result =result+ remain*remain*remain;
        y=y/10;
    }

    if(result == number)
      cout<<number<<"amstrong number";
    else
        cout<<number<<"not an amstrong number";

    return 0;
}
else
{
	cout<<"invalid output";
}
}

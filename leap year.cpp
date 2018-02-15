#include <iostream>
using namespace std;

int main()
{
    int yr;

    cout << "Enter a year: ";
    cin >> yr;

    if (yr % 4 == 0)
    {
        if (yr % 100 == 0)
        {
               if (yr % 400 == 0){
                cout << yr << "  a leap year.";
               }
            else
                cout << yr << "  not a leap year.";
        }
        else
            cout << yr << "  a leap year.";
    }
    else
        cout << yr << "  not a leap year.";

    return 0;
}

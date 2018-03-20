#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int num,num2;
    char op;
    while(cin>>num>>op>>num2)
    {
        if(op=='/')
        {
            cout<<"division operation answer:"<<num/num2;
        }
        if(op=='%')
        {
            cout<<"mod operation answer:"<<num%num2;
        }
    }

    return 0;
}

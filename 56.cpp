#include <iostream>

using namespace std;

int main()
{
  string str;
  int flag=0,flag1=0;
  cout<<"enter the value";
  cin>>str;
  for(int i=0;i<=str.length()-1;i++)
  {
      if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
      {
            flag = 1;
        }
        if(str[i] >= '0' && str[i] <= '9')
        {
            flag1 = 1;
        }
    }
    if(flag == 1 && flag1 == 1)
    {
        cout<<"Yes,numbers nd alphabets"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}

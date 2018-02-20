#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,a,b;
	cin>>a;
	cin>>b;
  if(a>b)
  {
	for(i=a;i<b;i++)
	{
		if(i%2==0)
		{          cout<<"even number";  
			cout<<i<<endl;
		}
	}
	}
  else
  {
  cout<<"invalid input";
  }
	return 0;
}

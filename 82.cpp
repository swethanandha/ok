#include <iostream>
#include <iomanip>
using namespace std;

int main()
{    float len,br;
     cout<<"length :";
     cin>>len;
     cout<<"bredth :";
     cin>>br;
	 float x=len*br;
	 cout<<"area :";
     cout<<fixed<<setprecision(5)<<x<<endl;

	return 0;
}

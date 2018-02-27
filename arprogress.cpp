#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int   a ,n,d,result,res1;
	cout<<"number of inputs :";
	cin>>n;
	cout<<n<<endl;
	cout<<"starting position :";
	cin>>a;
	cout<<a<<endl;
             cout<<"diffrence :";
             cin>>d;
             cout<<d<<endl;
if(n>=1&&d<=1000000)
{
            res1=2*a+(n-1)*d;
	result=(n*res1)/2;
	cout<<"arithmetic progresion is :"<<result;
	return 0;
}
else
{
	cout<<"invalid input";
}
}

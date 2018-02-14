#include <iostream>
using namespace std;
class check
{           
	public:
	int a;
	

	void choice( )
	{
		cout<<"enter number"<<endl;
	cin>>a;
	cout<<"the number is";
	if(a>0)
	{
		cout<<" positive";
		
	}
	else
	{
		cout<<"negative";
	}
	}
};
int main() {
	// your code goes here
	check c;
	c.choice();
	return 0;
}

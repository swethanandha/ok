#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int minutes,hours,ansmin;
	cout<<"enter your minutes to conver :";
	cin>>minutes;
	cout<<minutes<<endl;
	if(minutes>1)
	{
	hours=minutes/60;
	ansmin=minutes%60;
	cout<<hours<<"hours"<<endl;
	cout<<ansmin<<"minutes"<<endl;
	return 0;
	}
	else
	{
		cout<<"invlid input";
	}
}

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	cout<<"enter the character "<<endl;
	char fir;
	cin>>fir;
	cout<< " "<<fir<<" ";
	if(fir=='a'|fir=='e'|fir=='i'|fir=='o'|fir=='u')
	{
		cout<<"vowel";
	}
	else
	{
		cout<<"consonant";
	}
	return 0;
}

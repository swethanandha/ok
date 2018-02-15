#include <iostream>
using namespace std;

int main()
{
	int num,i,mul;
	cout<<"enter the number : ";
	
	cin>>num;
	

	cout<<num<<endl;
	int power;
	cout<<"enter the power : ";
            cin>>power;
            cout<<power<<endl;
            if(power>0){
	for(i=0;i<=power;i++)
	{
		
	mul=mul*num;
		}
            }
		else
		{
			cout<<"negative input"<<endl;
			
		}
	
	cout<<"the power of given number is:" <<mul;
	
	
}

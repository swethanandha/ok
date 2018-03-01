#include<iostream>
#include<string>
 
using namespace std;
 class num
 {
 	
 	public:
 void print(string str)
 {          
 	int count=0,i;
 	//cin>>str;
 	cout<<str;
 	for(i=0;str[i]!='\0';i++)
 	{
 		if(str[i]!=' ')
 		{
 			count++;
 			
 		}
 	}
 	cout<<" number of characters: "<<count;
 }
 };
int main()
{
num n;
n.print("fgvty fvytf");

}    

#include<iostream>
#include<string>
 
using namespace std;
int main()

{
string str;
string str1;
 	int count=0,i,j;
 	cin>>str;
 	cin>>str1;
 	//cout<<str<<endl;
 	for(i=0;str[i]!='\0';i++)
 	{
 		for(j=0;str1[j]!='\0';j++)
 		{
 		if(str[i]==str1[j])
 		{            
 			count++;
 	                cout<<str[i];
 	               if(str[i]>str1[j])
 	               {
 	               	cout<<str[i];
 	               }
 	                
 		}
 		
 		}
 		
 		
 	}
 	//cout<<" number of  matching characters: "<<count;
}

#include <iostream>

using namespace std;

int main()
{
    
	// your code goes here
	char a[100];
	int i,count=0;
	cout<<"enter the string :";
    gets(a);
    
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{       
			count++;
			
		}
	
	}
		cout<<"number of numeric characters in a paragraph :"<<count;
	return 0;
}
    




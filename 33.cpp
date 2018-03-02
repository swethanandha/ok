#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char a[100];
	int i,count=0;
	cout<<"enter the string :";
    gets(a);
    
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{       
			count++;
			
		}
	
	}
		cout<<"number of spaces in a string :"<<count;
	return 0;
}



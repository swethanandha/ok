#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char a[100];
	int i,cou=1;
	cout<<"enter the string :";
    gets(a);
    
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{       
			cou++;
			
		}
	
	}
		cout<<"number of words in a string :"<<cou;
	return 0;
}


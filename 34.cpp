int main() {
	// your code goes here
	char a[100];
	int i,count=1;
	cout<<"enter the string :";
    gets(a);
    
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='.')
		{       
			count++;
			
		}
	
	}
		cout<<"number of sentences in a paragraph :"<<count;
	return 0;
}

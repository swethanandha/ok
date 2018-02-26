int main() {
	// your code goes here
	int a[10];
	int i,n;
	cin>>n;
	if(cin)
	{
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"array elements with index "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" "<<i<<endl;
	}
	}
	else
	{
		cout<<"enter the input";
	}
	return 0;
}

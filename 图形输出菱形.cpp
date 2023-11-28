#include <iostream>
using namespace std;


int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n-1;i++)
	{
		for(int j=1;j<=(n-i)*2;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=1+4*(i-1);k++)
		{
			cout<<"*";
		}
		for(int j=1;j<=(n-i)*2;j++)
		{
			cout<<" ";
		}
		cout<<endl;
	}
	for(int k=1;k<=1+(n-1)*4;k++)
	{
		cout<<"*";
	}
	cout<<endl;
	
	for(int i=n-1;i>=1;i--)
	{
		for(int j=1;j<=(n-i)*2;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=1+4*(i-1);k++)
		{
			cout<<"*";
		}
		for(int j=1;j<=(n-i)*2;j++)
		{
			cout<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}

#include <iostream>
using namespace std;


int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=(n+1)/2;i++)
	{
		for(int k=1;k<=((n+1))/2-i;k++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i*2-1;j++)
		{
			cout<<"*";
		}
		for(int k=1;k<=(n+1)/2-i;k++)
		{
			cout<<" ";
		}
		cout<<endl;
	}
	for(int i=1;i<=(n-1)/2;i++)
	{
		for(int i=1;i<=(n+1)/2-1;i++)
		{
			cout<<" ";
		}
		cout<<"*";
		for(int i=1;i<=(n+1)/2-1;i++)
		{
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}

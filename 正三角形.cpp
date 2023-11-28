#include <iostream>
using namespace std;


int main()
{
	int n,m;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>m;
		for(int j=1;j<=m;j++)
		{
			for(int k=1;k<=(m-j);k++)
			{
				cout<<" ";
			}
			for(int p=1;p<=j*2-1;p++)	
			{
				cout<<"*";
			}
				for(int k=1;k<=(m-j);k++)
			{
				cout<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	} 
	return 0;
}

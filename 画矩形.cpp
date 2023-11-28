#include <iostream>
using namespace std;


int main()
{
	int m,n,k;
	char x;
	cin>>m>>n>>x>>k;
	for(int i=1;i<=n;i++)
	{
		if(k==1 ||k==0&&i==1||k==0&&i==n)
		{
			for(int j=1;j<=m;j++)
			{
				cout<<x;
			}
			cout<<endl;
		}
		else
		{
			cout<<x;
			for (int j=1;j<=m-2;j++)	cout<<" ";
			cout<<x<<endl;
		}
	}
	return 0;
}

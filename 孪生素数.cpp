#include <iostream>
using namespace std;

int main()
{
	int n,sum=0;
	cin>>n;
	int a[n+1]={};
	for(int i=2;i<=n/2;i++)
	{
		for(int j=2;j<=n/i;j++)
		{
			a[i*j]=1;
		}
	}
	for(int i=2;i<=n-2;i++)
	{
		if(a[i]==0&&a[i+1]==0||a[i]==0&&a[i+2]==0)
		{
			//cout<<i<<endl; 
			sum++;
		}	 
	}
	cout<<sum;
	return 0;
}

#include<iostream>
using namespace std;
int n,k,sumf=0;
int a[205];

void dfs(int m)
{
	if(k==m&&n>=a[m-1])
	{
		a[m]=n;
		sumf++;
		return;	
	}	
	for(int i=a[k-1];i<=n;i++)
	{
		a[m]=i;
		n=n-i;
		dfs(m+1);
		n+=i;
	}
}

int main()
{
	cin>>n>>k;
	a[0]=1;
	dfs(1);
	cout<<sumf; 
	return 0; 
}

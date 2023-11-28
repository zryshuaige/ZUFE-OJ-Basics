#include <iostream>
using namespace std;
int  n,cnt=0;
string str;
char a[600];
int b[200];

void dfs(int k)
{
	if(k==n+1)
	{
		cnt++;
		for(int i=1;i<=n;i++)
		{
			printf("%c",a[i]);
		} 
		printf("\n");
		return;
	}
	for(char i='a';i<='z';i++)
	{
		if(b[i]>0)
		{
			a[k]=i;
			b[i]-=1;
			dfs(k+1);
			b[i]+=1;
		}
	}
}
int main()
{
	cin>>n>>str;
	for(int i=0;i<n;i++)
	{
		b[str[i]]++;
	}
	dfs(1);
	printf("%d",cnt);
	return 0;
}

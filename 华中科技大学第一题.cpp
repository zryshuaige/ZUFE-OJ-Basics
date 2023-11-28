#include <iostream>
using namespace std;
int main()
{
	long int y,n,m,ans=1e8,cnt,x=0,y1=0;
	cin>>y>>n>>m; 
	int a[n],b[m];
	for(int i=1;i<=n;i++)
	{
		a[i-1]=i;
	}
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
		if(b[i]>maxb)	maxb=b[i];
	}
	for(int i=0;i<m;i++)
	{
		for(int j=i;j<m-1;j++)
		{
			if(b[j]<b[j+1])	swap(b[j],b[j+1]);
		}
	}
	for(int k=1;k<=y/b[0];k++)
	{
		cnt=0,y1=y;
		while(y1!=0)
		{
			for(int i=0;i<m;i++)
			{
				if(y1%b[i]==0)
				{
					y1/=b[i];
					break;
				}
			}
			for(int j=n-1;j>=0;j--)
			{
				if(y1-a[i]==0)
				{
					break;
				}
				else
				{
					
				}
			}
			cnt++;
		}
		if(cnt<ans) 	ans=cnt;
	}
	cout<<ans;
	return 0;
}

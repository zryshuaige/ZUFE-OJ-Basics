#include <iostream>
using namespace std;


int main()
{
	int l,m,a,b;
	cin>>l>>m;
	int cnt[l+1],sum=00;
	for(int k=0;k<=l;k++)
	{
		cnt[k]=1;
	}
	for(int i=1;i<=m;i++)
	{
		cin>>a>>b;
		for(int j=a;j<=b;j++)
		{
			cnt[j]=0;
		}
	}
	
	for(int k=0;k<=l;k++)
	{
		if(cnt[k]==1)
		{
			sum+=1;
		}
	}
	cout<<sum;
	return 0;
}

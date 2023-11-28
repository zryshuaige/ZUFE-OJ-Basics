#include <iostream>
using namespace std;

int main()
{
	int n,min=1e8;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<min)	min=a[i];
	}
	int mincnt=1e8,ans,anslen;
	for(int i=1;i<=min;i++)
	{
		int flag=1,cnt=0;
		for(int j=0;j<n;j++)
		{
			if(a[j]%i==0)
			{
				cnt+=a[j]/i;
				ans=i;
			}
			else
			{
				cnt=0,flag=0;
				break;
			}
		}
		if(flag==0)	continue;
		else 
		{
			if(cnt<mincnt)
			{
				mincnt=cnt;
				anslen=ans;
			}
			cnt=0;
		}
	}
	cout<<anslen; 
	return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int minn=1e8,maxn=-1e8;
	int a[3];
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
		if(a[i]>maxn)	maxn=a[i];
		if(a[i]<minn)	minn=a[i];
	}
	int cnt,mina=1e8;
	for(int i=minn;i<=maxn;i++)
	{
		cnt=0;
		for(int j=0;j<3;j++)
		{
			cnt+=fabs(a[j]-i);
		}
		if(cnt<mina)	mina=cnt;
	}
	cout<<mina;
	return 0;
}

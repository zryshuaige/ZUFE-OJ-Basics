#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	int n,m,cnt,min=1e8,min1=999;
	scanf("%d%d",&n,&m);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<min1)	min1=a[i];	
	}
	for(int i=0;i<n-m+1;i++)
	{
		cnt=0;
		for(int j=1;j<m;j++)
		{
			cnt+=abs(a[i+j]-a[i+j-1]);
		}
		if(cnt<min)	min=cnt;
	}
	if(m==1)	min=min1; 
	printf("%d",min);
	return 0;
}

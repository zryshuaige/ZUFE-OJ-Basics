#include <iostream>
using namespace std;


int main()
{
	int n,m;
	scanf("%d %d",&n,&m)
	int a[n][m];
	int l1[n],l2[n],k=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==1&&(i!=0&&j!=0)&&(i!=0&&j!=m-1)&&(i!=n-1&&j!=0)&&(i!=n-1&&j!=m-1))
			{
				l1[k]=i,l2[k]=j;
				k++;
			}
		}
	}
	if(k==1)	printf("4");
	else if(k==2)
	{
		if(l1[0]!=l1[1]&&l2[0]!=l2[1])
		{
			if(l1[0]==0&&l1[1]==n-1)
			else 	printf("3")
		}
		else printf("4");
	}			
	return 0;
}

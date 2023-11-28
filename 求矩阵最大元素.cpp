#include <iostream>
using namespace std;


int main()
{
	int n=3,m=4,max=-999,c=0,r=0;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
		getchar();
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				r=i+1,c=j+1;
			}
		}
	}
	printf("max=%d, row=%d, column=%d",max,r,c);
	return 0;
}

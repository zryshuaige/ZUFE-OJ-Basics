#include <iostream>
using namespace std;


int main()
{
	int n1,n2,n3,max=0;
	int a[2000];
	for(int i=0;i<2000;i++)
	{
		a[i]=0;
	}
	scanf("%d%d%d",&n1,&n2,&n3);
	for(int i=1;i<=n1;i++)
	{
		for(int j=1;j<=n2;j++)
		{
			for(int p=1;p<=n3;p++)
			{
				a[i+j+p]+=1;
				if(a[i+j+p]>max)	max=a[i+j+p];
			}
		}
	}
	for(int i=3;i<2000;i++)
	{
		if(a[i]==max) printf("%d ",i);
	}
	//printf("%d",max);
	
	return 0;
}

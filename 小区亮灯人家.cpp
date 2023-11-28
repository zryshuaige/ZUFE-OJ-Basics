#include <iostream>
using namespace std;


int main()
{
	int n,m,x,sum=0,flag,k;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		k=1;flag=0;
		for(int j=1;j<=m*2;j++)
		{
			scanf("%d",&x);
			if(k!=2)
			{
				if(x==1)
				{
					flag=1;
				}
				k++;
			}
			else
			{
				if(x==1)
				{
					flag=1;
				}
				if(flag==1)
				{ 
					flag=0;
					sum+=1;
				}
				k=1; 
			}
		}
	} 
	cout<<sum;
	return 0;
}

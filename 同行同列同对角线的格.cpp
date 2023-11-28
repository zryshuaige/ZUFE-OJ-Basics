#include <iostream>
using namespace std;
int main()
{
	int n,i,j;
	scanf("%d%d%d",&n,&i,&j);
	for(int p=1;p<=n;p++)
	{
		for(int q=1;q<=n;q++)
		{
			if(p==i&&q==j)
			{
				for(int q=1;q<=n;q++)
				{
					printf("(%d,%d) ",i,q);
				}
				printf("\n");
				for(int p=1;p<=n;p++)
				{
					printf("(%d,%d) ",p,j);
				}
				printf("\n");
				int i2=i,j2=j;
				
				while(i>1&&j>1)//ËÑË÷×óÉÏ½Ç 
				{
					i--,j--;
				}
				while(i<=n&&j<=n)
				{
					printf("(%d,%d) ",i,j);
					i++,j++;
				}
				printf("\n");
				
				while(i2<n&&j2>1)//ËÑË÷×óÏÂ½Ç 
				{
					i2++,j2--;
				}
				while(i2>=1&&j2<=n)
				{
					printf("(%d,%d) ",i2,j2);
					i2--,j2++;
				}
			}
		}
	}
	return 0;
}


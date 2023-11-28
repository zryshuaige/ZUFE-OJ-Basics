#include <iostream>
using namespace std;
#define maxn 1000

int main()
{
	int c1[maxn],c2[maxn],k=0;
	long int n;
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		int sum=0;
		for(int j=i;j<n;j++)
		{
			sum+=j;
			if(sum==n)
			{
				c1[k]=i,c2[k]=j;
				k++;
				break;
			}	
		}
	}
	for(int i=0;i<k;i++)
	{
		printf("%d %d\n",c1[i],c2[i]);
	}	
	return 0;
}

#include <iostream>
using namespace std;


int main()
{
	int n,m=1,i=0,j=0,k=1;//k=1代表左上方向 
	scanf("%d",&n);
	int a[n][n];
	while(m<=n*n)
	{
		if(k==1)
		{
			while(i>=0&&j<n)
			{
				a[i][j]=m;
				m++,j++,i--;	
			}
			if(i+j<n-1)	i++;
			else
			{
				i+=2,j--;
			}
		}
		else
		{
			while(j>=0&&i<n)
			{
				a[i][j]=m;
				m++,j--,i++;
			}
			if(i+j<n-1)	j++;
			else
			{
				j+=2,i--;
			}
		} 
		k=-k;
	}
	
	for(int p=0;p<n;p++)
	{
		for(int q=0;q<n;q++)
		{
			printf("%d ",a[p][q]);
		}
		printf("\n");
	}
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int n,m;
	char x;
	scanf("%d%d\n",&n,&m);
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%c",&x);
			if(x=='*')	a[i][j]=-1; 
			else	a[i][j]=0;	
		}
		getchar();	
	} 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==-1)
			{
				if(i!=0&&j!=0&&i!=n-1&&j!=m-1)
				{
					if(a[i-1][j]!=-1)	a[i-1][j]+=1;//�� 
					if(a[i+1][j]!=-1)	a[i+1][j]+=1;//�� 
					if(a[i][j-1]!=-1)	a[i][j-1]+=1;//�� 
					if(a[i][j+1]!=-1)	a[i][j+1]+=1;//�� 
					if(a[i-1][j-1]!=-1)	a[i-1][j-1]+=1;//����
					if(a[i+1][j-1]!=-1)	a[i+1][j-1]+=1;//����
					if(a[i-1][j+1]!=-1)	a[i-1][j+1]+=1;//���� 
					if(a[i+1][j+1]!=-1)	a[i+1][j+1]+=1;//���� 
				}
				else if(i==0)
				{
					if(a[i+1][j]!=-1)	a[i+1][j]+=1;//�� 
					if(j==0)
					{
						if(a[i][j+1]!=-1)	a[i][j+1]+=1;//��
						if(a[i+1][j+1]!=-1)	a[i+1][j+1]+=1;//����  
					}
					else if(j==m-1)
					{
						if(a[i][j-1]!=-1)	a[i][j-1]+=1;//�� 
						if(a[i+1][j-1]!=-1)	a[i+1][j-1]+=1;//����
					}
					else 
					{
						if(a[i][j-1]!=-1)	a[i][j-1]+=1;//�� 
						if(a[i][j+1]!=-1)	a[i][j+1]+=1;//�� 
						if(a[i+1][j+1]!=-1)	a[i+1][j+1]+=1;//����
						if(a[i+1][j-1]!=-1)	a[i+1][j-1]+=1;//���� 
					}
				}
				else if(i==n-1)
				{
					if(a[i-1][j]!=-1)	a[i-1][j]+=1;//�� 
					if(j==0)
					{
						if(a[i][j+1]!=-1)	a[i][j+1]+=1;//�� 
						if(a[i-1][j+1]!=-1)	a[i-1][j+1]+=1;//����
					}
					else if(j==m-1)
					{
						if(a[i][j-1]!=-1)	a[i][j-1]+=1;//�� 
						if(a[i-1][j-1]!=-1)	a[i-1][j-1]+=1;//����
					}
					else 
					{
						if(a[i][j-1]!=-1)	a[i][j-1]+=1;//�� 
						if(a[i][j+1]!=-1)	a[i][j+1]+=1;//��
						if(a[i-1][j-1]!=-1)	a[i-1][j-1]+=1;//����
						if(a[i-1][j+1]!=-1)	a[i-1][j+1]+=1;//����  
					} 
				}
				else 
				{
					if(a[i-1][j]!=-1)	a[i-1][j]+=1;//�� 
					if(a[i+1][j]!=-1)	a[i+1][j]+=1;//�� 
					if(j==0)	
					{
						if(a[i][j+1]!=-1)	a[i][j+1]+=1;//��
						if(a[i-1][j+1]!=-1)	a[i-1][j+1]+=1;//���� 
						if(a[i+1][j+1]!=-1)	a[i+1][j+1]+=1;//����
					}
					else if(j==m-1)
					{
						if(a[i-1][j-1]!=-1)	a[i-1][j-1]+=1;//����
						if(a[i+1][j-1]!=-1)	a[i+1][j-1]+=1;//����
						if(a[i][j-1]!=-1)	a[i][j-1]+=1;//��
					}
				}
			}	
		}	
	} 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==-1)	printf("*");
			else	printf("%d",a[i][j]);
		}
		printf("\n");	
	} 
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int m,n,x,sum=0;
    scanf("%d%d\n",&m,&n);
    int a[m][n];  
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&x);
            a[i][j]=x;
        }
        //scanf("\n");
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[0][i];
        //printf("%d\n",sum);
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[m-1][i];
        //printf("%d\n",sum);
    }
    for(int k=1;k<m-1;k++)
    {
        sum+=a[k][0]+a[k][n-1];
    }
    printf("%d",sum);
	
    return 0;
}


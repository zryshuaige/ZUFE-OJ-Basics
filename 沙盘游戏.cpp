#include<iostream>
using namespace std;
int main()
{
    int n,m,max=-999,cnt;
    scanf("%d %d",&n,&m);
    int a[n][m];
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
            for(int p=i;p<n;p++)
            {
                for(int q=j;q<m;q++)
                {
                    int cnt=0;
                    for(int k1=i;k1<=p;k1++)
                    {
                        for(int k2=j;k2<=q;k2++)
                        {
                            cnt+=a[k1][k2];
                        }
                    }
                    if(cnt>max) max=cnt;
                }
            }
        }
    }
    printf("%d",max);
    return 0;
}

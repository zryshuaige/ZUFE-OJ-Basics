#include <iostream>
using namespace std;
int main()
{
	int m,n,cur,j,sum=0;
	cin>>m>>n;
	for (int i=m;i<=n;i++)
	{
		j=i;
		while (j!=0)
		{
			cur=j%10;
			if(cur==2)	sum+=1;
			j=j/10;
		}
	}
	cout<<sum;
	return 0;
}

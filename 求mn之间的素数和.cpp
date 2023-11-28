#include <iostream>
using namespace std;

int main()
{
	int m,n,sn=0,sum=0,i,j;
	cin>>m>>n;
	for(i=m;i<=n;i++)
	{
		for (j=2;j<i;j++)
		{
			if (i%j==0)
				break;		
		}
		if (j==i)
		{
			sn+=1;
			sum+=i;
		}
	}
	cout<<sn<<"  "<<sum;
	return 0;
}




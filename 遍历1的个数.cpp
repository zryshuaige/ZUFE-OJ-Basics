#include <iostream>
using namespace std;
int main()
{
	int n,cur,j,sum=0;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		j=i;
		while (j!=0)
		{
			cur=j%10;
			if(cur==1)	sum+=1;
			j=j/10;
		}
	}
	cout<<sum;
	
	return 0;
}

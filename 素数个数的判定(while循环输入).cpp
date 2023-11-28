#include <iostream>
using namespace std;
int cul(int x);


int main()
{
	int n,i,sum;
	while(cin>>n)
	{
		sum=0;
		for (i=2;i<=n;i++)
		{
			if (cul(i)==1)	
				sum++;
		}
		cout<<sum<<endl;
	}
	return 0;
}


int cul(int x)
{
	int k;
	for (k=2;k<x;k++)
	{
		if (x%k==0)
			break;	
	}
	if (k==x)
		return 1;
	else
		return 0;
}

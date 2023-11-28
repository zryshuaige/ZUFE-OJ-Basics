#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k,n=1;//n为当前整数 
	double sum=0;
	cin>>k;
	while(sum<=k)
	{
		sum+=1.0/n;
		n++;
	}
	cout<<n-1;
	return 0;
}

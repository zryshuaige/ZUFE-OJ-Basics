#include <iostream>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int w[n],v[n],p[n];
	for(int i=0;i<n;i++)
	{
		cin>>w[i]>>v[i];
		p[i]=v[i]/w[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(p[j]>p[j+1])	
			{
				swap(p[j],p[j+1]);
				swap(w[j],w[j+1]);
				swap(v[j],v[j+1]);
			}
		}
	}
	int i=n-1;
	double cntv=0,cntw=0;
	while(cntw+w[i]<m&&i>=0)
	{
		cntw+=w[i];
		cntv+=v[i];
		i--;
	}
	if(i>=0)	cntv+=(m-cntw)/w[i]*v[i]; 
	cout.precision(2);
	cout<<fixed<<cntv;
	return 0;
}

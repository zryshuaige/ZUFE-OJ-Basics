#include <iostream>
using namespace std;
int cul(int x);
//¼ÆËãeµÄÖµ 
int main()
{
	int n;
	double e=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		e+=1.0/cul(i); 
	}
	cout.precision(10);
	cout<<fixed<<e;
	return 0;
}

int cul(int x)
{
	int ans=1;
	for(int j=1;j<=x;j++)
	{
		ans*=j;
	}
	return ans;
}

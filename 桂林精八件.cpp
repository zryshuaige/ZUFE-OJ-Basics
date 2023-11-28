#include<iostream>
using namespace std;
const int N = 2*1e5+5;
int a[N],v[10];
int main()
{
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=2;i++)	
		cin>>v[i];
	for(int i=1;i<=n;i++)
	{
		if(v[a[i]]>=1)
		{
			ans++;
			v[a[i]]--;
		}
	}
	cout<<ans;
	return 0;
}

#include<iostream>
using namespace std;
const int  N = 1e6+5;
int a[N];

int main()
{
	int n,x,cnt=0;
	cin>>n>>x;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		if(a[i]==1)	cnt++;
		x-=a[i]+cnt;
		if(x<=0)
		{
			cout<<"YES"<<endl<<i;
			break;
		}
	}
	if(x>0)	cout<<"NO";
	return 0;
}

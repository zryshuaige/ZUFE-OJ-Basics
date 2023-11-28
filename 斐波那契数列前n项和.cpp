#include <iostream>
using namespace std;
int main()
{
	int f1=1,f2=1,sum=2,n,t;
	cin>>n;
	for(int i=3;i<=n;i++)
	{
		t=f2;
		f2+=f1;
		f1=t;
		sum+=f2;
	}
	cout<<sum<<endl;
	return 0;
}

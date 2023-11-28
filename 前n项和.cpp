#include <iostream>
using namespace std;


int main()
{
	int a,n,sum=0,Ai;
	cin>>a>>n;
	Ai=a;
	for (int i=1;i<=n;i++)
	{
		sum+=Ai;
		Ai=10*Ai+a;
	}
	cout<<sum;
	return 0;
}



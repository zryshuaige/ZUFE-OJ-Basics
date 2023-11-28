#include <iostream>
using namespace std;
int main()
{
	int k,a,sum=0;
	cin>>k;
	while(k>=1)
	{
		cin>>a;
		k--;
		if (a%2==0)
			sum+=a;
	}
	cout<<sum;
	return 0;
}

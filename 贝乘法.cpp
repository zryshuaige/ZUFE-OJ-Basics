#include <iostream>
using namespace std;

int main()
{
	int ka=0,kb=0,sum=0;
	long int a,b;
	cin>>a>>b;
	int a1[20],b1[20];
	while(a!=0)
	{
		a1[ka]=a%10;
		a/=10,ka++;
	}
	while(b!=0)
	{
		b1[kb]=b%10;
		b/=10,kb++;
	}
	for(int i=0;i<ka;i++)
	{
		for(int j=0;j<kb;j++)
		{
			sum+=a1[i]*b1[j];
		}
	}
	cout<<sum;
	return 0;
}

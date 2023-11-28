#include <iostream>
using namespace std;

int isPrime(int x)
{
	if(x==2)	return 1;
	for(int i=2;i<x;i++)
	{
		if(x%i==0)	return 0;
	}
	return 1;
}
int main()
{
	long int n;
	cin>>n;
	printf("%d=",n);
	while(n>1)
	{
		if(isPrime(n))
		{
			printf("%d",n);
			n=1;
			break;
		}
		for(int i=2;i<n;i++)
		{
			if(n%i==0&&isPrime(i))
			{
				printf("%d*",i);
				n/=i;
				break;
			}
		}
	}
	return 0;
}

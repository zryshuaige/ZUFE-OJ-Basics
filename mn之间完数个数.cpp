#include <iostream>
using namespace std;
int cul(int x);


int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=m;i<=n;i++)
	{
		if (cul(i)==1)	cout<<i<<"  ";
	}
	return 0;
}

  
int cul(int x)
{
	int sum=1,flag=0;
	for (int j=2;j<x;j++)
	{
		if(x%j==0)
			sum=sum+j;
	}
	if (x==sum)	flag=1;
	return flag;
}

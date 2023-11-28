#include <iostream>
using namespace std;
int cul(int x);


int main()
{
	int n,k=0,i=1;
	cin>>n;
	while(k!=n)
	{
		i++;
		if (cul(i)==1)
		{
			k++;
		}
	}
	cout<<i;
}


int cul(int x)
{
	int flag=1;
	for(int j=2;j<x;j++)
	{
		if (x%j==0)	flag=0;	
	}
	return flag; 
}

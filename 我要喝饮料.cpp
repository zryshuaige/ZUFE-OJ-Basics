#include <iostream>
#define MAXLINE 80
using namespace std;
int cul(int n);

int main()
{
	int n,sum=0,i=0;
	int a[MAXLINE];
	while(scanf("%d",&n))
	{
		if(n==0)
		{
			break;
		}
		else
		{
			a[i]=n;
			i++;
		}
	}
	for(int j=0;j<i;j++)
	{
		printf("%d\n",cul(a[j]));
	}
	return 0;
}

int cul(int n)
{
	int cnt=0,sumf;
	while(n>2)
	{
		n-=3,n++,sumf+=3;
	}
	if (n==2)
	{
		sumf+=3;
	}
	else if(n==1)
	{
		sumf+=1; 
	}
	return sumf;
}

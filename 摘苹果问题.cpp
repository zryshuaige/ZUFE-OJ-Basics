#include <iostream>
using namespace std;


int main()
{
	int a[10],x,max,cnt=0;
	for(int i=0;i<=9;i++)
	{
		cin>>x;
		a[i]=x;
	}
	cin>>max;
	max+=30;
	for(int j=0;j<=9;j++)
	{
		if (a[j]<=max)
		{
			cnt+=1;
		}
	}
	cout<<cnt;
	return 0;
}    

#include <iostream>
using namespace std;


int main()
{
	int n,x;
	cin>>n;
	int a[n];
	for(int i=0;i<=n-1;i++)
	{
		cin>>x;
		a[i]=x;
	} 
	for(int j=n-1;j>=0;j--)
	{
		cout<<a[j]<<" ";
	}
	
	return 0;
}

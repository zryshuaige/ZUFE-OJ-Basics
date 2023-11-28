#include <iostream>
using namespace std;
int main()
{
	int n,d=3,sum=0,an=2;
	cin>>n; 
	while (n>0)
	{
		sum+=an;
		an+=d;
		n--;
	}
	cout<<sum;
	return 0;	
}

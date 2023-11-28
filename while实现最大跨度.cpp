#include <iostream>
using namespace std;
int main()
{
	int n,a,max=0,min=999;
	cin>>n;
	while (n>0)
	{
		cin>>a;
		n--;
		if (a>max) max=a;
		if (a<min) min=a;	
	}
	cout<<max-min;
	return 0;
}

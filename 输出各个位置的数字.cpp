#include <iostream>
using namespace std;
int main()
{
	int n,out;
	cin>>n;
	if (n<0) n=-n; 
	while (n!=0)
	{
		out=n%10;
		n=n/10;
		cout<<out<<"  ";
	}
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	int k=10,a,min; 
	cin>>a;
	min=a;k--;
	while (k>=1)
	{
		cin>>a;
		k--;
		if (a<min) min=a;
	}
	cout<<min;
	return 0;
}

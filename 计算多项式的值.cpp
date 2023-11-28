#include <iostream>
using namespace std;
int main()
{
	int n;
	double x,sum=0;
	cin>>x>>n;
	//for  —≠ª∑º∆À„x[n]+...+x[1] 
	for(int i=0;i<n;i++)
	{
		sum=x*(sum+1); 
	}
	cout.precision(2);
	cout<<fixed<<sum+1;
	return 0; 
}

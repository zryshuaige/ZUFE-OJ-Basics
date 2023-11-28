#include <iostream>
using namespace std;


int main()
{
	int m,n,k=0,r;
	cin>>m>>n;
	r=m;
	while(r*4+k*2!=n)
	{
		r--; 
		k++;
	}
	cout<<"鸡的个数为"<<k<<" 兔子的个数为"<<r;
	return 0;
}

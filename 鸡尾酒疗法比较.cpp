#include <iostream>
using namespace std;
int main()
{
	int n,a,b;
	double ans;
	cin>>n;
	cin>>a>>b;
	ans=1.0*b/a;n--;
	while (n>0)
	{
		cin>>a>>b;
		if (1.0*b/a>ans+0.05)
			cout<<"better"<<endl;
		else if (1.0*b/a<ans-0.05)
			cout<<"worse"<<endl;
		else
			cout<<"same"<<endl;
		n--;
	}
	return 0;
}

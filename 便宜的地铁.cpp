#include <iostream>
using namespace std;


int main()
{
	double n,m,a,b,a1,b1=0; //min表示最小金额,a为单程票价格 ,a1b1表示票数量 
	cin>>n>>m>>a>>b; 
	int max_count=n/m,min=n*a;
	double ans[max_count+1];
	a1=n;
	for(int i=0;i<=max_count;i++)
	{
		ans[i]=a1*a+b1*b;
		a1-=m;
		b1++; 
	}
	
	
	for(int j=0;j<=max_count;j++)//搜索最小 
	{
		if(ans[j]<min)
		{
			min=ans[j]; 
		}
	}
	cout<<min;
	 
	return 0;
}

#include <iostream>
using namespace std;


int main()
{
	double n,m,a,b,a1,b1=0; //min��ʾ��С���,aΪ����Ʊ�۸� ,a1b1��ʾƱ���� 
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
	
	
	for(int j=0;j<=max_count;j++)//������С 
	{
		if(ans[j]<min)
		{
			min=ans[j]; 
		}
	}
	cout<<min;
	 
	return 0;
}

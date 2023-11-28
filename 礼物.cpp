#include <iostream>
using namespace std;


int main()
{
	int n,k,c,sum=0,n1=0;//n1为当前天数指针 
	int a[c];
	scanf("%d%d\n",&n,&k);
	scanf("%d",&c);
	for(int i=0;i<c;i++)
	{
		scanf("%d",&a[i]);
	}//输入部分 
	//for(int i=0;i<c;i++)
	//{
	//	printf("%d",a[i]);
	//}
	int j=0;
	while((((n1+k)<=n)||((a[j]-n1)<k))&&j<c)
	{
		if((a[j]-n1)>k)
		{
			n1+=k;
			sum++;
		}
		else if((a[j]-n1)==k)
		{
			n1+=k;
			sum++,j++;
		}
		else
		{
			n1=a[j];
			sum++,j++;
		}
	}
	if(j==c)
	{
		while((n1+k)<=n)
		{
			n1+=k;
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}

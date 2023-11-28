#include <iostream>
using namespace std;
double cul(double x,double y);
 
int main()
{
	int n,maxn,max=-1,k=1;//kÎªµ±Ç°ÐòºÅ 
	cin>>n;    
	double x,y;   
	while(k<=n)
	{
		cin>>x>>y;
		if(cul(x,y)>=max)
			{
			max=cul(x,y);
			maxn=k;
			}
		k++;
	}
	cout<<maxn;
	return 0;	
}

double cul(double x,double y)
{      
	return x*x+y*y; 
}

#the code is still updating to fix problems;
#include<iostream>
using namespace std;
int a[1005];

int isPrime(int x)
{
    for(int i=2;i<=x-1;i++)
        if(x%i==0)  return 0;
    return 1;
}
int main()
{
    int n;
    long int x;
    cin>>n;
    for(int i=1;i<=n;i++)	cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        int ans=1;
        x=a[i];
       	while(x>=10)
       	{
       		if(isPrime(x))
       		{
       			ans--;
       			while(x>0)
       			{
       				ans++;
       				x/=10;
				}
			}
			else 
			{
				for(int i=9;i>=2;i--)
					if(x%i==0)	
					{
						x/=i;
						ans++;
						break;
					}
			}		
		}
		cout<<ans<<endl;
    }
    return 0;
}

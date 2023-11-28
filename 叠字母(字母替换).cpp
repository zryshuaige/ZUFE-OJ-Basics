#include"iostream"
using namespace std;
char up(int x);
char down(int x);

int main()
{
	int n;
	cin>>n; 
	for (int i=1;i<=n;i++)
	{
		for(int p=i;p<n;p++)
		{
			cout<<" ";
		}
		for (int j=0;j<i;j++)
		{
			cout<<up(j);
		}
		for (int k=i-1;k>=0;k--)
		{
			cout<<down(k);
		}
		for(int q=i;q<n;q++)
		{
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}

char up(int x)
{
	char a,b;
	a=char('A');
	b=a+x;
	return b;	
}


char down(int x)
{
	char a,b;
	a=char('Z');
	b=a-x;
	return b;	
}

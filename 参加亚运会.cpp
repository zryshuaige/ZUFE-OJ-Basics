#include <iostream>
using namespace std;

int main()
{
	int n,flag=0,rem[2],k=0;//flag=1表示总体有，flagi=1表示局部有 
	char x;
	cin>>n;
	char wz[n][5];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>x;
			wz[i][j]=x;
		}	
	}
	
	for(int i=0;i<n;i++)
	{
		int flagi=1,ki=1;//ki表示后两位置判断 	
		int p=0;
		while(wz[i][p]!='|')//遇到|之前 
		{
			if(wz[i][p]=='X')
			{
				flagi=0;
			}
			p++;
		}
		if(flagi==0)
		{
			for(int k=1;k<=2;k++)
			{
				if(wz[i][k+2]=='X')	ki=0; 
			}
			if(ki==1)
			{
				rem[0]=i,rem[1]=3;
				flag=1;
				break;
			}
		}
		else	
		{
			rem[0]=i,rem[1]=0;
			flag=1;
			break; 
		}
	}
	wz[rem[0]][rem[1]]='+';
	wz[rem[0]][rem[1]+1]='+';
	
	
	if(flag==1)
	{
		cout<<"YES"<<endl;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<5;j++)
			{
				cout<<wz[i][j];
			}
			cout<<endl;
		}
	}
	else	cout<<"NO";
	
	return 0;
}

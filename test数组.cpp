#include <iostream>
using namespace std;


int main()
{
	int n,flag=0,rem[2];//flag=1��ʾ�����У�flagi=1��ʾ�ֲ��� 
	char x;
	cin>>n;
	int wz[n][5];
	for(int i=0;i<n;i++)
	{
		int flagi=1,ki=1;//ki��ʾ����λ���ж� 
		for(int j=0;j<5;j++)
		{
			cin>>x;
			wz[i][j]=x;
		
			while(x!='|')//����|֮ǰ 
			{
				if(x=='X')
				{
					flagi=0;
				}
				if(flagi==1)
				{
					rem[0]=i,rem[1]=0;//rem[1]Ϊ��ʼλ�� 
				} 
			}
			if(flagi==0)
			{
				for(int k=1;k<=2;k++)
				{
					if(x=='X')	ki=0; 
				}
				if(ki==1)
				{
					rem[0]=i,rem[1]=3;
					flag=1;
				}
			}
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

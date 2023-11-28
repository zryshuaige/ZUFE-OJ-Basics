#include<iostream>
using namespace std;

int  main()
{
	char a,b;
	int x,p,q;
	int flag=0;
	scanf("%c %c",&a,&b);
	getchar();
	scanf("%d",&x);
	char l[4];
	l[0]='v',l[1]='<',l[2]='^',l[3]='>';
	for(int i=0;i<4;i++)
	{
		if (l[i]==a)	p=i;
	}
	for(int i=0;i<4;i++)
	{
		if (l[i]==b)	q=i;
	}
	if((q-p+x)%4==0)	flag+=1;
	if((x+p-1)%4==0)    flag+=2;
	if(flag==0||flag==3)	printf("undefined");
	else if(flag==1)	printf("ccw");
	else if(flag==2)	printf("cw");
	return 0; 
}

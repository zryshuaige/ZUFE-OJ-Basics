#include <iostream>
using namespace std;


int main()
{
	char a,b;
	int x;
	char l[100];
	for(int i=0;i<=95;i+=4)
	{
		l[i]='^',l[i+1]='>',l[i+2]='v',l[i+3]='<';
	}
	scanf("%c %c",&a,&b);
	//getchar();
	scanf("%d",&x);
	int head=0;
	while(l[head]!=a)
	{
		head++;
	}
	int flag=0;
	if(l[head+x]==b)	flag+=1;
	if(l[head+4-x]==b)	flag+=2;
	if(flag==0)	printf("undefined");
	else if(flag==1)	printf("cw");
	else if(flag==2)	printf("ccw");
	else 	printf("undefined");
	//printf("%d",flag);
	return 0;
}

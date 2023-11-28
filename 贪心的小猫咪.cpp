#include<stdio.h>
#include<string.h>
#include<algorithm>
#define N 1000010
using namespace std;
char s[N];
int main()
{
	while(scanf("%s",s)!=EOF)
	{
		int l=strlen(s);
		int n=s[0]-'0';
		int k=0,i;
		for(i=1;i<l;i++)
		{
			if(s[i]-'0'>=n)
				n=s[i]-'0';
			else
			{
				s[i-1]='\0';
				break;
			}
		}
		if(i==l) 
			s[l-1]='\0';
		printf("%s",s);
		for(int j=i;j<l;j++)
			printf("%c",s[j]);
		printf("\n");
	}
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int x,i=0,a[5];
	while(i<=4)
	{
		cin>>x;
		a[i]=x;
		i++;
	}
	//cout<<((a[4]==3)+(a[0]==4));
	if(((a[4]==3)+(a[0]==4)==1)&&((a[0]==3)+(a[1]==1)==1)&&((a[1]==4)+(a[4]==2)==1)&&((a[3]==1)+(a[2]==3)==1))
	{
		cout<<"yes";
	}
	else	cout<<"no";
	
	return 0;
}

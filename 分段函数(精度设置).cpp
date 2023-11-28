#include <iostream>
using namespace std;
int main()
{
	double x,y;
	cin>>x;
	if (x>=0&&x<5)
		y=-x+2.5;
	else if (x>=5&&x<10)
		y=2-1.5*(x-3)*(x-3);
	else if (x>=10&&x<20)
		y=x/2-1.5;
	cout.precision(3);//设置精确度 
	cout<<fixed<<y;
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	double sum,a=81;
	cin>>n;
	do 
	{
		sum+=a;
		a=sqrt(a); 
		n--;		
	}
	while (n>0);
	cout.precision(6);//���þ�ȷ�� 
	cout<<fixed<<sum;
	return 0;
}

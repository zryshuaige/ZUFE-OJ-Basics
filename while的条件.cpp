#include <iostream>
using namespace std;
int main()
//while 条件是不等于0 
{
	int x=11,a=0;
	while (x%3) 
	{
		x--;
		a++;	
	}
	cout<<a;
	return 0;	
}

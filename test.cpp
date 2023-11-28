#include <iostream>
using namespace std;
int main()
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
